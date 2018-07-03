/** \file      INS_ErrorCode.h
 *  \copyright HangZhou Hikvision System Technology Co.,Ltd. All Right Reserved.
 *  \brief     ����SDK��Ϣ�ص��ӿ�����Ϣ�����Լ�������Ķ���
 *
 *  \author    pikongxuan
 *  \date      2015/07/07
 */
 
 #ifndef _INS_ERRORCODE_H_
 #define _INS_ERRORCODE_H_

/** \define  MessageInfo 
 *  \brief ��Ϣ���ݶ��壬Ԥ���ͻط�ʱ����Ϣ�ص��ӿ�����Ϣ����
 */
#define INS_EXECUTION_PROCESS_ADDTASK      "7_1" ///< ���񱻳ɹ����������"
#define INS_EXECUTION_PROCESS_TASKDO       "7_2" ///< ����ʼ��ִ��"
#define INS_EXECUTION_PROCESS_PARSE_PARAM  "7_3" ///< ����������Ϣ"
#define INS_EXECUTION_PROCESS_LOCAL        "7_4" ///< :�жϾ�����"
#define INS_EXECUTION_PROCESS_CHECKPWD	   "7_5" ///< :��֤�豸����"
#define INS_EXECUTION_PROCESS_NETTYPE      "7_5" ///< :ѡ��ȡ����ʽ"
#define INS_EXECUTION_PROCESS_PSIA         "7_6_1"///<:����ʹ��PSIA��ʽȡ��"
#define INS_EXECUTION_PROCESS_P2P          "7_6_2"///<:����ʹ��P2P��ʽȡ��"
#define INS_EXECUTION_PROCESS_VTDU         "7_6_3"///<:����ʹ��VTDU��ʽȡ��"
#define INS_EXECUTION_PROCESS_TASKEND      "7_7_1"///<:����ȡ��ʧ�ܣ�����ȡ��"
#define INS_EXECUTION_PROCESS_TASKEND_SUCC "7_7_2"///<:����ȡ���ɹ�������������ȴ�����������"
#define INS_EXECUTION_PROCESS_NEXT         "7_8"  ///<:����ȡ��ʧ�ܣ��л�ȡ����ʽ"
#define INS_EXECUTION_PROCESS_PSIA_PORT    "7_9"  ///<:��ȡ����PSIAȡ���˿�" 


/// ��Ϣ�ص��д����붨�壬 ������Ϣ�ص��ӿ��еĴ�����
#define INS_ERROR_NOERROR                     0 ///<�޴���
#define INS_ERROR_LOAD_RTSP_FAILED            1 ///<����rtsp��ʧ��
#define INS_ERROR_LOAD_PLAYCTRL_FAILED        2 ///<���ز��ſ�ʧ��
#define INS_ERROR_LOAD_SYSTRANSFORM_FAILED    3 ///<����ת��װ��ʧ��
#define INS_ERROR_LOAD_HTTPCLIENT_FAILED      4 ///<����http��ʧ��
#define INS_ERROR_PARAMETER_ERROR             5 ///<��������
#define INS_ERROR_ORDER_ERROR                 6 ///<����˳�����
#define INS_ERROR_ALLOC_RESOURCE_FAILED       7 ///<������Դʧ��
#define INS_ERROR_NOT_INITLIB                 8 ///<û�г�ʼ��
#define INS_ERROR_OPERTION_NOSUPPORT          9 ///<������֧��
#define INS_ERROR_OPENFILE_ERROR              10 ///<���ļ�ʧ��
#define INS_ERROR_WRITEFILE_ERROR             11 ///<д�ļ�ʧ��
#define INS_ERROR_READFILE_ERROR              12 ///<���ļ�ʧ��
#define INS_ERROR_INIT_HPR_FAILED             13 ///<��ʼ��hpr��ʧ��
#define INS_ERROR_AUDIO_MONOPOLIZED           14 ///<��������ռ
#define INS_ERROR_CREATE_SOCKET_ERROR         15 ///<����socketʧ��
#define INS_ERROR_NETWORK_CONNECT_FAILED      16 ///<����ʧ��
#define INS_ERROR_NETWORK_SEND_ERROR          17 ///<����ʧ��
#define INS_ERROR_NETWORK_RECV_ERROR          18 ///<����ʧ��
#define INS_ERROR_NETWORK_SEND_TIMEOUT        19 ///<���ͳ�ʱ
#define INS_ERROR_NETWORK_RECV_TIMEOUT        20 ///<���ճ�ʱ
#define INS_ERROR_NETWORK_RESOLVE_FAILED      21 ///<������������
#define INS_ERROR_XML_PARSE_ERROR             22 ///<xml��������
#define INS_ERROR_XML_NODE_ERROR              23 ///<xml������
#define INS_ERROR_NO_EXCEL_DRIVER_ERROR       24 ///<û�а�װExcel����
#define INS_ERROR_PARSE_URL_FAILED            25 ///<URL����ʧ��
#define INS_ERROR_LOADRTSPSDKPROC_ERROR       26 ///<�Ҳ���rtsp�ӿڵ�ַ
#define INS_ERROR_LOADPLAYERSDKPROC_ERROR     27 ///<�Ҳ������ſ�ӿڵ�ַ
#define INS_ERROR_LOADSYSTRANSFORMPROC_ERROR  28 ///<�Ҳ���ת��װ��ӿڵ�ַ
#define INS_ERROR_LOADHTTPSDKPROC_ERROR       29 ///<�Ҳ���http��ӿڵ�ַ
#define INS_ERROR_START_WAVEIN_FAILED         30 ///<��ʼ��Ƶ�ɼ�ʧ��
#define INS_ERROR_START_WAVEOUT_FAILED        31 ///<��ʼ��Ƶ����ʧ��
#define INS_ERROR_INIT_G722_CODEC_FAILED      32 ///<��ʼ��G722�����ʧ��
#define INS_ERROR_NOT_ENOUGH_DISK_FREESPACE   33 ///<���̿ռ䲻��
#define INS_ERROR_FILE_ALREADY_EXIST          34 ///<�ļ��Ѵ���

