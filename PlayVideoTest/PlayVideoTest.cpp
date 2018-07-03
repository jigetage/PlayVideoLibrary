// PlayVideoTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <functional>
#include "../PlayVideoLib/src/PlayVideoLib.h"

#ifdef _DEBUG
#define DLL_PATH "../Debug/PlayVideoLib.dll"
#else
#define DLL_PATH "../Release/PlayVideoLib.dll"
#endif // _DEBUG

typedef bool (*Init) (std::string&);
typedef bool (*Release) (const std::string&);
typedef bool(*Play) (HWND, std::string&);
typedef bool(*Stop) (const std::string&);

int main()
{
	HANDLE hModule = LoadLibrary(TEXT(DLL_PATH));
	if (!hModule)
	{
		printf("º”‘ÿPlayVideoLib.dll ß∞‹!\n");
	}

	std::string strSession("");
	bool bRes = true;
	Init funcInit = (Init)GetProcAddress((HMODULE)hModule, "InitLib");
	if (nullptr != funcInit)
	{
		bRes = funcInit(strSession);
	}

	std::string strSession_1("");
	Play funcPlay = (Play)GetProcAddress((HMODULE)hModule, "StartPlayVideo");
	if (nullptr != funcPlay)
	{
		bRes = funcPlay((HWND)(0x00480CEE), strSession_1);
	}

	Stop stopPlay = (Stop)GetProcAddress((HMODULE)hModule, "StopPlayVideo");
	if (nullptr != stopPlay)
	{
		bRes = stopPlay(strSession_1);
	}

	Release funcRelease = (Release)GetProcAddress((HMODULE)hModule, "ReleaseLib");
	if (nullptr != funcRelease)
	{
		bRes = funcRelease(strSession);
	}

	FreeLibrary((HMODULE)hModule);

	return 0;
}