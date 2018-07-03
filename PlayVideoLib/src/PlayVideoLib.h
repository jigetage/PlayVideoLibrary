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

//! ����C�ӿ�
#ifdef __cplusplus
extern "C"
{
#endif

	/*
	* \brief: ��ʼ����
	*/
	PLAY_VIDEO_LIB bool InitLib();

	/*
	* \brief: �ͷſ�
	*/
	PLAY_VIDEO_LIB bool ReleaseLib();

	/*
	 * \brief: ������Ƶ
	 *
	 * \param[in]: hWnd0 ��������
	 * \param[in]: dev0 �������豸���
	 * \param[in]: channel0 �������豸ͨ��
	 * \param[in]: hWnd1 �໭����
	 * \param[in]: dev1 �໭���豸���
	 * \param[in]: channel1 �໭���豸ͨ��
	 */
	PLAY_VIDEO_LIB bool StartPlayVideo(int hWnd0 = 0, const char* dev0 = "", int channel0 = 0,
		int hWnd1 = 0, const char* dev1 = "", int channel1 = 0);

	/*
	* \brief: ֹͣ������Ƶ
	*
	* \param[in]: hWnd ���ھ��
	*/
	PLAY_VIDEO_LIB bool StopPlayVideo();

	/*
	* \brief: ���ûص�����
	*/
	PLAY_VIDEO_LIB bool SetCallbackFunc(msgHandler func);

#ifdef __cplusplus
}
#endif

#endif PlayVideoLib_H_  