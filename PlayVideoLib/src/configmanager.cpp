#include "configmanager.h"

#include <chrono>

#include "global.hxx"
#include "curl/curl.h"
#include "value.h"
#include "reader.h"

static std::string::size_type const reserved = 64 * 1024; // 64KB

CYingshi *CYingshi::s_yingshi = nullptr;

// reply of the requery  
static size_t req_reply(char *ptr, size_t size, size_t nmemb, void *userdata) 
{
	auto const total = size * nmemb;
	auto const resp = reinterpret_cast<std::string*>(userdata);
	resp->append(ptr, total);
	return total;
}

CYingshi::CYingshi()
{
	m_yingshiConfig.authAddress = "https://auth.ys7.com";
	m_yingshiConfig.platformAddress = "https://open.ys7.com";
	m_yingshiConfig.requsetTokenAddress = "https://open.ys7.com/api/lapp/token/get";
    m_yingshiConfig.appKey = "6b703af3fda142999d27b2147f9ed440";
	m_yingshiConfig.token = "";
	m_yingshiConfig.expireTime = "1529998611";
}

bool CYingshi::RefreshToken()
{
	curl_global_init(CURL_GLOBAL_ALL);

	std::string url = ZWW_API_URL_BASE + std::string("grant/ys/token?debug=1");
	std::string strResp = "";
	if (!PostReqUsingCurl(url, "", strResp))
	{
		return false;
	}

	Json::Reader reader;
	Json::Value vRoot;
	if (reader.parse(strResp, vRoot))  // reader将Json字符串解析到root，root将包含Json里所有子元素  
	{
		int code = vRoot["code"].asInt();
		if (0 != code)
		{
			return false;
		}
		Json::Value vData = vRoot["data"];
		if (!vData.isNull() &&
			vData.isObject())
		{
			std::string strAccessToken = vData["accessToken"].asString();
			unsigned int uExpireTime = vData["expireTime"].asUInt();
			std::string strExpireTime = std::to_string(uExpireTime);
			m_yingshiConfig.token = strAccessToken;
			m_yingshiConfig.expireTime = strExpireTime;
		}
	}
	else
	{
		return false;
	}

	curl_global_cleanup();
	return true;
}

CYingshi::stuYingshiConfig CYingshi::GetCurrentYingshiConfig()
{
	return m_yingshiConfig;
}

bool CYingshi::GetReqUsingCurl(const std::string& url, std::string& response)
{
	// init curl  
	CURL *curl = curl_easy_init();
	// res code  
	CURLcode res;
	if (curl)
	{
		// set params  
		curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1); // follow redirection url
		curl_easy_setopt(curl, CURLOPT_URL, url.c_str()); // url  
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, false); // if want to use https  
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, false); // set peer and host verify true
		curl_easy_setopt(curl, CURLOPT_VERBOSE, 1);
		curl_easy_setopt(curl, CURLOPT_READFUNCTION, NULL);
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, req_reply);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&response);
		curl_easy_setopt(curl, CURLOPT_NOSIGNAL, 1); // must be 1 in multi-thread application
		curl_easy_setopt(curl, CURLOPT_HEADER, 0);
		curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, 3);
		curl_easy_setopt(curl, CURLOPT_TIMEOUT_MS, std::chrono::milliseconds(3 * 1000)); // set transport and time out time  
		// start req  
		res = curl_easy_perform(curl);
	}
	// release curl  
	curl_easy_cleanup(curl);

	return (CURLE_OK == res) ? true : false;
}

bool CYingshi::PostReqUsingCurl(const std::string& url, const std::string& postParams, std::string& response)
{
	// init curl  
	CURL *curl = curl_easy_init();
	// res code  
	CURLcode res;
	if (curl)
	{
		// set params  
		curl_easy_setopt(curl, CURLOPT_POST, 1L); // post req  
		curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1); // follow redirection url
		curl_easy_setopt(curl, CURLOPT_URL, url.c_str()); // url  
		curl_easy_setopt(curl, CURLOPT_POSTFIELDS, postParams.c_str()); // params 
		curl_easy_setopt(curl, CURLOPT_POSTFIELDSIZE, postParams.length());
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYPEER, false); // if want to use https  
		curl_easy_setopt(curl, CURLOPT_SSL_VERIFYHOST, false); // set peer and host verify false  
		curl_easy_setopt(curl, CURLOPT_VERBOSE, 1); // print connection and response content at screen
		curl_easy_setopt(curl, CURLOPT_READFUNCTION, NULL);
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, req_reply);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&response);
		curl_easy_setopt(curl, CURLOPT_NOSIGNAL, 1);// must be 1 in multi-thread application
		curl_easy_setopt(curl, CURLOPT_HEADER, 0); // hide header content using 0
		curl_easy_setopt(curl, CURLOPT_CONNECTTIMEOUT, 3); // connection time out(depends on network quality)
		curl_easy_setopt(curl, CURLOPT_TIMEOUT_MS, std::chrono::milliseconds(3 * 1000)); // receiving data time out
		// start req  
		res = curl_easy_perform(curl);
	}
	// release curl  
	curl_easy_cleanup(curl);

	return (CURLE_OK == res) ? true : false;
}

CYingshi *CYingshi::GetInstance()
{
    if (s_yingshi == nullptr)
        s_yingshi = new CYingshi;

    return s_yingshi;
}