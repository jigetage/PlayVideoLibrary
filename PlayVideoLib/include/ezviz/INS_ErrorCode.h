/** \file      INS_ErrorCode.h
 *  \copyright HangZhou Hikvision System Technology Co.,Ltd. All Right Reserved.
 *  \brief     开放SDK消息回调接口中消息类型以及错误码的定义
 *
 *  \author    pikongxuan
 *  \date      2015/07/07
 */
 
 #ifndef _INS_ERRORCODE_H_
 #define _INS_ERRORCODE_H_

/** \define  MessageInfo 
 *  \brief 消息内容定义，预览和回放时，消息回调接口中消息内容
 */
#define INS_EXECUTION_PROCESS_ADDTASK      "7_1" ///< 任务被成功添加至队列"
#define INS_EXECUTION_PROCESS_TASKDO       "7_2" ///< 任务开始被执行"
#define INS_EXECUTION_PROCESS_PARSE_PARAM  "7_3" ///< 解析参数信息"
#define INS_EXECUTION_PROCESS_LOCAL        "7_4" ///< :判断局域网"
#define INS_EXECUTION_PROCESS_CHECKPWD	   "7_5" ///< :验证设备密码"
#define INS_EXECUTION_PROCESS_NETTYPE      "7_5" ///< :选择取流方式"
#define INS_EXECUTION_PROCESS_PSIA         "7_6_1"///<:尝试使用PSIA方式取流"
#define INS_EXECUTION_PROCESS_P2P          "7_6_2"///<:尝试使用P2P方式取流"
#define INS_EXECUTION_PROCESS_VTDU         "7_6_3"///<:尝试使用VTDU方式取流"
#define INS_EXECUTION_PROCESS_TASKEND      "7_7_1"///<:尝试取流失败，结束取流"
#define INS_EXECUTION_PROCESS_TASKEND_SUCC "7_7_2"///<:尝试取流成功，任务结束，等待数据流上来"
#define INS_EXECUTION_PROCESS_NEXT         "7_8"  ///<:尝试取流失败，切换取流方式"
#define INS_EXECUTION_PROCESS_PSIA_PORT    "7_9"  ///<:获取公网PSIA取流端口" 


/// 消息回调中错误码定义， 对于消息回调接口中的错误码
#define INS_ERROR_NOERROR                     0 ///<无错误
#define INS_ERROR_LOAD_RTSP_FAILED            1 ///<加载rtsp库失败
#define INS_ERROR_LOAD_PLAYCTRL_FAILED        2 ///<加载播放库失败
#define INS_ERROR_LOAD_SYSTRANSFORM_FAILED    3 ///<加载转封装库失败
#define INS_ERROR_LOAD_HTTPCLIENT_FAILED      4 ///<加载http库失败
#define INS_ERROR_PARAMETER_ERROR             5 ///<参数错误
#define INS_ERROR_ORDER_ERROR                 6 ///<调用顺序错误
#define INS_ERROR_ALLOC_RESOURCE_FAILED       7 ///<分配资源失败
#define INS_ERROR_NOT_INITLIB                 8 ///<没有初始化
#define INS_ERROR_OPERTION_NOSUPPORT          9 ///<操作不支持
#define INS_ERROR_OPENFILE_ERROR              10 ///<打开文件失败
#define INS_ERROR_WRITEFILE_ERROR             11 ///<写文件失败
#define INS_ERROR_READFILE_ERROR              12 ///<读文件失败
#define INS_ERROR_INIT_HPR_FAILED             13 ///<初始化hpr库失败
#define INS_ERROR_AUDIO_MONOPOLIZED           14 ///<声卡被独占
#define INS_ERROR_CREATE_SOCKET_ERROR         15 ///<创建socket失败
#define INS_ERROR_NETWORK_CONNECT_FAILED      16 ///<连接失败
#define INS_ERROR_NETWORK_SEND_ERROR          17 ///<发送失败
#define INS_ERROR_NETWORK_RECV_ERROR          18 ///<接收失败
#define INS_ERROR_NETWORK_SEND_TIMEOUT        19 ///<发送超时
#define INS_ERROR_NETWORK_RECV_TIMEOUT        20 ///<接收超时
#define INS_ERROR_NETWORK_RESOLVE_FAILED      21 ///<域名解析错误
#define INS_ERROR_XML_PARSE_ERROR             22 ///<xml解析错误
#define INS_ERROR_XML_NODE_ERROR              23 ///<xml结点错误
#define INS_ERROR_NO_EXCEL_DRIVER_ERROR       24 ///<没有安装Excel驱动
#define INS_ERROR_PARSE_URL_FAILED            25 ///<URL解析失败
#define INS_ERROR_LOADRTSPSDKPROC_ERROR       26 ///<找不到rtsp接口地址
#define INS_ERROR_LOADPLAYERSDKPROC_ERROR     27 ///<找不到播放库接口地址
#define INS_ERROR_LOADSYSTRANSFORMPROC_ERROR  28 ///<找不到转封装库接口地址
#define INS_ERROR_LOADHTTPSDKPROC_ERROR       29 ///<找不到http库接口地址
#define INS_ERROR_START_WAVEIN_FAILED         30 ///<开始音频采集失败
#define INS_ERROR_START_WAVEOUT_FAILED        31 ///<开始音频播放失败
#define INS_ERROR_INIT_G722_CODEC_FAILED      32 ///<初始化G722编解码失败
#define INS_ERROR_NOT_ENOUGH_DISK_FREESPACE   33 ///<磁盘空间不足
#define INS_ERROR_FILE_ALREADY_EXIST          34 ///<文件已存在

