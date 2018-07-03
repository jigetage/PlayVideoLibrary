#include "EzvizOpsInvoker.h"
#include "LogOperate.h"
#include "configmanager.h"
#include "ezviz/OpenNetStreamInterFace.h"

static std::mutex m_mutexInvoker;
CEzvizOpsInvoker* CEzvizOpsInvoker::m_Instance = nullptr;
std::mutex CEzvizOpsInvoker::m_mutexCallback;
msgHandler CEzvizOpsInvoker::m_func = nullptr;

CEzvizOpsInvoker* CEzvizOpsInvoker::GetInstance()
{
	m_mutexInvoker.lock();
	if (nullptr == m_Instance)
	{
		m_Instance = new CEzvizOpsInvoker;
	}
	m_mutexInvoker.unlock();
	return m_Instance;
}

void CEzvizOpsInvoker::UnInstance()
{
	m_mutexInvoker.lock();
	if (nullptr != m_Instance)
	{
		delete m_Instance;
		m_Instance = nullptr;
	}
	m_mutexInvoker.unlock();
}

bool CEzvizOpsInvoker::SetCallbackFunc(msgHandler func)
{
	m_func = func;
	if (nullptr == m_func)
	{
		return false;
	}
	return true;
}

bool CEzvizOpsInvoker::Init()
{
	std::lock_guard<std::mutex> lock(m_mutexInterface);
	//! 获取日志对象
	auto pLog = CLogOperate::GetInstance();
	pLog->InfoLog("开始初始化视频播放库");

	//! 获取最新accessToken和expireTime
	CYingshi* pYingshi = CYingshi::GetInstance();
	//! 获取最新accessToken
	if (!pYingshi->RefreshToken())
	{
		pLog->ErrorLog("RefreshToken failed");
		return false;
	}

	std::string strToken = "accessToken is: " + pYingshi->GetCurrentYingshiConfig().token;
	pLog->InfoLog(strToken);

	//! 初始化opennetstream库
	int nRet = OpenSDK_InitLib(
		pYingshi->GetCurrentYingshiConfig().authAddress.c_str(),
		pYingshi->GetCurrentYingshiConfig().platformAddress.c_str(),
		pYingshi->GetCurrentYingshiConfig().appKey.c_str());
	if (0 != nRet)
	{
		pLog->ErrorLog("OpenSDK_InitLib failed");
		goto END;
	}
	else
	{
		pLog->InfoLog("OpenSDK_InitLib success");
	}

	//! 设置accessToken
	nRet = OpenSDK_SetAccessToken(pYingshi->GetCurrentYingshiConfig().token.c_str());
	if (0 != nRet)
	{
		pLog->ErrorLog("OpenSDK_SetAccessToken failed");
		goto END;
	}
	else
	{
		pLog->InfoLog("OpenSDK_SetAccessToken success");
	}

	pLog->InfoLog("Init success");
	return true;

END:
	pLog->ErrorLog("Init failed");
	return false;
}

bool CEzvizOpsInvoker::Release()
{
	std::lock_guard<std::mutex> lock(m_mutexInterface);
	//! 获取日志对象
	auto pLog = CLogOperate::GetInstance();
	pLog->InfoLog("Start release lib");

	//! 停止正在播放的视频
	if (!Stop())
	{
		pLog->ErrorLog("Stop play video failed");
		return false;
	}
	pLog->InfoLog("Stop play video success");

	//! 关闭opennetstream
	int nRet = OpenSDK_FiniLib();
	if (0 != nRet)
	{
		pLog->ErrorLog("OpenSDK_FiniLib failed");
		goto END;
	}
	else
	{
		pLog->InfoLog("OpenSDK_FiniLib success");
	}

	pLog->InfoLog("Release success");
	return true;

END:
	pLog->ErrorLog("Release failed");
	return false;
}

