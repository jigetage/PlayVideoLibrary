#ifndef PlayVideoLib_H_
#define PlayVideoLib_H_

#ifndef PlayVideoLib_Export
#define PlayVideoLib_Export
#endif

#ifdef PlayVideoLib_Export
#define PLAY_VIDEO_LIB extern "C" _declspec(dllexport)
#else 
#define PLAY_VIDEO_LIB extern "C" _declspec(dllimport)
#endif 

typedef void (*msgHandler)(const char* szSessionId, unsigned int iMsgType, unsigned int iErrorCode, const char *pMessageInfo, void *pUser);

#include <Windows.h>
#include <string>

//! 导出C接口
#ifdef __cplusplus
extern "C"
{
#endif

	/*
	* \brief: 初始化库
	*/
	PLAY_VIDEO_LIB bool InitLib();

	/*
	* \brief: 释放库
	*/
	PLAY_VIDEO_LIB bool ReleaseLib();

	/*
	 * \brief: 播放视频
	 *
	 * \param[in]: hWnd0 主画面句柄
	 * \param[in]: dev0 主画面设备编号
	 * \param[in]: channel0 主画面设备通道
	 * \param[in]: hWnd1 侧画面句柄
	 * \param[in]: dev1 侧画面设备编号
	 * \param[in]: channel1 侧画面设备通道
	 */
	PLAY_VIDEO_LIB bool StartPlayVideo(int hWnd0 = 0, const char* dev0 = "", int channel0 = 0,
		int hWnd1 = 0, const char* dev1 = "", int channel1 = 0);

	/*
	* \brief: 停止播放视频
	*
	* \param[in]: hWnd 窗口句柄
	*/
	PLAY_VIDEO_LIB bool StopPlayVideo();

	/*
	* \brief: 设置回调函数
	*/
	PLAY_VIDEO_LIB bool SetCallbackFunc(msgHandler func);

#ifdef __cplusplus
}
#endif

#endif PlayVideoLib_H_  