#define INS_ERROR_LOAD_PPV_FAILED             35  ///<加载ppv库失败
#define INS_ERROR_LOADPPVSDKPROC_ERROR        36 ///<找不到libPPVClient接口地址

#define INS_ERROR_LOAD_STUN_FAILED             37  ///<加载stun库失败
#define INS_ERROR_LOADSTUNSDKPROC_ERROR        38  ///<找不到StunClientLib接口地址

#define INS_ERROR_RECORD_FILE_NOT_EXIST        39 ///< 找不到指定时间范围内的录像文件
#define INS_ERROR_FAILED_RTSP_PORT             40 ///< 通过PSIA取流，获取RTSP端口失败

#define INS_ERROR_SSL_CONNECT_FAILED           41 ///<SSL方式连接失败
#define INS_ERROR_JSON_PARSE_ERROR             42 ///<JSON解析失败

#define INS_ERROR_LOADCASSDKPROC_ERROR         43 ///<找不到libCASClient接口地址
#define INS_ERROR_LOAD_CAS_FAILED              44  ///<加载CASClient库失败
#define INS_ERROR_OPERATIONCODE_FAILED         45  ///<获取操作码失败
#define INS_ERROR_LOAD_GETHDSIGN_FAILED        46  ///<加载libGetHDSign库失败

#define INS_ERROR_HDSIGN_FAILED				  47  ///<获取硬件特征码失败
#define INS_ERROR_NULL_ADDRESS				  48  ///<GetIpAddress返回IP为空

/// rtsp库错误码
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

/// 海康播放库错误
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
#define  INS_ERROR_PLAYM4_DECODE_KEYFRAME_ERROR  130 ///< 解码关键帧失败
#define  INS_ERROR_PLAYM4_NEED_MORE_DATA         131 ///< 数据不足
#define  INS_ERROR_PLAYM4_INVALID_PORT           132 ///< 无效端口号
#define  INS_ERROR_PLAYM4_NOT_FIND               133 ///< 查找失败
#define  INS_ERROR_PLAYM4_FAIL_UNKNOWN           199 ///< 未知的错误

//E家报文返回值
#define INS_ERROR_PWD_ERROR		401 //密码错
#define INS_ERROR_FORMAT_ERROR	501 //格式化错
#define INS_ERROR_FORMATING		400 //格式化中
#define INS_ERROR_STREAM_LIMIT	410 //取流路数限制
#define INS_ERROR_NO_RECORD		402 //按时间回放无录像
#define INS_ERROR_EDEFENSE_NO_SUPPORT		402 //不支持布防
#define INS_ERROR_FAILED			500 //命令执行失败
#define INS_ERROR_DEV_NOT_ONLINE	801 //设备不在线
#define INS_ERROR_PRIVACY		409 //隐私保护状态

/// common   error  2000~3000
#define INS_ERROR_V17_COMMON_BASE								2000
#define INS_ERROR_V17_GET_OPERATIONCODE_ERROR					2001 ///<获取操作码失败
#define INS_ERROR_V17_GET_TOKEN_ERROR							2002 ///<获取取流token失败
#define INS_ERROR_V17_SETAUDIOINCALLBACK_ERROR					2003 ///<设置语音采集回调播放失败
#define INS_ERROR_V17_STARTPLAY_ERROR							2004 ///<开启语音播放失败
#define INS_ERROR_V17_STARTAUDIOIN_ERROR						2005 ///<语音采集开启播放失败
#define INS_ERROR_V17_TTS_CREATETALK_ERROR						2006 ///<tts TALK_VTDU CreateTalk error
#define INS_ERROR_V17_TTS_SETDATACALLBACK_ERROR					2007 ///<tts TALK_VTDU SetDataCallBack error
#define INS_ERROR_V17_TTS_SETMSGCALLBACK_ERROR					2008 ///<tts TALK_VTDU SetMsgCallBack error
#define INS_ERROR_V17_TTS_STARTTALK_ERROR		   				2009 ///<tts TALK_VTDU StartTalk error
#define INS_ERROR_V17_CAS_CREATESESSION_ERROR					2010 ///<cas TALK_TCP/TALK_UDP CreateSession error
#define INS_ERROR_V17_CAS_VOICETALKSTART_ERROR					2011 ///<cas TALK_TCP/TALK_UDP VoiceTalkStart error
#define INS_ERROR_V17_PERMANENTKEY_EXCEPTION         			2012   ///<重新输入密钥  1.明文密钥和输入MD5密钥不相等 
#define INS_ERROR_V17_VTDU_OPERKEY_ERROR						2013 ///<VTDU返回的操作码错误或信令密钥错误
#define INS_ERROR_V17_STOPAUDIOIN_ERROR							2014 ///<停止语音采集失败
#define INS_ERROR_V17_STOPPLAY_ERROR							2015 ///<停止语音播放失败
#define INS_ERROR_V17_STOPAUDIOIN_SUCC							2016 ///<停止语音采集成功
#define INS_ERROR_V17_STOPPLAY_SUCC								2017 ///<停止语音播放成功
#define INS_ERROR_V17_VTDU_TIMEOUT								2021	///<流媒体向设备发送或接受信令超时
#define INS_ERROR_V17_VTDU_CKECK_TOKEN							2022 ///<验证token失败
#define INS_ERROR_V17_CLIENT_URL_ERROR						    2023 ///<客户端的URL格式错误
#define INS_ERROR_V17_VTDU_CLIENT_TIMEOUT						2025 ///<vtdu客户端接收回应超时
#define INS_ERROR_V17_STREAM_SESSION_ERROR						2026 ///<取流session出错	
#define INS_ERROR_V17_WAIT_HEADER_TIMEOUT						2027 ///<等待流头超时
#define INS_ERROR_V17_USER_STOP									2028 ///<用户停止
#define INS_ERROR_V17_DECRYPT_ERROR								2029  ///<解密失败