#define INS_ERROR_LOAD_PPV_FAILED             35  ///<����ppv��ʧ��
#define INS_ERROR_LOADPPVSDKPROC_ERROR        36 ///<�Ҳ���libPPVClient�ӿڵ�ַ

#define INS_ERROR_LOAD_STUN_FAILED             37  ///<����stun��ʧ��
#define INS_ERROR_LOADSTUNSDKPROC_ERROR        38  ///<�Ҳ���StunClientLib�ӿڵ�ַ

#define INS_ERROR_RECORD_FILE_NOT_EXIST        39 ///< �Ҳ���ָ��ʱ�䷶Χ�ڵ�¼���ļ�
#define INS_ERROR_FAILED_RTSP_PORT             40 ///< ͨ��PSIAȡ������ȡRTSP�˿�ʧ��

#define INS_ERROR_SSL_CONNECT_FAILED           41 ///<SSL��ʽ����ʧ��
#define INS_ERROR_JSON_PARSE_ERROR             42 ///<JSON����ʧ��

#define INS_ERROR_LOADCASSDKPROC_ERROR         43 ///<�Ҳ���libCASClient�ӿڵ�ַ
#define INS_ERROR_LOAD_CAS_FAILED              44  ///<����CASClient��ʧ��
#define INS_ERROR_OPERATIONCODE_FAILED         45  ///<��ȡ������ʧ��
#define INS_ERROR_LOAD_GETHDSIGN_FAILED        46  ///<����libGetHDSign��ʧ��

#define INS_ERROR_HDSIGN_FAILED				  47  ///<��ȡӲ��������ʧ��
#define INS_ERROR_NULL_ADDRESS				  48  ///<GetIpAddress����IPΪ��

/// rtsp�������
#define INS_ERROR_RTSP_INIT_FAILED           50
#define INS_ERROR_RTSP_NOT_INIT              51
#define INS_ERROR_RTSP_PARSE_ERROR           52
#define INS_ERROR_RTSP_STATUS_ERROR          53
#define INS_ERROR_RTSP_INIT_RTP_ERROR        54
#define INS_ERROR_RTSP_CREATE_SOCKET_ERROR   55
#define INS_ERROR_RTSP_CONNECT_FAILED        56
#define INS_ERROR_RTSP_HTTP_GET_ERROR        57
#define INS_ERROR_RTSP_HTTP_POST_ERROR       58
#define INS_ERROR_RTSP_GETPORT_FAILED        59

/// �������ſ����
#define  INS_ERROR_PLAYM4_NOERROR				100	///<no error
#define	 INS_ERROR_PLAYM4_PARA_OVER				101	///<input parameter is invalid;
#define  INS_ERROR_PLAYM4_ORDER_ERROR			102	///<The order of the function to be called is error.
#define	 INS_ERROR_PLAYM4_TIMER_ERROR			103	///<Create multimedia clock failed;
#define  INS_ERROR_PLAYM4_DEC_VIDEO_ERROR		104	///<Decode video data failed.
#define  INS_ERROR_PLAYM4_DEC_AUDIO_ERROR		105	///<Decode audio data failed.
#define	 INS_ERROR_PLAYM4_ALLOC_MEMORY_ERROR		106	///<Allocate memory failed.
#define  INS_ERROR_PLAYM4_OPEN_FILE_ERROR		107	///<Open the file failed.
#define  INS_ERROR_PLAYM4_CREATE_OBJ_ERROR		108	///<Create thread or event failed
#define  INS_ERROR_PLAYM4_CREATE_DDRAW_ERROR		109	///<Create DirectDraw object failed.
#define  INS_ERROR_PLAYM4_CREATE_OFFSCREEN_ERROR 110	///<failed when creating off-screen surface.
#define  INS_ERROR_PLAYM4_BUF_OVER			    111	///<buffer is overflow
#define  INS_ERROR_PLAYM4_CREATE_SOUND_ERROR	    112	///<failed when creating audio device.	
#define	 INS_ERROR_PLAYM4_SET_VOLUME_ERROR	    113	///<Set volume failed
#define  INS_ERROR_PLAYM4_SUPPORT_FILE_ONLY	    114	///<The function only support play file.
#define  INS_ERROR_PLAYM4_SUPPORT_STREAM_ONLY	115	///<The function only support play stream.
#define  INS_ERROR_PLAYM4_SYS_NOT_SUPPORT		116	///<System not support.
#define  INS_ERROR_PLAYM4_FILEHEADER_UNKNOWN     117	///<No file header.
#define  INS_ERROR_PLAYM4_VERSION_INCORRECT	    118	///<The version of decoder and encoder is not adapted.  
#define  INS_ERROR_PLAYM4_INIT_DECODER_ERROR     119	///<Initialize decoder failed.
#define  INS_ERROR_PLAYM4_CHECK_FILE_ERROR	    120	///<The file data is unknown.
#define  INS_ERROR_PLAYM4_INIT_TIMER_ERROR	    121	///<Initialize multimedia clock failed.
#define	 INS_ERROR_PLAYM4_BLT_ERROR			    122	///<Blt failed.
#define  INS_ERROR_PLAYM4_UPDATE_ERROR		    123	///<Update failed.
#define  INS_ERROR_PLAYM4_OPEN_FILE_ERROR_MULTI  124   ///<openfile error, streamtype is multi
#define  INS_ERROR_PLAYM4_OPEN_FILE_ERROR_VIDEO  125   ///<openfile error, streamtype is video
#define  INS_ERROR_PLAYM4_JPEG_COMPRESS_ERROR    126   ///<JPEG compress error
#define  INS_ERROR_PLAYM4_EXTRACT_NOT_SUPPORT    127	///<Don't support the version of this file.
#define  INS_ERROR_PLAYM4_EXTRACT_DATA_ERROR     128	///<extract video data failed.
#define  INS_ERROR_PLAYM4_SECRET_KEY_ERROR       129	///<Secret key is error ///<add 20071218
#define  INS_ERROR_PLAYM4_DECODE_KEYFRAME_ERROR  130 ///< ����ؼ�֡ʧ��
#define  INS_ERROR_PLAYM4_NEED_MORE_DATA         131 ///< ���ݲ���
#define  INS_ERROR_PLAYM4_INVALID_PORT           132 ///< ��Ч�˿ں�
#define  INS_ERROR_PLAYM4_NOT_FIND               133 ///< ����ʧ��
#define  INS_ERROR_PLAYM4_FAIL_UNKNOWN           199 ///< δ֪�Ĵ���

//E�ұ��ķ���ֵ
#define INS_ERROR_PWD_ERROR		401 //�����
#define INS_ERROR_FORMAT_ERROR	501 //��ʽ����
#define INS_ERROR_FORMATING		400 //��ʽ����
#define INS_ERROR_STREAM_LIMIT	410 //ȡ��·������
#define INS_ERROR_NO_RECORD		402 //��ʱ��ط���¼��
#define INS_ERROR_EDEFENSE_NO_SUPPORT		402 //��֧�ֲ���
#define INS_ERROR_FAILED			500 //����ִ��ʧ��
#define INS_ERROR_DEV_NOT_ONLINE	801 //�豸������
#define INS_ERROR_PRIVACY		409 //��˽����״̬

/// common   error  2000~3000
#define INS_ERROR_V17_COMMON_BASE								2000
#define INS_ERROR_V17_GET_OPERATIONCODE_ERROR					2001 ///<��ȡ������ʧ��
#define INS_ERROR_V17_GET_TOKEN_ERROR							2002 ///<��ȡȡ��tokenʧ��
#define INS_ERROR_V17_SETAUDIOINCALLBACK_ERROR					2003 ///<���������ɼ��ص�����ʧ��
#define INS_ERROR_V17_STARTPLAY_ERROR							2004 ///<������������ʧ��
#define INS_ERROR_V17_STARTAUDIOIN_ERROR						2005 ///<�����ɼ���������ʧ��
#define INS_ERROR_V17_TTS_CREATETALK_ERROR						2006 ///<tts TALK_VTDU CreateTalk error
#define INS_ERROR_V17_TTS_SETDATACALLBACK_ERROR					2007 ///<tts TALK_VTDU SetDataCallBack error
#define INS_ERROR_V17_TTS_SETMSGCALLBACK_ERROR					2008 ///<tts TALK_VTDU SetMsgCallBack error
#define INS_ERROR_V17_TTS_STARTTALK_ERROR		   				2009 ///<tts TALK_VTDU StartTalk error
#define INS_ERROR_V17_CAS_CREATESESSION_ERROR					2010 ///<cas TALK_TCP/TALK_UDP CreateSession error
#define INS_ERROR_V17_CAS_VOICETALKSTART_ERROR					2011 ///<cas TALK_TCP/TALK_UDP VoiceTalkStart error
#define INS_ERROR_V17_PERMANENTKEY_EXCEPTION         			2012   ///<����������Կ  1.������Կ������MD5��Կ����� 
#define INS_ERROR_V17_VTDU_OPERKEY_ERROR						2013 ///<VTDU���صĲ���������������Կ����
#define INS_ERROR_V17_STOPAUDIOIN_ERROR							2014 ///<ֹͣ�����ɼ�ʧ��
#define INS_ERROR_V17_STOPPLAY_ERROR							2015 ///<ֹͣ��������ʧ��
#define INS_ERROR_V17_STOPAUDIOIN_SUCC							2016 ///<ֹͣ�����ɼ��ɹ�
#define INS_ERROR_V17_STOPPLAY_SUCC								2017 ///<ֹͣ�������ųɹ�
#define INS_ERROR_V17_VTDU_TIMEOUT								2021	///<��ý�����豸���ͻ�������ʱ
#define INS_ERROR_V17_VTDU_CKECK_TOKEN							2022 ///<��֤tokenʧ��
#define INS_ERROR_V17_CLIENT_URL_ERROR						    2023 ///<�ͻ��˵�URL��ʽ����
#define INS_ERROR_V17_VTDU_CLIENT_TIMEOUT						2025 ///<vtdu�ͻ��˽��ջ�Ӧ��ʱ
#define INS_ERROR_V17_STREAM_SESSION_ERROR						2026 ///<ȡ��session����	
#define INS_ERROR_V17_WAIT_HEADER_TIMEOUT						2027 ///<�ȴ���ͷ��ʱ
#define INS_ERROR_V17_USER_STOP									2028 ///<�û�ֹͣ
#define INS_ERROR_V17_DECRYPT_ERROR								2029  ///<����ʧ��

/// vtud���
#define INS_ERROR_V17_VTDU_CREATE_SESSION						2031		 ///<vtduȡ������sessionʧ��
#define INS_ERROR_V17_VTDU_DESTORY_SESSION						2032		 ///<vtduȡ������sessionʧ��
#define INS_ERROR_V17_VTDU_START								2033		 ///<vtduȡ����ʼʧ�ܣ�����-1ʱ����
#define INS_ERROR_V17_VTDU_STOP									2034		///<vtduȡ��ֹͣʧ��
#define INS_ERROR_V17_VTDU_PAUSE								2035		 ///<vtduȡ����ͣʧ��
#define INS_ERROR_V17_VTDU_RESUME								2036		///<vtduȡ���ָ�ʧ��
#define INS_ERROR_V17_VTDU_CHANGE_RATE							2037		///<vtduȡ���ı�����ʧ��


#define INS_ERROR_V17_VTDU_TOKEN_NO_AUTHORITY					2044	 ///<VTDU token��Ȩ��
#define INS_ERROR_V17_VTDU_SESSION_NO_EXIST						2045	 ///<VTDU session������
#define INS_ERROR_V17_VTDU_TOKEN_OTHER							2046	 ///<VTDU ��֤token�����쳣�������壩
#define INS_ERROR_V17_VTDU_TOKEN_NOCONNECT_VTM					2047	 ///<VTDU �ͻ������Ӳ���VTM
#define INS_ERROR_V17_VTDU_TOKEN_NOCONNECT_VTDU					2048	 ///<VTDU �ͻ������Ӳ���VTDU
#define INS_ERROR_V17_INVALID_DEVICE_CHANNAL					2049 ///<�豸ͨ����
#define INS_ERROR_V17_DEVICE_UNSUPPORT_STREAMTYPE				2050 ///<�豸��֧�ֵ���������
#define INS_ERROR_V17_DEVICE_UNCONNECT_VTDU						2051 ///<�豸���Ӳ�����ý��
#define INS_ERROR_V17_CLIENT_ERROR_CASIP						2052 ///<�ͻ��˸���cas��ַ��Ϣ����
#define INS_ERROR_V17_VIDEO_SHARED_TIMEEND						2053 ///<��Ƶ����ʱ���Ѿ�����
#define INS_ERROR_V17_VTDU_RECV_HEADER_TIMEOUT					2054	///<��ý�������ͷ��ʱ8s
#define INS_ERROR_V17_VTDU_VTDU_IPARAMTYPE_ERROR				2055		///< Vtdu iParamType error
#define INS_ERROR_V17_GET_OPERATIONCODE_PARAMETER_ERROR			2056		///< ��ȡ�������������
#define INS_ERROR_V17_REGET_OPERATIONCODE_DEV_NOT_FOUND			2057		///< �޷��ҵ��豸
#define INS_ERROR_V17_GETTOKEN_URL_OR_CLIENTSESSION_NULL		2058		///< ��ȡToken��������
#define INS_ERROR_V17_GETTOKEN_EMPTY_TOKEN						2059		///< ��ȡ��TokenΪ��
#define INS_ERROR_V17_FIND_FILE_FAILED 							2060		///< �Ҳ��������ļ�

/************************************************************************/
/*note: vtdu client libary error code base on INS_ERROR_PRIVATE_VTDU_CLN_ERR_CODE
/*tranform rule: the code given by the libary add INS_ERROR_PRIVATE_VTDU_CLN_ERR_CODE (eg.2200+code)
/*so we reserve 2200-2600 for these code
/************************************************************************/
#define INS_ERROR_PRIVATE_VTDU_CLN_ERR_CODE						2200
#define INS_ERROR_PRIVATE_VTDU_BAD_MSG		         			2204                	//������Ϣ�����Ƿ�
#define INS_ERROR_PRIVATE_VTDU_NO_ENOUGH_ROOM		 			2205         			//�ڴ���Դ����
#define INS_ERROR_PRIVATE_VTDU_INVALID_VTDU_HOST     			2208      			    //����vtm����vtdu��ַ���Ϸ�
#define INS_ERROR_PRIVATE_VTDU_INVALID_SSN_STREAMKEY 			2210  				    //����vtm���ػỰ��ʶ���Ȳ��Ϸ�
#define INS_ERROR_PRIVATE_VTDU_ALLOCATE_SOCKET_FAIL  			2222   				//��ȡϵͳsocket��Դʧ��
#define INS_ERROR_PRIVATE_VTDU_CONNECT_SRV_FAIL      			2224       			//���ӷ�����ʧ��
#define INS_ERROR_PRIVATE_VTDU_REQUEST_TIMEOUT       			2225        			//�ͻ�������δ�յ������Ӧ��
#define INS_ERROR_PRIVATE_VTDU_DISCONNECTED_LINK     			2226      			    //��·�Ͽ�

#define NS_ERROR_PRIVATE_VTDU_ERR								2201							//ͨ�ô��󷵻�
#define NS_ERROR_PRIVATE_VTDU_NULL_PTR							2202					//���Ϊ��ָ��
#define NS_ERROR_PRIVATE_VTDU_INVALID_PARAS						2203				//���ֵ��Ч
#define NS_ERROR_PRIVATE_VTDU_BAD_MSG							2204						//������Ϣ�����Ƿ�
#define NS_ERROR_PRIVATE_VTDU_NO_ENOUGH_ROOM					2205				//�ڴ���Դ����
#define NS_ERROR_PRIVATE_VTDU_INVALID_MSGHEAD					2206				//Э���ʽ���Ի�����Ϣ�峤�ȳ���STREAM_MAX_MSGBODY_LEN
#define NS_ERROR_PRIVATE_VTDU_INVALID_SERIAL					2207				//�豸���кų��Ȳ��Ϸ�
#define NS_ERROR_PRIVATE_VTDU_INVALID_STREAMURL					2208              //ȡ��url���Ȳ��Ϸ�
#define NS_ERROR_PRIVATE_VTDU_INVALID_VTDU_HOST					2209			//����vtm����vtdu��ַ���Ϸ�
#define NS_ERROR_PRIVATE_VTDU_INVALID_PEER_HOST					2210			//����vtm���ؼ���vtdu��ַ���Ϸ�
#define NS_ERROR_PRIVATE_VTDU_INVALID_SSN_STREAMKEY				2211		//����vtm���ػỰ��ʶ���Ȳ��Ϸ�
#define NS_ERROR_PRIVATE_VTDU_INVALID_STREAM_HEAD				2212			//vtdu������ͷ���Ȳ��Ϸ�   
#define NS_ERROR_PRIVATE_VTDU_INVALID_STREAM_SSN				2213			//vtdu�Ự���ȷǷ�
#define NS_ERROR_PRIVATE_VTDU_DATAOUT_CALLBACK_UNREG			2214		//�ص�����δע��
#define NS_ERROR_PRIVATE_VTDU_NO_STREAM_SSN		        		2215				//vtdu�ɹ���ӦδЯ���Ự��ʶ
#define NS_ERROR_PRIVATE_VTDU_NO_STREAM_HEAD		    		2216				//vtdu�ɹ���ӦδЯ����ͷ
#define NS_ERROR_PRIVATE_VTDU_NO_STREAM							2217					//������������δʹ��
#define NS_ERROR_PRIVATE_VTDU_PB_PARSE_FAILURE		    		2218			//������Ϣ��PB����ʧ��
#define NS_ERROR_PRIVATE_VTDU_PB_ENCAPSULATE_FAILURE			2219		//������Ϣ��PB��װʧ��
#define NS_ERROR_PRIVATE_VTDU_MEMALLOC_FAIL		        		2220				//����ϵͳ�ڴ���Դʧ��
#define NS_ERROR_PRIVATE_VTDU_VTDUSRV_NOT_SET		    		2221				//vtdu��ַ��δ��ȡ��
#define NS_ERROR_PRIVATE_VTDU_NOT_SUPPORTED		        		2222				//�ͻ�����δ֧��
#define NS_ERROR_PRIVATE_VTDU_ALLOCATE_SOCKET_FAIL				2223		//��ȡϵͳsocket��Դʧ��
#define NS_ERROR_PRIVATE_VTDU_INVALID_STREAM_SSN_ID				2224		//�ϲ�����StreamSsnId��ƥ��
#define NS_ERROR_PRIVATE_VTDU_CONNECT_SRV_FAIL		    		2225			//���ӷ�����ʧ��
#define NS_ERROR_PRIVATE_VTDU_REQUEST_TIMEOUT	        		2226				//�ͻ�������δ�յ������Ӧ��
#define NS_ERROR_PRIVATE_VTDU_DISCONNECTED_LINK		    		2227			//��·�Ͽ�
#define NS_ERROR_PRIVATE_VTDU_NO_CONNECTION		        		2228			//û��ȡ������
#define NS_ERROR_PRIVATE_VTDU_STREAM_END_SUCC	        		2229				//���ɹ�ֹͣ
#define NS_ERROR_PRIVATE_VTDU_STREAM_DATAKEY_CHECK_FAIL			2230   			//�ͻ��˷�����У��ʧ��
#define NS_ERROR_PRIVATE_VTDU_TCP_BUFFER_FULL		    		2231             //Ӧ�ò�tcpճ������������
#define NS_ERROR_PRIVATE_VTDU_INVALID_STATUS_CHANGE             2232           //��Ч״̬Ǩ��
#define NS_ERROR_PRIVATE_VTDU_BAD_STATUS                        2233           //��Ч�ͻ���״̬
#define NS_ERROR_PRIVATE_VTDU_VTM_VTDUINFO_REQ_TMOUT            2234           //��vtmȡ����ý����Ϣ����ʱ
#define NS_ERROR_PRIVATE_VTDU_PROXY_STARTSTREAM_REQ_TMOUT       2235           //�����ȡ������ʱ
#define NS_ERROR_PRIVATE_VTDU_PROXY_KEEPALIVE_REQ_TMOUT 		2236			//�������ȡ������ʱ
#define NS_ERROR_PRIVATE_VTDU_STARTSTREAM_REQ_TMOUT             2237      		//��vtduȡ������ʱ
#define NS_ERROR_PRIVATE_VTDU_KEEPALIVE_REQ_TMOUT 				2238			//��vtdu����ȡ������ʱ






#define INS_ERROR_PRIVATE_VTDU_STATUS_402					    2602   				//�ط��ڲ���¼���ļ�
#define INS_ERROR_PRIVATE_VTDU_STATUS_403					    2603   				//�������������Կ���豸��ƥ��
#define INS_ERROR_PRIVATE_VTDU_STATUS_404					    2604   				//�豸������
#define INS_ERROR_PRIVATE_VTDU_STATUS_405					    2605   				//��ý�����豸���ͻ�������ʱ/cas��Ӧ��ʱ
#define INS_ERROR_PRIVATE_VTDU_STATUS_406					    2606   				//tokenʧЧ
#define INS_ERROR_PRIVATE_VTDU_STATUS_407					    2607   				//�ͻ��˵�URL��ʽ����
#define INS_ERROR_PRIVATE_VTDU_STATUS_409					    2609   				//Ԥ��������˽����
#define INS_ERROR_PRIVATE_VTDU_STATUS_410	    				2610   				//�豸�ﵽ���������
#define INS_ERROR_PRIVATE_VTDU_STATUS_411					    2611   				//token��Ȩ��
#define INS_ERROR_PRIVATE_VTDU_STATUS_412					    2612   				//session������
#define INS_ERROR_PRIVATE_VTDU_STATUS_413					    2613   				//��֤token�������쳣�������壩
#define INS_ERROR_PRIVATE_VTDU_STATUS_415					    2615   				//�豸ͨ����
#define INS_ERROR_PRIVATE_VTDU_STATUS_451					    2651   				//�豸��֧�ֵ���������
#define INS_ERROR_PRIVATE_VTDU_STATUS_452					    2652   				//�豸����Ԥ����ý�������ʧ��
#define INS_ERROR_PRIVATE_VTDU_STATUS_454					    2654   				//��Ƶ����ʱ���Ѿ�����
#define INS_ERROR_PRIVATE_VTDU_STATUS_491					    2691   				//��ͬ�������ڴ����ܾ����δ���
#define INS_ERROR_PRIVATE_VTDU_STATUS_500					    2700   				//��ý��������ڲ��������
#define INS_ERROR_PRIVATE_VTDU_STATUS_503					    2703   				//vtm����vtdu������ʧ��
#define INS_ERROR_PRIVATE_VTDU_STATUS_544					    2744   				//�豸��������ƵԴ
#define INS_ERROR_PRIVATE_VTDU_STATUS_545		    			2745                   //��Ƶ����ʱ���Ѿ�����
#define INS_ERROR_PRIVATE_VTDU_STATUS_546		    			2746                   //VTDUȡ������2·����
#define INS_ERROR_PRIVATE_VTDU_STATUS_556		    			2756                   //ticketУ��ʧ��

/// CASLIb  error  3000~4000
#define  INS_ERROR_CASLIB_BASE									3000
#define  INS_ERROR_CASLIB_MSG_UNKNOW_ERROR						3001	///<δ֪����	
#define  INS_ERROR_CASLIB_MSG_PARAMS_ERROR						3002	///<���Ĳ�������	
#define  INS_ERROR_CASLIB_MSG_PARSE_FAILED						3003	///<���Ľ�������	

