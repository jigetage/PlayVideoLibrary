#include "LogOperate.h"
#include "log4cpp/Category.hh"
#include "log4cpp/FileAppender.hh"
#include "log4cpp/PatternLayout.hh"

static std::mutex m_mutex;

CLogOperate* CLogOperate::m_obj = nullptr;

CLogOperate* CLogOperate::GetInstance()
{
	m_mutex.lock();
	if (nullptr == m_obj)
	{
		m_obj = new CLogOperate;
	}
	m_mutex.unlock();
	return m_obj;
}

void CLogOperate::UnInstance()
{
	m_mutex.lock();
	if (nullptr != m_obj)
	{
		delete m_obj;
		m_obj = nullptr;
	}
	m_mutex.unlock();
}

void CLogOperate::DebugLog(std::string strMsg)
{
	log4cpp::Category& root = log4cpp::Category::getRoot();
	root.setPriority(log4cpp::Priority::DEBUG);
	root.addAppender(m_appender);
	root.debug(strMsg);
}

void CLogOperate::InfoLog(std::string strMsg)
{
	log4cpp::Category& root = log4cpp::Category::getRoot();
	root.setPriority(log4cpp::Priority::DEBUG);
	root.addAppender(m_appender);
	root.info(strMsg);
}

void CLogOperate::WarnLog(std::string strMsg)
{
	log4cpp::Category& root = log4cpp::Category::getRoot();
	root.setPriority(log4cpp::Priority::DEBUG);
	root.addAppender(m_appender);
	root.warn(strMsg);
}

void CLogOperate::ErrorLog(std::string strMsg)
{
	log4cpp::Category& root = log4cpp::Category::getRoot();
	root.setPriority(log4cpp::Priority::DEBUG);
	root.addAppender(m_appender);
	root.error(strMsg);
}

void CLogOperate::FatalLog(std::string strMsg)
{
	log4cpp::Category& root = log4cpp::Category::getRoot();
	root.setPriority(log4cpp::Priority::DEBUG);
	root.addAppender(m_appender);
	root.fatal(strMsg);
}

CLogOperate::CLogOperate()
{
	m_appender = new log4cpp::FileAppender("default", "program.log", false);
	log4cpp::PatternLayout* pLayout = new log4cpp::PatternLayout();
	pLayout->setConversionPattern("%d: %p %c %x: %m%n");
	m_appender->setLayout(pLayout);
}

CLogOperate::~CLogOperate()
{
	log4cpp::Category::shutdown();
}