/// vtud相关
#define INS_ERROR_V17_VTDU_CREATE_SESSION						2031		 ///<vtdu取流创建session失败
#define INS_ERROR_V17_VTDU_DESTORY_SESSION						2032		 ///<vtdu取流销毁session失败
#define INS_ERROR_V17_VTDU_START								2033		 ///<vtdu取流开始失败，返回-1时设置
#define INS_ERROR_V17_VTDU_STOP									2034		///<vtdu取流停止失败
#define INS_ERROR_V17_VTDU_PAUSE								2035		 ///<vtdu取流暂停失败
#define INS_ERROR_V17_VTDU_RESUME								2036		///<vtdu取流恢复失败
#define INS_ERROR_V17_VTDU_CHANGE_RATE							2037		///<vtdu取流改变速率失败


#define INS_ERROR_V17_VTDU_TOKEN_NO_AUTHORITY					2044	 ///<VTDU token无权限
#define INS_ERROR_V17_VTDU_SESSION_NO_EXIST						2045	 ///<VTDU session不存在
#define INS_ERROR_V17_VTDU_TOKEN_OTHER							2046	 ///<VTDU 验证token的他异常（不具体）
#define INS_ERROR_V17_VTDU_TOKEN_NOCONNECT_VTM					2047	 ///<VTDU 客户端连接不上VTM
#define INS_ERROR_V17_VTDU_TOKEN_NOCONNECT_VTDU					2048	 ///<VTDU 客户端连接不上VTDU
#define INS_ERROR_V17_INVALID_DEVICE_CHANNAL					2049 ///<设备通道错
#define INS_ERROR_V17_DEVICE_UNSUPPORT_STREAMTYPE				2050 ///<设备不支持的码流类型
#define INS_ERROR_V17_DEVICE_UNCONNECT_VTDU						2051 ///<设备连接不上流媒体
#define INS_ERROR_V17_CLIENT_ERROR_CASIP						2052 ///<客户端给的cas地址信息错误
#define INS_ERROR_V17_VIDEO_SHARED_TIMEEND						2053 ///<视频分享时间已经结束
#define INS_ERROR_V17_VTDU_RECV_HEADER_TIMEOUT					2054	///<流媒体接收流头超时8s
#define INS_ERROR_V17_VTDU_VTDU_IPARAMTYPE_ERROR				2055		///< Vtdu iParamType error
#define INS_ERROR_V17_GET_OPERATIONCODE_PARAMETER_ERROR			2056		///< 获取操作码参数错误
#define INS_ERROR_V17_REGET_OPERATIONCODE_DEV_NOT_FOUND			2057		///< 无法找到设备
#define INS_ERROR_V17_GETTOKEN_URL_OR_CLIENTSESSION_NULL		2058		///< 获取Token参数错误
#define INS_ERROR_V17_GETTOKEN_EMPTY_TOKEN						2059		///< 获取的Token为空
#define INS_ERROR_V17_FIND_FILE_FAILED 							2060		///< 找不到可用文件

/************************************************************************/
/*note: vtdu client libary error code base on INS_ERROR_PRIVATE_VTDU_CLN_ERR_CODE
/*tranform rule: the code given by the libary add INS_ERROR_PRIVATE_VTDU_CLN_ERR_CODE (eg.2200+code)
/*so we reserve 2200-2600 for these code
/************************************************************************/
#define INS_ERROR_PRIVATE_VTDU_CLN_ERR_CODE						2200
#define INS_ERROR_PRIVATE_VTDU_BAD_MSG		         			2204                	//信令消息解析非法
#define INS_ERROR_PRIVATE_VTDU_NO_ENOUGH_ROOM		 			2205         			//内存资源不足
#define INS_ERROR_PRIVATE_VTDU_INVALID_VTDU_HOST     			2208      			    //解析vtm返回vtdu地址不合法
#define INS_ERROR_PRIVATE_VTDU_INVALID_SSN_STREAMKEY 			2210  				    //解析vtm返回会话标识长度不合法
#define INS_ERROR_PRIVATE_VTDU_ALLOCATE_SOCKET_FAIL  			2222   				//获取系统socket资源失败
#define INS_ERROR_PRIVATE_VTDU_CONNECT_SRV_FAIL      			2224       			//链接服务器失败
#define INS_ERROR_PRIVATE_VTDU_REQUEST_TIMEOUT       			2225        			//客户端请求未收到服务端应答
#define INS_ERROR_PRIVATE_VTDU_DISCONNECTED_LINK     			2226      			    //链路断开

