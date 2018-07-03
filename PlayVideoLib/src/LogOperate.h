#ifndef LOG_OPERATE_H
#define LOG_OPERATE_H
/*
* \ 采用单例模式
*/

#include <mutex>
#include "log4cpp/Appender.hh"

class CLogOperate
{
public:
	static CLogOperate* GetInstance();
	static void UnInstance();

	void DebugLog(std::string strMsg);
	void InfoLog(std::string strMsg);
	void WarnLog(std::string strMsg);
	void ErrorLog(std::string strMsg);
	void FatalLog(std::string strMsg);

private:
	CLogOperate();
	~CLogOperate();

	static CLogOperate* m_obj;

	log4cpp::Appender* m_appender = nullptr;
};

#endif