bool CEzvizOpsInvoker::Play(HWND hWnd0, std::string dev0, int channel0, HWND hWnd1, std::string dev1, int channel1)
{
	std::lock_guard<std::mutex> lock(m_mutexInterface);
	
	//! 获取日志对象
	auto pLog = CLogOperate::GetInstance();
	pLog->InfoLog("Start play video");

	//! 停止正在播放的视频
	if (!Stop())
	{
		pLog->ErrorLog("Stop play video failed");
		return false;
	}
	pLog->InfoLog("Stop play video success");

	if (0 == hWnd0 || !dev0.empty())
	{
		//! 生成sessionid
		auto session0 = GenerateSessionId();
		if (session0.empty())
		{
			pLog->ErrorLog("GenerateSessionId failed");
			return false;
		}
		else
		{
			pLog->InfoLog("GenerateSessionId success");
		}
		m_vecSessions.push_back(session0);

		//! 打开并播放视频码流
		if (0 != OpenSDK_StartRealPlayEx(session0.c_str(), hWnd0, dev0.c_str(), channel0, ""))
		{
			pLog->ErrorLog("对主摄像头执行OpenSDK_StartRealPlayEx失败");
			return false;
		}
		else
		{
			pLog->InfoLog("对主摄像头执行OpenSDK_StartRealPlayEx成功");
		}
	}
	
	if (0 == hWnd1 || !dev1.empty())
	{
		//! 生成sessionid
		auto session1 = GenerateSessionId();
		if (session1.empty())
		{
			pLog->ErrorLog("GenerateSessionId failed");
			return false;
		}
		else
		{
			pLog->InfoLog("GenerateSessionId success");
		}
		m_vecSessions.push_back(session1);

		//! 打开并播放视频码流
		if (0 != OpenSDK_StartRealPlayEx(session1.c_str(), hWnd1, dev1.c_str(), channel1, ""))
		{
			pLog->ErrorLog("对侧摄像头执行OpenSDK_StartRealPlayEx失败");
			return false;
		}
		else
		{
			pLog->InfoLog("对侧摄像头执行OpenSDK_StartRealPlayEx成功");
		}
	}

	return true;
}

bool CEzvizOpsInvoker::Stop()
{
	//! 获取日志对象
	auto pLog = CLogOperate::GetInstance();
	
	if (m_vecSessions.empty())
	{
		pLog->InfoLog("No video is playing now");
		return true;
	}
	
	pLog->InfoLog("Stop play video");
	for (auto i : m_vecSessions)
	{
		if (0 != OpenSDK_StopRealPlayEx(i.c_str()))
		{
			pLog->ErrorLog("OpenSDK_StopRealPlayEx failed");
			return false;
		}
		else
		{
			pLog->InfoLog("OpenSDK_StopRealPlayEx success");
		}

		//! 释放session
		if (0 != OpenSDK_FreeSession(i.c_str()))
		{
			pLog->ErrorLog("OpenSDK_FreeSession failed");
			return false;
		}
		else
		{
			pLog->InfoLog("OpenSDK_FreeSession success");
		}
	}

	m_vecSessions.clear();
	return true;
}

std::string CEzvizOpsInvoker::GenerateSessionId()
{
	//! 获取日志对象
	auto pLog = CLogOperate::GetInstance();
	pLog->InfoLog("GenerateSessionId");

	char* pSession = nullptr;
	int length = 0;
	int nRet = OpenSDK_AllocSessionEx((OpenSDK_MessageHandler)MsgHandler, this, &pSession, &length);
	if (0 != nRet)
	{
		return "";
	}
	char szSession[256] = { 0 };
	memcpy_s(szSession, 256, pSession, length);
	std::string strSession = szSession;
	OpenSDK_Data_Free(pSession);

	std::string logSessionId = "SessionId is: " + strSession;
	pLog->InfoLog(logSessionId);
	return strSession;
}