#define NS_ERROR_PRIVATE_VTDU_ERR								2201							//通用错误返回
#define NS_ERROR_PRIVATE_VTDU_NULL_PTR							2202					//入参为空指针
#define NS_ERROR_PRIVATE_VTDU_INVALID_PARAS						2203				//入参值无效
#define NS_ERROR_PRIVATE_VTDU_BAD_MSG							2204						//信令消息解析非法
#define NS_ERROR_PRIVATE_VTDU_NO_ENOUGH_ROOM					2205				//内存资源不足
#define NS_ERROR_PRIVATE_VTDU_INVALID_MSGHEAD					2206				//协议格式不对或者消息体长度超过STREAM_MAX_MSGBODY_LEN
#define NS_ERROR_PRIVATE_VTDU_INVALID_SERIAL					2207				//设备序列号长度不合法
#define NS_ERROR_PRIVATE_VTDU_INVALID_STREAMURL					2208              //取流url长度不合法
#define NS_ERROR_PRIVATE_VTDU_INVALID_VTDU_HOST					2209			//解析vtm返回vtdu地址不合法
#define NS_ERROR_PRIVATE_VTDU_INVALID_PEER_HOST					2210			//解析vtm返回级联vtdu地址不合法
#define NS_ERROR_PRIVATE_VTDU_INVALID_SSN_STREAMKEY				2211		//解析vtm返回会话标识长度不合法
#define NS_ERROR_PRIVATE_VTDU_INVALID_STREAM_HEAD				2212			//vtdu返回流头长度不合法   
#define NS_ERROR_PRIVATE_VTDU_INVALID_STREAM_SSN				2213			//vtdu会话长度非法
#define NS_ERROR_PRIVATE_VTDU_DATAOUT_CALLBACK_UNREG			2214		//回调函数未注册
#define NS_ERROR_PRIVATE_VTDU_NO_STREAM_SSN		        		2215				//vtdu成功响应未携带会话标识
#define NS_ERROR_PRIVATE_VTDU_NO_STREAM_HEAD		    		2216				//vtdu成功响应未携带流头
#define NS_ERROR_PRIVATE_VTDU_NO_STREAM							2217					//无数据流，尚未使用
#define NS_ERROR_PRIVATE_VTDU_PB_PARSE_FAILURE		    		2218			//信令消息体PB解析失败
#define NS_ERROR_PRIVATE_VTDU_PB_ENCAPSULATE_FAILURE			2219		//信令消息体PB封装失败
#define NS_ERROR_PRIVATE_VTDU_MEMALLOC_FAIL		        		2220				//申请系统内存资源失败
#define NS_ERROR_PRIVATE_VTDU_VTDUSRV_NOT_SET		    		2221				//vtdu地址尚未获取到
#define NS_ERROR_PRIVATE_VTDU_NOT_SUPPORTED		        		2222				//客户端尚未支持
#define NS_ERROR_PRIVATE_VTDU_ALLOCATE_SOCKET_FAIL				2223		//获取系统socket资源失败
#define NS_ERROR_PRIVATE_VTDU_INVALID_STREAM_SSN_ID				2224		//上层填充的StreamSsnId不匹配
#define NS_ERROR_PRIVATE_VTDU_CONNECT_SRV_FAIL		    		2225			//链接服务器失败
#define NS_ERROR_PRIVATE_VTDU_REQUEST_TIMEOUT	        		2226				//客户端请求未收到服务端应答
#define NS_ERROR_PRIVATE_VTDU_DISCONNECTED_LINK		    		2227			//链路断开
#define NS_ERROR_PRIVATE_VTDU_NO_CONNECTION		        		2228			//没有取流链接
#define NS_ERROR_PRIVATE_VTDU_STREAM_END_SUCC	        		2229				//流成功停止
#define NS_ERROR_PRIVATE_VTDU_STREAM_DATAKEY_CHECK_FAIL			2230   			//客户端防串流校验失败
#define NS_ERROR_PRIVATE_VTDU_TCP_BUFFER_FULL		    		2231             //应用层tcp粘包处理缓冲区满
#define NS_ERROR_PRIVATE_VTDU_INVALID_STATUS_CHANGE             2232           //无效状态迁移
#define NS_ERROR_PRIVATE_VTDU_BAD_STATUS                        2233           //无效客户端状态
#define NS_ERROR_PRIVATE_VTDU_VTM_VTDUINFO_REQ_TMOUT            2234           //向vtm取流流媒体信息请求超时
#define NS_ERROR_PRIVATE_VTDU_PROXY_STARTSTREAM_REQ_TMOUT       2235           //向代理取流请求超时
#define NS_ERROR_PRIVATE_VTDU_PROXY_KEEPALIVE_REQ_TMOUT 		2236			//向代理保活取流请求超时
#define NS_ERROR_PRIVATE_VTDU_STARTSTREAM_REQ_TMOUT             2237      		//向vtdu取流请求超时
#define NS_ERROR_PRIVATE_VTDU_KEEPALIVE_REQ_TMOUT 				2238			//向vtdu保活取流请求超时






