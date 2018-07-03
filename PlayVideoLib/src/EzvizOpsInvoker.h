#ifndef EZVIZ_OPS_INVOKER
#define EZVIZ_OPS_INVOKER

#include <windows.h>
#include <mutex>
#include <vector>

typedef void(*msgHandler)(const char* szSessionId, unsigned int iMsgType, unsigned int iErrorCode, const char *pMessageInfo, void *pUser);

class CEzvizOpsInvoker
{
public:
	static CEzvizOpsInvoker* GetInstance();
	static void UnInstance();
	static bool SetCallbackFunc(msgHandler func);

	bool Init();
	bool Release();
	/*
	* \brief: 播放视频
	*
	* \param[in]: dev0 主摄像头设备号，为空字符串的话表示无设备
	* \param[in]: dev1 侧摄像头设备号，为空字符串的话表示无设备
	*/
	bool Play(HWND hWnd0, std::string dev0, int channel0,
		HWND hWnd1, std::string dev1, int channel1);
	bool Stop();

private:
	CEzvizOpsInvoker() = default;
	~CEzvizOpsInvoker() = default;

	std::string GenerateSessionId();

	static void __stdcall MsgHandler(const char* szSessionId, unsigned int iMsgType, unsigned int iErrorCode, const char *pMessageInfo, void *pUser);

	static msgHandler m_func;

	static void HandlerForPlayException(unsigned int& iErrorCode, const char* msgInfo);
	static void HandlerForPlayReconnectException(unsigned int& iErrorCode, const char* msgInfo);
	static void HandlerForPlayStart();
	static void HandlerForPlayStop();

private:
	std::mutex m_mutexInterface;
	static std::mutex m_mutexCallback;
	static CEzvizOpsInvoker* m_Instance;
	std::vector<std::string> m_vecSessions;
};
#endif // EZVIZ_OPS_INVOKER