#define  INS_ERROR_CASLIB_MSG_COMMAND_UNKNOW					3006	///<�Ƿ�����	
#define  INS_ERROR_CASLIB_MSG_COMMAND_NO_LONGER_SUPPORTED		3007	///<��ʱ����	
#define  INS_ERROR_CASLIB_MSG_COMMAND_NOT_SUITABLE				3008	///<��������	

#define  INS_ERROR_CASLIB_MSG_CHECKSUM_ERROR					3011	///<У�������	

#define  INS_ERROR_CASLIB_MSG_VERSION_UNKNOW					3016	///<Э��汾����	
#define  INS_ERROR_CASLIB_MSG_VERSION_NO_LONGER_SUPPORTED		3017	///<Э��汾����	
#define  INS_ERROR_CASLIB_MSG_VERSION_FORBIDDEN					3018	///<Э��汾����ֹ	

#define  INS_ERROR_CASLIB_MSG_SERIAL_NOT_FOR_CIVIL				3021	///<���кŽ���ʧ��	
#define  INS_ERROR_CASLIB_MSG_SERIAL_FORBIDDEN					3022	///<���кű���ֹ	
#define  INS_ERROR_CASLIB_MSG_SERIAL_DUPLICATE					3023	///<���к��ظ�	
#define  INS_ERROR_CASLIB_MSG_SERIAL_FLUSHED_IN_A_SECOND		3024	///<��ͬ���кŶ�ʱ���ڴ����ظ�����	
#define  INS_ERROR_CASLIB_MSG_SERIAL_NO_LONGER_SUPPORTED		3025	///<���кŲ���֧��	

#define  INS_ERROR_CASLIB_MSG_LOCAL_SERVER_BUSY					3031	///<�����޷���Ӧ	
#define  INS_ERROR_CASLIB_MSG_LOCAL_SERVER_REFUSED				3032	///<���������ܾ�	
#define  INS_ERROR_CASLIB_REG_CANNOT_AFFORD_PU					3033	///<�޷���������	
#define  INS_ERROR_CASLIB_REG_CRYPTO_UNMATCHED					3034	///<�豸�����㷨��ƥ��	

#define  INS_ERROR_CASLIB_MSG_DEV_TYPE_INVAILED					3036	///<�豸���ʹ���	
#define  INS_ERROR_CASLIB_MSG_DEV_TYPE_NO_LONGGER_SUPPORTED		3037	///<�豸���Ͳ���֧��	

#define  INS_ERROR_CASLIB_MSG_PU_BUSY							3041	///<�豸�޷���Ӧ	
#define  INS_ERROR_CASLIB_MSG_OPERATION_FAILED					3042	///<���������	
#define  INS_ERROR_CASLIB_PU_NO_CRYPTO_FOUND					3043	///<�豸��ƽ̨δ�ҵ���Ӧ�ļ����㷨	
#define  INS_ERROR_CASLIB_MSG_PU_REFUSED						3044	///<�ܾ�	
#define  INS_ERROR_CASLIB_MSG_PU_NO_RESOURCE					3045	///<û�п�����Դ	 �豸��������
#define  INS_ERROR_CASLIB_MSG_PU_CHANNEL_ERROR					3046	///<ͨ����	
#define  INS_ERROR_CASLIB_SYSTEM_COMMAND_PU_COMMAND_UNSUPPORTED	3047	///<��֧�ֵ�����	
#define  INS_ERROR_CASLIB_SYSTEM_COMMAND_PU_NO_RIGHTS_TO_DO_COMMAND		3048	///<û��Ȩ��	
#define  INS_ERROR_CASLIB_MSG_NO_SESSION_FOUND					3049	///<û���ҵ��Ự

#define  INS_ERROR_CASLIB_PREVIEW_CHANNEL_BUSY					3051	///<��ͨ�����ڷ���	
#define  INS_ERROR_CASLIB_PREVIEW_CLIENT_BUSY					3052 ///<ȡ����ַ�ظ�	
#define  INS_ERROR_CASLIB_PREVIEW_STREAM_UNSUPPORTED			3053	///<��֧�ֵ���������	
#define  INS_ERROR_CASLIB_PREVIEW_TRANSPORT_UNSUPPORTED			3054	///<��֧�ֵĴ��䷽ʽ	
#define  INS_ERROR_CASLIB_PREVIEW_CONNECT_SERVER_FAIL			3055	///<����Ԥ����ý�������ʧ�� +
#define  INS_ERROR_CASLIB_PREVIEW_QUERY_WLAN_INFO_FAIL			3056	///<��ѯ�豸�������ڵ�ַʧ��

#define  INS_ERROR_CASLIB_RECORD_SEARCH_START_TIME_ERROR		3061	///<����¼��ʼʱ���	
#define  INS_ERROR_CASLIB_RECORD_SEARCH_STOP_TIME_ERROR			3062	///<����¼�����ʱ���	
#define  INS_ERROR_CASLIB_RECORD_SEARCH_FAIL					3063	///<����¼��ʧ��	+

#define  INS_ERROR_CASLIB_PLAYBACK_TYPE_UNSUPPORTED				3066	///<��֧�ֵĻط�����	
#define  INS_ERROR_CASLIB_PLAYBACK_NO_FILE_MATCHED				3067	///<û���ҵ��ļ�	
#define  INS_ERROR_CASLIB_PLAYBACK_START_TIME_ERROR				3068	///<��ʼʱ�����	
#define  INS_ERROR_CASLIB_PLAYBACK_STOP_TIME_ERROR				3069	///<����Ľ���ʱ��	
#define  INS_ERROR_CASLIB_PLAYBACK_NO_FILE_FOUND				3070	///<��ʱ�����û��¼��	
#define  INS_ERROR_CASLIB_PLAYBACK_CONNECT_SERVER_FAIL			3071	///<���ӻطŷ�������ʧ��

