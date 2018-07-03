#include "PlayVideoLib.h"
#include "Windows.h"
#include "DbgHelp.h"
#include "EzvizOpsInvoker.h"

int GenerateMiniDump(PEXCEPTION_POINTERS pExceptionPointers)
{
	// ���庯��ָ��
	typedef BOOL(WINAPI * MiniDumpWriteDumpT)(
		HANDLE,
		DWORD,
		HANDLE,
		MINIDUMP_TYPE,
		PMINIDUMP_EXCEPTION_INFORMATION,
		PMINIDUMP_USER_STREAM_INFORMATION,
		PMINIDUMP_CALLBACK_INFORMATION
		);
	// �� "DbgHelp.dll" ���л�ȡ "MiniDumpWriteDump" ����
	MiniDumpWriteDumpT pfnMiniDumpWriteDump = NULL;
	HMODULE hDbgHelp = LoadLibrary(TEXT("DbgHelp.dll"));
	if (NULL == hDbgHelp)
	{
		return EXCEPTION_CONTINUE_EXECUTION;
	}
	pfnMiniDumpWriteDump = (MiniDumpWriteDumpT)GetProcAddress(hDbgHelp, "MiniDumpWriteDump");

	if (NULL == pfnMiniDumpWriteDump)
	{
		FreeLibrary(hDbgHelp);
		return EXCEPTION_CONTINUE_EXECUTION;
	}
	// ���� dmp �ļ���
	TCHAR szFileName[MAX_PATH] = { 0 };
	TCHAR* szVersion = TEXT("DumpFile");
	SYSTEMTIME stLocalTime;
	GetLocalTime(&stLocalTime);
	wsprintf(szFileName, L"%s-%04d%02d%02d-%02d%02d%02d.dmp",
		szVersion, stLocalTime.wYear, stLocalTime.wMonth, stLocalTime.wDay,
		stLocalTime.wHour, stLocalTime.wMinute, stLocalTime.wSecond);
	HANDLE hDumpFile = CreateFile(szFileName, GENERIC_READ | GENERIC_WRITE,
		FILE_SHARE_WRITE | FILE_SHARE_READ, 0, CREATE_ALWAYS, 0, 0);
	if (INVALID_HANDLE_VALUE == hDumpFile)
	{
		FreeLibrary(hDbgHelp);
		return EXCEPTION_CONTINUE_EXECUTION;
	}
	// д�� dmp �ļ�
	MINIDUMP_EXCEPTION_INFORMATION expParam;
	expParam.ThreadId = GetCurrentThreadId();
	expParam.ExceptionPointers = pExceptionPointers;
	expParam.ClientPointers = FALSE;
	pfnMiniDumpWriteDump(GetCurrentProcess(), GetCurrentProcessId(),
		hDumpFile, MiniDumpWithDataSegs, (pExceptionPointers ? &expParam : NULL), NULL, NULL);
	// �ͷ��ļ�
	CloseHandle(hDumpFile);
	FreeLibrary(hDbgHelp);
	return EXCEPTION_EXECUTE_HANDLER;
}

LONG WINAPI ExceptionFilter(LPEXCEPTION_POINTERS lpExceptionInfo)
{
	// ������һЩ�쳣�Ĺ��˻���ʾ
	if (IsDebuggerPresent())
	{
		return EXCEPTION_CONTINUE_SEARCH;
	}
	return GenerateMiniDump(lpExceptionInfo);
}

bool InitLib()
{
	// �������dump�ļ�����
	SetUnhandledExceptionFilter(ExceptionFilter);
	return CEzvizOpsInvoker::GetInstance()->Init();
}

bool ReleaseLib()
{
	return CEzvizOpsInvoker::GetInstance()->Release();
}

bool StartPlayVideo(int hWnd0 /* = 0 */, const char* dev0 /* = "" */, int channel0 /* = 0 */, int hWnd1 /* = 0 */, const char* dev1 /* = "" */, int channel1 /* = 0 */)
{
	return CEzvizOpsInvoker::GetInstance()->Play((HWND)hWnd0, dev0, channel0, (HWND)hWnd1, dev1, channel1);
}

bool StopPlayVideo()
{
	return CEzvizOpsInvoker::GetInstance()->Stop();
}

bool SetCallbackFunc(msgHandler func)
{
	return CEzvizOpsInvoker::SetCallbackFunc(func);
}