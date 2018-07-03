#ifndef CONFIGMANAGER_H
#define CONFIGMANAGER_H

#include <string>

class CYingshi
{
private:
    typedef struct YINGSHICONFIG
    {
        std::string authAddress = "";
		std::string platformAddress = "";
		std::string token = "";
		std::string requsetTokenAddress = "";
		std::string expireTime = "";
		std::string appKey = "";
    } stuYingshiConfig;

public:
    static CYingshi *GetInstance();
    bool RefreshToken();
	stuYingshiConfig GetCurrentYingshiConfig();

private:
	bool GetReqUsingCurl(const std::string& url, std::string& response);
	bool PostReqUsingCurl(const std::string& url, const std::string& postParams, std::string& response);

private:
    static CYingshi *s_yingshi;
    CYingshi();
    ~CYingshi() = default;
	stuYingshiConfig m_yingshiConfig;

	std::string m_data = "";
};

#endif // CONFIGMANAGER_H
