#ifndef ZWW_GLOBAL_HXX
#define ZWW_GLOBAL_HXX

#define ZWW_TRUE 1
#define ZWW_FALSE 0

#define ZWW_BUILD_RELEASE ZWW_TRUE

#if ZWW_BUILD_RELEASE
#   define ZWW_API_URL_BASE "http://api.zywawa.com/"
#   define ZWW_WEB_URL_BASE "http://h5.zywawa.com/pc/"
#   define ZWW_NIM_APPKEY "8f619ee9bc9606c0362d9d79f93ad22a"
#else
#   define ZWW_API_URL_BASE "http://pre-api-claw.diaoyu-1.com/"
#   define ZWW_WEB_URL_BASE "http://pre-h5-claw.diaoyu-1.com/pc/"
#   define ZWW_NIM_APPKEY "18c4b4ff6d7d7496915226b3f3b98eee"
#endif

#endif // ZWW_GLOBAL_HXX