void CEzvizOpsInvoker::MsgHandler(const char* szSessionId, unsigned int iMsgType, unsigned int iErrorCode, const char *pMessageInfo, void *pUser)
{
	m_mutexCallback.lock();
	
	//! 执行js中回调函数
	if (nullptr != m_func)
	{
		m_func(szSessionId, iMsgType, iErrorCode, pMessageInfo, pUser);
	}

	//! 获取日志对象
	auto pLog = CLogOperate::GetInstance();
	pLog->InfoLog("Handling message");

	if (!pUser)
	{
		pLog->ErrorLog("user data is nullptr");
		return;
	}

	switch (iMsgType) {
		case INS_PLAY_EXCEPTION: // 播放异常，通常是设备断线或网络异常造成
			pLog->ErrorLog("INS_PLAY_EXCEPTION");
			HandlerForPlayException(iErrorCode, pMessageInfo);
			break;

		case INS_PLAY_RECONNECT: // 重连，实时流播放时内部会自动重连
			pLog->ErrorLog("INS_PLAY_RECONNECT");
			break;

		case INS_PLAY_RECONNECT_EXCEPTION: // 重连异常
			pLog->ErrorLog("INS_PLAY_RECONNECT_EXCEPTION");
			HandlerForPlayReconnectException(iErrorCode, pMessageInfo);
			break;

		case INS_PLAY_START: // 播放开始
			pLog->InfoLog("INS_PLAY_START");
			HandlerForPlayStart();
			break;

		case INS_PLAY_STOP: // 播放终止
			pLog->InfoLog("INS_PLAY_STOP");
			HandlerForPlayStop();
			break;

		case INS_RECORD_SEARCH_END: // 录像查询失败
			pLog->ErrorLog("INS_RECORD_SEARCH_END");
			break;

		case INS_RECORD_FILE:
			pLog->InfoLog("INS_RECORD_FILE");
			break;

		case INS_RECORD_SEARCH_FAILED:
			pLog->InfoLog("INS_RECORD_SEARCH_FAILED");
			break;

		default:
			pLog->InfoLog("Default");
			break;	
	}
	m_mutexCallback.unlock();
}

void CEzvizOpsInvoker::HandlerForPlayException(unsigned int& iErrorCode, const char* msgInfo)
{
	auto convertPlayErrorToMessage = [](const char* szError)->std::string {
		if (nullptr == szError)
			return "";

		std::string msg("");

		if (strcmp(OPEN_SDK_STREAM_ACCESSTOKEN_ERROR_OR_EXPIRE, szError) == 0)
			msg = "accesstoken失效，请重新获取accesstoken";
		else if (strcmp(OPEN_SDK_STREAM_PU_NO_RESOURCE, szError) == 0)
			msg = "设备连接数过大，停止其他连接后再试试";
		else if (strcmp(OPEN_SDK_STREAM_TRANSF_DEVICE_OFFLINE, szError) == 0)
			msg = "设备不在线，确认设备上线之后重试";
		else if (strcmp(OPEN_SDK_STREAM_UNSUPPORTED, szError) == 0)
			msg = "设备不支持的清晰度类型, 请根据设备预览能力级选择";
		else if (strcmp(OPEN_SDK_STREAM_INNER_VERIFYCODE_ERROR, szError) == 0)
			msg = "视频验证码错误，建议查看设备上标记的验证码";
		else if (strcmp(OPEN_SDK_STREAM_PLAY_FAIL, szError) == 0)
			msg = "视频播放失败";
		else if (strcmp(OPEN_SDK_STREAM_TRANSF_TERMINAL_BINDING, szError) == 0)
			msg = "当前账号开启了终端绑定，只允许指定设备登录操作";
		else
			msg = "播放失败";

		return msg;
	};

	auto pLog = CLogOperate::GetInstance();
	
	if (strcmp(OPEN_SDK_STREAM_ACCESSTOKEN_ERROR_OR_EXPIRE, msgInfo) == 0)
	{
		//! 获取最新accesstoken并设置
		CYingshi* pYingshi = CYingshi::GetInstance();
		if (!pYingshi->RefreshToken())
		{
			pLog->ErrorLog("RefreshToken failed");
			return;
		}
		OpenSDK_SetAccessToken(pYingshi->GetCurrentYingshiConfig().token.c_str());
	}
	else
	{
		std::string desc = "播放异常: " + convertPlayErrorToMessage(msgInfo) + "(错误码" +	 + ": " + std::to_string(iErrorCode) + ")";
		pLog->ErrorLog(desc);
	}
}

void CEzvizOpsInvoker::HandlerForPlayReconnectException(unsigned int& iErrorCode, const char* msgInfo)
{
	std::string errorString = "重连异常, errorCode = " + std::to_string(iErrorCode);
	auto pLog = CLogOperate::GetInstance();
	pLog->ErrorLog(errorString);
}

void CEzvizOpsInvoker::HandlerForPlayStart()
{
	auto pLog = CLogOperate::GetInstance();
	pLog->ErrorLog("开始播放视频");
}

void CEzvizOpsInvoker::HandlerForPlayStop()
{
	auto pLog = CLogOperate::GetInstance();
	pLog->ErrorLog("停止播放视频");
}