#define INS_ERROR_PRIVATE_VTDU_STATUS_402					    2602   				//回放在不到录像文件
#define INS_ERROR_PRIVATE_VTDU_STATUS_403					    2603   				//操作码或信令密钥与设备不匹配
#define INS_ERROR_PRIVATE_VTDU_STATUS_404					    2604   				//设备不在线
#define INS_ERROR_PRIVATE_VTDU_STATUS_405					    2605   				//流媒体向设备发送或接受信令超时/cas响应超时
#define INS_ERROR_PRIVATE_VTDU_STATUS_406					    2606   				//token失效
#define INS_ERROR_PRIVATE_VTDU_STATUS_407					    2607   				//客户端的URL格式错误
#define INS_ERROR_PRIVATE_VTDU_STATUS_409					    2609   				//预览开启隐私保护
#define INS_ERROR_PRIVATE_VTDU_STATUS_410	    				2610   				//设备达到最大连接数
#define INS_ERROR_PRIVATE_VTDU_STATUS_411					    2611   				//token无权限
#define INS_ERROR_PRIVATE_VTDU_STATUS_412					    2612   				//session不存在
#define INS_ERROR_PRIVATE_VTDU_STATUS_413					    2613   				//验证token的其他异常（不具体）
#define INS_ERROR_PRIVATE_VTDU_STATUS_415					    2615   				//设备通道错
#define INS_ERROR_PRIVATE_VTDU_STATUS_451					    2651   				//设备不支持的码流类型
#define INS_ERROR_PRIVATE_VTDU_STATUS_452					    2652   				//设备连接预览流媒体服务器失败
#define INS_ERROR_PRIVATE_VTDU_STATUS_454					    2654   				//视频分享时间已经结束
#define INS_ERROR_PRIVATE_VTDU_STATUS_491					    2691   				//相同请求正在处理，拒绝本次处理
#define INS_ERROR_PRIVATE_VTDU_STATUS_500					    2700   				//流媒体服务器内部处理错误
#define INS_ERROR_PRIVATE_VTDU_STATUS_503					    2703   				//vtm分配vtdu服务器失败
#define INS_ERROR_PRIVATE_VTDU_STATUS_544					    2744   				//设备返回无视频源
#define INS_ERROR_PRIVATE_VTDU_STATUS_545		    			2745                   //视频分享时间已经结束
#define INS_ERROR_PRIVATE_VTDU_STATUS_546		    			2746                   //VTDU取流并发2路限制
#define INS_ERROR_PRIVATE_VTDU_STATUS_556		    			2756                   //ticket校验失败

/// CASLIb  error  3000~4000
#define  INS_ERROR_CASLIB_BASE									3000
#define  INS_ERROR_CASLIB_MSG_UNKNOW_ERROR						3001	///<未知错误	
#define  INS_ERROR_CASLIB_MSG_PARAMS_ERROR						3002	///<报文参数错误	
#define  INS_ERROR_CASLIB_MSG_PARSE_FAILED						3003	///<报文解析错误	

#define  INS_ERROR_CASLIB_MSG_COMMAND_UNKNOW					3006	///<非法命令	
#define  INS_ERROR_CASLIB_MSG_COMMAND_NO_LONGER_SUPPORTED		3007	///<过时命令	
#define  INS_ERROR_CASLIB_MSG_COMMAND_NOT_SUITABLE				3008	///<错误命令	

#define  INS_ERROR_CASLIB_MSG_CHECKSUM_ERROR					3011	///<校验码错误	

#define  INS_ERROR_CASLIB_MSG_VERSION_UNKNOW					3016	///<协议版本错误	
#define  INS_ERROR_CASLIB_MSG_VERSION_NO_LONGER_SUPPORTED		3017	///<协议版本过低	
#define  INS_ERROR_CASLIB_MSG_VERSION_FORBIDDEN					3018	///<协议版本被禁止	

#define  INS_ERROR_CASLIB_MSG_SERIAL_NOT_FOR_CIVIL				3021	///<序列号解析失败	
#define  INS_ERROR_CASLIB_MSG_SERIAL_FORBIDDEN					3022	///<序列号被禁止	
#define  INS_ERROR_CASLIB_MSG_SERIAL_DUPLICATE					3023	///<序列号重复	
#define  INS_ERROR_CASLIB_MSG_SERIAL_FLUSHED_IN_A_SECOND		3024	///<相同序列号短时间内大量重复请求	
#define  INS_ERROR_CASLIB_MSG_SERIAL_NO_LONGER_SUPPORTED		3025	///<序列号不再支持	

#define  INS_ERROR_CASLIB_MSG_LOCAL_SERVER_BUSY					3031	///<本地无法响应	
#define  INS_ERROR_CASLIB_MSG_LOCAL_SERVER_REFUSED				3032	///<本地主动拒绝	
#define  INS_ERROR_CASLIB_REG_CANNOT_AFFORD_PU					3033	///<无法接受请求	
#define  INS_ERROR_CASLIB_REG_CRYPTO_UNMATCHED					3034	///<设备加密算法不匹配	