#define  INS_ERROR_CASLIB_TALK_ENCODE_TYPE_UNSUPPORTED			3076	///<��֧�ֵ�������������	
#define  INS_ERROR_CASLIB_TALK_CHANNEL_BUSY						3077	///<��ͨ�����ڶԽ�	
#define  INS_ERROR_CASLIB_TALK_CLIENT_BUSY						3078	///<��Ŀ�ĵ�ַ��������	
#define  INS_ERROR_CASLIB_TALK_UNSUPPORTED						3079	///<not support talk
#define  INS_ERROR_CASLIB_TALK_CHANNO_ERROR						3080	///<ͨ���Ŵ���
#define  INS_ERROR_CASLIB_TALK_CONNECT_SERVER_FAILED			3081	///<��������������ʧ��
#define  INS_ERROR_CASLIB_TALK_CONNECT_REFUSED					3082	///<�豸�ܾ�
#define  INS_ERROR_CASLIB_TALK_CONNECT_CAPACITY_LIMITED			3083	///<�豸��Դ����

#define  INS_ERROR_CASLIB_FORMAT_NO_LOCAL_STORAGE				3086	///<û�б��ش洢	
#define  INS_ERROR_CASLIB_FORMAT_FORMATING						3087	///<���ڸ�ʽ����	
#define  INS_ERROR_CASLIB_FORMAT_FAILED							3088	///<���Ը�ʽ��ʧ��	

#define  INS_ERROR_CASLIB_UPGRADE_PU_REQUEST_REFUSED			3091	///<�������ܾ��豸��������	
#define  INS_ERROR_CASLIB_UPGRADE_PU_REQUEST_VERSION_NOT_FOUND	3092	///<û���ҵ�����汾	
#define  INS_ERROR_CASLIB_UPGRADE_PU_REQUEST_UNNEEDED			3093	///<����Ҫ����	
#define  INS_ERROR_CASLIB_UPGRADE_PU_REQUEST_NO_SERVER_ONLINE	3094	///<û����������������	
#define  INS_ERROR_CASLIB_UPGRADE_PU_REQUEST_ALL_SERVER_BUSY	3095	///<�����������������ﵽ�����	

#define  INS_ERROR_CASLIB_UPGRADE_PU_UPGRADING					3101 ///<�����������	
#define  INS_ERROR_CASLIB_UPGRADE_PU_UPGRAD_FAILED				3102 ///<����ʧ�ܣ�����δ֪����
#define  INS_ERROR_CASLIB_UPGRADE_PU_UPGRAD_WRITE_FLASH_FAILED	3103 ///<����дFlashʧ��
#define  INS_ERROR_CASLIB_UPGRADE_PU_UPGRAD_LANGUAGE_DISMATCH	3104 ///<�������Բ�ƥ��

#define  INS_ERROR_CASLIB_PU_PASSWORD_UPDATE_NO_USER_MATHCED	3106	///<�������ʧ�ܣ�û�ж�Ӧ�û�	
#define  INS_ERROR_CASLIB_PU_PASSWORD_UPDATE_ORIGINAL_PASSWORD_ERROR		3107	///<�������ʧ�ܣ�ԭʼ�������	
#define  INS_ERROR_CASLIB_PU_PASSWORD_UPDATE_NEW_PASSWORD_DECRYPTE_FAILED   3108	///<�������ʧ�ܣ����������ʧ��	
#define  INS_ERROR_CASLIB_PU_PASSWORD_UPDATE_NEW_PASSWORD_CHECK_FAILED		3109	///<�������ʧ�ܣ������벻���Ϲ���	
#define  INS_ERROR_CASLIB_PU_PASSWORD_UPDATE_WRITE_FLASH_FAILED				3110	///<��������ʧ�ܣ�дflashʧ��	
#define  INS_ERROR_CASLIB_PU_PASSWORD_UPDATE_OTHER_FALIURE					3111	///<��������ʧ�ܣ�����ԭ��	

#define  INS_ERROR_CASLIB_PU_PASSWORD_VERIFY_PASSWORD_ FAILED				3116	///<��֤����ʧ��	

#define  INS_ERROR_CASLIB_PLATFORM_CLIENT_REQUEST_NO_PU_FOUNDED				3121	///<������豸������	
#define  INS_ERROR_CASLIB_PLATFORM_CLIENT_REQUEST_REFUSED_TO_PROTECT_PU		3122	///<Ϊ�˱����豸���ܾ�����	
#define  INS_ERROR_CASLIB_PLATFORM_CLIENT_REQUEST_PU_LIMIT_REACHED			3123	///<�豸�ﵽ���ӵĿͻ�������	
#define  INS_ERROR_CASLIB_PLATFORM_CLIENT_TEARDOWN_PU_CONNECTION			3124	///<Ҫ��ͻ��˶Ͽ����豸����	
#define  INS_ERROR_CASLIB_PU_REFUSE_CLIENT_CONNECTION						3125	///<�豸�ܾ�ƽ̨���͵Ŀͻ�����������	
#define  INS_ERROR_CASLIB_PLATFORM_CLIENT_VERIFY_AUTH_ERROR					3126  ///<CAS����֤������֤�û�Ȩ��ʧ��
#define  INS_ERROR_CASLIB_PLATFORM_CLIENT_REQUEST_PU_OPEN_PRIVACY			3127 ///<�豸������˽����
#define  INS_ERROR_CASLIB_PLATFORM_CLIENT_NO_SIGN_RELEATED					3128		///</<û�й���������

#define  INS_ERROR_CASLIB_DEFENCE_TYPE_UNSUPPORTED							3131 ///<��֧�ֵĲ���������
#define	 INS_ERROR_CASLIB_DEFENCE_TYPE_FAILED								3132 ///</<������ʧ��
#define  INS_ERROR_CASLIB_DEFENCE_TYPE_FORCE_FAILED							3133 ///</<ǿ�Ʋ�����ʧ��
#define  INS_ERROR_CASLIB_DEFENCE_TYPE_NEED_FORCE							3134 ///</<��Ҫǿ�Ʋ�����

#define  INS_ERROR_CASLIB_CLOUD_NOT_FOUND									3141 ///<û���ҵ��ƴ洢������
#define  INS_ERROR_CASLIB_CLOUD_NO_USER										3142 ///<�û�δ��ͨ�ƴ洢
#define  INS_ERROR_CASLIB_CLOUD_FILE_TAIL_REACHED							3145 ///<�ļ��ѵ���β
#define  INS_ERROR_CASLIB_CLOUD_INVALID_SESSION								3146 ///<��Ч��session
#define  INS_ERROR_CASLIB_CLOUD_INVALID_HANDLE								3147 ///<��Ч���ļ�
#define  INS_ERROR_CASLIB_CLOUD_UNKNOWN_CLOUD								3148 ///<δ֪���ƴ洢����
#define  INS_ERROR_CASLIB_CLOUD_UNSUPPORT_FILETYPE							3149 ///<��֧�ֵ��ļ�����
#define  INS_ERROR_CASLIB_CLOUD_INVALID_FILE								3150 ///<��Ч���ļ�
#define  INS_ERROR_CASLIB_CLOUD_QUOTA_IS_FULL								3151 ///<�������
#define  INS_ERROR_CASLIB_CLOUD_FILE_IS_FULL								3152 ///<�ļ�����

#define INS_ERROR_CASLIB_CLIENT_BASE										3200  ///<�ͻ��˴����
#define INS_ERROR_CASLIB_CLIENT_PARAMETER									3201  ///<��������
#define INS_ERROR_CASLIB_CLIENT_ALLOC_RESOURCE								3202  ///<������Դʧ��
#define INS_ERROR_CASLIB_CLIENT_SEND_FAILED									3203  ///<���ʹ���
#define INS_ERROR_CASLIB_CLIENT_RECV_FAILED									3204  ///<���մ���
#define INS_ERROR_CASLIB_CLIENT_PARSE_XML									3205  ///<�������Ĵ���
#define INS_ERROR_CASLIB_CLIENT_CREATE_XML									3206  ///<���ɱ��Ĵ���
#define INS_ERROR_CASLIB_CLIENT_INIT_SOCKET									3207  ///<��ʼ��Socketʧ��
#define INS_ERROR_CASLIB_CLIENT_CREATE_SOCKET								3208  ///<����socketʧ��
#define INS_ERROR_CASLIB_CLIENT_CONNECT_FAILED								3209  ///<���ӷ�����ʧ��
#define INS_ERROR_CASLIB_CLIENT_NO_INIT										3210  ///<CASLIB.dll not init
#define INS_ERROR_CASLIB_CLIENT_OVER_MAX_SESSION							3211  ///<����CASCLIENT��֧�ֵ������
#define INS_ERROR_CASLIB_CLIENT_SENDTIMEOUT									3212  ///<����ͳ�ʱ
#define INS_ERROR_CASLIB_CLIENT_RECV_TIMEOUT								3213  ///<������ճ�ʱ
#define INS_ERROR_CASLIB_CLIENT_CREATE_PACKET								3214  ///<create data packet failed
#define INS_ERROR_CASLIB_CLIENT_PARSE_PACKET								3215  ///<�������ݰ�����
#define INS_ERROR_CASLIB_CLIENT_FORCE_STOP									3216	///<�û���;ǿ���˳�
#define INS_ERROR_CASLIB_CLIENT_GETPORT_FAILED								3217	///<��ȡ���ض˿ڴ���
#define INS_ERROR_CASLIB_CLIENT_BASE64_ENCODE								3218	///<base64�������
#define INS_ERROR_CASLIB_CLIENT_BASE64_DECODE								3219	///<base64 decode failed
#define INS_ERROR_CASLIB_CLIENT_RECV_DATAERROR								3220  ///<�������ݴ���
#define INS_ERROR_CASLIB_CLIENT_AES_ENCRYPT_FAILED							3221  ///<AES���ܳ���
#define INS_ERROR_CASLIB_CLIENT_AES_DECRYPT_FAILED							3222  ///<AES���ܳ���
#define INS_ERROR_CASLIB_CLIENT_OPERATION_UNSUPPORTED						3223  ///<��֧�ֵĲ���
#define INS_ERROR_CASLIB_CLIENT_ERROR_P2P_FAILED							3224 ///<p2p��ʧ��
#define INS_ERROR_CASLIB_CLIENT_ERROR_SEND_KEEPLIVE_FAILED					3225 ///<���ʹ򶴰�ʧ��
#define INS_ERROR_CASLIB_CLIENT_ERROR_INIT_SSL								3228  ///<��ʼ��sslʧ��
#define INS_ERROR_CASLIB_CLIENT_ERROR_CONNECT_SSL        					3229  ///<ssl����ʧ��


#define INS_ERROR_CASLIB_CLIENT_ERROR_VERIFY_OTHER_ERROR				3249	///<��֤����������			
#define INS_ERROR_CASLIB_CLIENT_ERROR_VERIFY_DB_ERROR				    3250	///<��֤�����ݿ����
#define INS_ERROR_CASLIB_CLIENT_ERROR_VERIFY_PARAMS_ERROR			    3251	///<��֤�Ĳ�������
#define INS_ERROR_CASLIB_CLIENT_ERROR_VERIFY_EXEC_ERROR				    3252	///<��֤��ִ���쳣
#define INS_ERROR_CASLIB_CLIENT_ERROR_VERIFY_SESSION_ERROR			    3253	///<��֤��session������
#define INS_ERROR_CASLIB_CLIENT_ERROR_VERIFY_CACHE_ERROR				3254	///<��֤�Ļ����쳣
#define INS_ERROR_CASLIB_CLIENT_ERROR_VERIFY_AUTH_NONE				    3255	///<��֤����Ȩ��

//reason: ֮ǰ��3045������̫��ͳ�������������������ϸ��
#define INS_ERROR_CASLIB_CLIENT_NO_VALID_PRELINK                        3290  ///< û�п��õ�P2PԤ���ӣ���֮ǰ�����������3045����������
#define INS_ERROR_CASLIB_CLIENT_NO_INNER_RESOURCE                       3291  ///< ��·ֱ��/P2P֮�󣬵���·ֱ���豸���صĴ�����
#define INS_ERROR_CASLIB_CLIENT_NO_P2P_RESOURCE                         3292  ///< û��P2Pȡ����Դ, ֱ����Դ����

#endif //_INS_ERRORCODE_H_