#define  INS_ERROR_CASLIB_MSG_DEV_TYPE_INVAILED					3036	///<设备类型错误	
#define  INS_ERROR_CASLIB_MSG_DEV_TYPE_NO_LONGGER_SUPPORTED		3037	///<设备类型不再支持	

#define  INS_ERROR_CASLIB_MSG_PU_BUSY							3041	///<设备无法响应	
#define  INS_ERROR_CASLIB_MSG_OPERATION_FAILED					3042	///<操作码错误	
#define  INS_ERROR_CASLIB_PU_NO_CRYPTO_FOUND					3043	///<设备或平台未找到对应的加密算法	
#define  INS_ERROR_CASLIB_MSG_PU_REFUSED						3044	///<拒绝	
#define  INS_ERROR_CASLIB_MSG_PU_NO_RESOURCE					3045	///<没有可用资源	 设备连接上线
#define  INS_ERROR_CASLIB_MSG_PU_CHANNEL_ERROR					3046	///<通道错	
#define  INS_ERROR_CASLIB_SYSTEM_COMMAND_PU_COMMAND_UNSUPPORTED	3047	///<不支持的命令	
#define  INS_ERROR_CASLIB_SYSTEM_COMMAND_PU_NO_RIGHTS_TO_DO_COMMAND		3048	///<没有权限	
#define  INS_ERROR_CASLIB_MSG_NO_SESSION_FOUND					3049	///<没有找到会话

#define  INS_ERROR_CASLIB_PREVIEW_CHANNEL_BUSY					3051	///<该通道已在发流	
#define  INS_ERROR_CASLIB_PREVIEW_CLIENT_BUSY					3052 ///<取流地址重复	
#define  INS_ERROR_CASLIB_PREVIEW_STREAM_UNSUPPORTED			3053	///<不支持的码流类型	
#define  INS_ERROR_CASLIB_PREVIEW_TRANSPORT_UNSUPPORTED			3054	///<不支持的传输方式	
#define  INS_ERROR_CASLIB_PREVIEW_CONNECT_SERVER_FAIL			3055	///<连接预览流媒体服务器失败 +
#define  INS_ERROR_CASLIB_PREVIEW_QUERY_WLAN_INFO_FAIL			3056	///<查询设备公网出口地址失败

#define  INS_ERROR_CASLIB_RECORD_SEARCH_START_TIME_ERROR		3061	///<查找录像开始时间错	
#define  INS_ERROR_CASLIB_RECORD_SEARCH_STOP_TIME_ERROR			3062	///<查找录像结束时间错	
#define  INS_ERROR_CASLIB_RECORD_SEARCH_FAIL					3063	///<查找录像失败	+

#define  INS_ERROR_CASLIB_PLAYBACK_TYPE_UNSUPPORTED				3066	///<不支持的回放类型	
#define  INS_ERROR_CASLIB_PLAYBACK_NO_FILE_MATCHED				3067	///<没有找到文件	
#define  INS_ERROR_CASLIB_PLAYBACK_START_TIME_ERROR				3068	///<开始时间错误	
#define  INS_ERROR_CASLIB_PLAYBACK_STOP_TIME_ERROR				3069	///<错误的结束时间	
#define  INS_ERROR_CASLIB_PLAYBACK_NO_FILE_FOUND				3070	///<该时间段内没有录像	
#define  INS_ERROR_CASLIB_PLAYBACK_CONNECT_SERVER_FAIL			3071	///<连接回放服务器端失败

#define  INS_ERROR_CASLIB_TALK_ENCODE_TYPE_UNSUPPORTED			3076	///<不支持的语音编码类型	
#define  INS_ERROR_CASLIB_TALK_CHANNEL_BUSY						3077	///<该通道已在对讲	
#define  INS_ERROR_CASLIB_TALK_CLIENT_BUSY						3078	///<和目的地址已有链接	
#define  INS_ERROR_CASLIB_TALK_UNSUPPORTED						3079	///<not support talk
#define  INS_ERROR_CASLIB_TALK_CHANNO_ERROR						3080	///<通道号错误
#define  INS_ERROR_CASLIB_TALK_CONNECT_SERVER_FAILED			3081	///<连接语音服务器失败
#define  INS_ERROR_CASLIB_TALK_CONNECT_REFUSED					3082	///<设备拒绝
#define  INS_ERROR_CASLIB_TALK_CONNECT_CAPACITY_LIMITED			3083	///<设备资源受限

#define  INS_ERROR_CASLIB_FORMAT_NO_LOCAL_STORAGE				3086	///<没有本地存储	
#define  INS_ERROR_CASLIB_FORMAT_FORMATING						3087	///<正在格式化中	
#define  INS_ERROR_CASLIB_FORMAT_FAILED							3088	///<尝试格式化失败	

#define  INS_ERROR_CASLIB_UPGRADE_PU_REQUEST_REFUSED			3091	///<服务器拒绝设备升级请求	
#define  INS_ERROR_CASLIB_UPGRADE_PU_REQUEST_VERSION_NOT_FOUND	3092	///<没有找到请求版本	
#define  INS_ERROR_CASLIB_UPGRADE_PU_REQUEST_UNNEEDED			3093	///<不需要升级	
#define  INS_ERROR_CASLIB_UPGRADE_PU_REQUEST_NO_SERVER_ONLINE	3094	///<没有升级服务器在线	
#define  INS_ERROR_CASLIB_UPGRADE_PU_REQUEST_ALL_SERVER_BUSY	3095	///<所有升级服务器都达到最大负载	

#define  INS_ERROR_CASLIB_UPGRADE_PU_UPGRADING					3101 ///<正在软件升级	
#define  INS_ERROR_CASLIB_UPGRADE_PU_UPGRAD_FAILED				3102 ///<升级失败（包含未知错误）
#define  INS_ERROR_CASLIB_UPGRADE_PU_UPGRAD_WRITE_FLASH_FAILED	3103 ///<升级写Flash失败
#define  INS_ERROR_CASLIB_UPGRADE_PU_UPGRAD_LANGUAGE_DISMATCH	3104 ///<升级语言不匹配

#define  INS_ERROR_CASLIB_PU_PASSWORD_UPDATE_NO_USER_MATHCED	3106	///<密码更新失败，没有对应用户	
#define  INS_ERROR_CASLIB_PU_PASSWORD_UPDATE_ORIGINAL_PASSWORD_ERROR		3107	///<密码跟新失败，原始密码错误	
#define  INS_ERROR_CASLIB_PU_PASSWORD_UPDATE_NEW_PASSWORD_DECRYPTE_FAILED   3108	///<密码更新失败，新密码解密失败	
#define  INS_ERROR_CASLIB_PU_PASSWORD_UPDATE_NEW_PASSWORD_CHECK_FAILED		3109	///<密码更新失败，新密码不符合规则	
#define  INS_ERROR_CASLIB_PU_PASSWORD_UPDATE_WRITE_FLASH_FAILED				3110	///<更新密码失败，写flash失败	
#define  INS_ERROR_CASLIB_PU_PASSWORD_UPDATE_OTHER_FALIURE					3111	///<更新密码失败，其他原因	

#define  INS_ERROR_CASLIB_PU_PASSWORD_VERIFY_PASSWORD_ FAILED				3116	///<验证密码失败	

#define  INS_ERROR_CASLIB_PLATFORM_CLIENT_REQUEST_NO_PU_FOUNDED				3121	///<请求的设备不在线	
#define  INS_ERROR_CASLIB_PLATFORM_CLIENT_REQUEST_REFUSED_TO_PROTECT_PU		3122	///<为了保护设备，拒绝请求	
#define  INS_ERROR_CASLIB_PLATFORM_CLIENT_REQUEST_PU_LIMIT_REACHED			3123	///<设备达到链接的客户端上限	
#define  INS_ERROR_CASLIB_PLATFORM_CLIENT_TEARDOWN_PU_CONNECTION			3124	///<要求客户端断开与设备连接	
#define  INS_ERROR_CASLIB_PU_REFUSE_CLIENT_CONNECTION						3125	///<设备拒绝平台发送的客户端连接请求	
#define  INS_ERROR_CASLIB_PLATFORM_CLIENT_VERIFY_AUTH_ERROR					3126  ///<CAS向验证中心验证用户权限失败
#define  INS_ERROR_CASLIB_PLATFORM_CLIENT_REQUEST_PU_OPEN_PRIVACY			3127 ///<设备开启隐私保护
#define  INS_ERROR_CASLIB_PLATFORM_CLIENT_NO_SIGN_RELEATED					3128		///</<没有关联特征码

#define  INS_ERROR_CASLIB_DEFENCE_TYPE_UNSUPPORTED							3131 ///<不支持的布撤防类型
#define	 INS_ERROR_CASLIB_DEFENCE_TYPE_FAILED								3132 ///</<布撤防失败
#define  INS_ERROR_CASLIB_DEFENCE_TYPE_FORCE_FAILED							3133 ///</<强制布撤防失败
#define  INS_ERROR_CASLIB_DEFENCE_TYPE_NEED_FORCE							3134 ///</<需要强制布撤防

#define  INS_ERROR_CASLIB_CLOUD_NOT_FOUND									3141 ///<没有找到云存储服务器
#define  INS_ERROR_CASLIB_CLOUD_NO_USER										3142 ///<用户未开通云存储
#define  INS_ERROR_CASLIB_CLOUD_FILE_TAIL_REACHED							3145 ///<文件已到结尾
#define  INS_ERROR_CASLIB_CLOUD_INVALID_SESSION								3146 ///<无效的session
#define  INS_ERROR_CASLIB_CLOUD_INVALID_HANDLE								3147 ///<无效的文件
#define  INS_ERROR_CASLIB_CLOUD_UNKNOWN_CLOUD								3148 ///<未知的云存储类型
#define  INS_ERROR_CASLIB_CLOUD_UNSUPPORT_FILETYPE							3149 ///<不支持的文件类型
#define  INS_ERROR_CASLIB_CLOUD_INVALID_FILE								3150 ///<无效的文件
#define  INS_ERROR_CASLIB_CLOUD_QUOTA_IS_FULL								3151 ///<配额已满
#define  INS_ERROR_CASLIB_CLOUD_FILE_IS_FULL								3152 ///<文件已满

#define INS_ERROR_CASLIB_CLIENT_BASE										3200  ///<客户端错误号
#define INS_ERROR_CASLIB_CLIENT_PARAMETER									3201  ///<参数错误
#define INS_ERROR_CASLIB_CLIENT_ALLOC_RESOURCE								3202  ///<分配资源失败
#define INS_ERROR_CASLIB_CLIENT_SEND_FAILED									3203  ///<发送错误
#define INS_ERROR_CASLIB_CLIENT_RECV_FAILED									3204  ///<接收错误
#define INS_ERROR_CASLIB_CLIENT_PARSE_XML									3205  ///<解析报文错误
#define INS_ERROR_CASLIB_CLIENT_CREATE_XML									3206  ///<生成报文错误
#define INS_ERROR_CASLIB_CLIENT_INIT_SOCKET									3207  ///<初始化Socket失败
#define INS_ERROR_CASLIB_CLIENT_CREATE_SOCKET								3208  ///<创建socket失败
#define INS_ERROR_CASLIB_CLIENT_CONNECT_FAILED								3209  ///<连接服务器失败
#define INS_ERROR_CASLIB_CLIENT_NO_INIT										3210  ///<CASLIB.dll not init
#define INS_ERROR_CASLIB_CLIENT_OVER_MAX_SESSION							3211  ///<超过CASCLIENT库支持的最大数
#define INS_ERROR_CASLIB_CLIENT_SENDTIMEOUT									3212  ///<信令发送超时
#define INS_ERROR_CASLIB_CLIENT_RECV_TIMEOUT								3213  ///<信令接收超时
#define INS_ERROR_CASLIB_CLIENT_CREATE_PACKET								3214  ///<create data packet failed
#define INS_ERROR_CASLIB_CLIENT_PARSE_PACKET								3215  ///<解析数据包错误
#define INS_ERROR_CASLIB_CLIENT_FORCE_STOP									3216	///<用户中途强行退出
#define INS_ERROR_CASLIB_CLIENT_GETPORT_FAILED								3217	///<获取本地端口错误
#define INS_ERROR_CASLIB_CLIENT_BASE64_ENCODE								3218	///<base64编码出错
#define INS_ERROR_CASLIB_CLIENT_BASE64_DECODE								3219	///<base64 decode failed
#define INS_ERROR_CASLIB_CLIENT_RECV_DATAERROR								3220  ///<接收数据错误
#define INS_ERROR_CASLIB_CLIENT_AES_ENCRYPT_FAILED							3221  ///<AES加密出错
#define INS_ERROR_CASLIB_CLIENT_AES_DECRYPT_FAILED							3222  ///<AES解密出错
#define INS_ERROR_CASLIB_CLIENT_OPERATION_UNSUPPORTED						3223  ///<不支持的操作
#define INS_ERROR_CASLIB_CLIENT_ERROR_P2P_FAILED							3224 ///<p2p打洞失败
#define INS_ERROR_CASLIB_CLIENT_ERROR_SEND_KEEPLIVE_FAILED					3225 ///<发送打洞包失败
#define INS_ERROR_CASLIB_CLIENT_ERROR_INIT_SSL								3228  ///<初始化ssl失败
#define INS_ERROR_CASLIB_CLIENT_ERROR_CONNECT_SSL        					3229  ///<ssl连接失败


#define INS_ERROR_CASLIB_CLIENT_ERROR_VERIFY_OTHER_ERROR				3249	///<认证的其他错误			
#define INS_ERROR_CASLIB_CLIENT_ERROR_VERIFY_DB_ERROR				    3250	///<认证的数据库错误
#define INS_ERROR_CASLIB_CLIENT_ERROR_VERIFY_PARAMS_ERROR			    3251	///<认证的参数错误
#define INS_ERROR_CASLIB_CLIENT_ERROR_VERIFY_EXEC_ERROR				    3252	///<认证的执行异常
#define INS_ERROR_CASLIB_CLIENT_ERROR_VERIFY_SESSION_ERROR			    3253	///<认证的session不正常
#define INS_ERROR_CASLIB_CLIENT_ERROR_VERIFY_CACHE_ERROR				3254	///<认证的缓存异常
#define INS_ERROR_CASLIB_CLIENT_ERROR_VERIFY_AUTH_NONE				    3255	///<认证的无权限

//reason: 之前的3045错误码太笼统，新增两个错误码加以细化
#define INS_ERROR_CASLIB_CLIENT_NO_VALID_PRELINK                        3290  ///< 没有可用的P2P预链接，和之前最大连接数（3045）做个区分
#define INS_ERROR_CASLIB_CLIENT_NO_INNER_RESOURCE                       3291  ///< 三路直连/P2P之后，第四路直连设备返回的错误码
#define INS_ERROR_CASLIB_CLIENT_NO_P2P_RESOURCE                         3292  ///< 没有P2P取流资源, 直连资源有余

#endif //_INS_ERRORCODE_H_