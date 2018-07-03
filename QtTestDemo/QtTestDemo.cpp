#include "QtTestDemo.h"
#include "../PlayVideoLib/src/PlayVideoLib.h"

QtTestDemo::QtTestDemo(QWidget *parent)
	: QDialog(parent)
	, ui(new Ui::QtTestDemoClass)
{
	ui->setupUi(this);
	InitDlg();

	QString strPath = QCoreApplication::applicationDirPath();
	strPath += "/PlayVideoLib.dll";
	m_module = LoadLibrary(strPath.toStdWString().data());
	if (!m_module)
	{
		printf("¼ÓÔØPlayVideoLib.dllÊ§°Ü!\n");
	}

	m_funcInitVideo = (Init)GetProcAddress(m_module, "InitLib");
	m_funcReleaseVideo = (Release)GetProcAddress(m_module, "ReleaseLib");
	m_funcPlayVideo = (Play)GetProcAddress(m_module, "StartPlayVideo");
	m_funcStopVideo = (Stop)GetProcAddress(m_module, "StopPlayVideo");
}

QtTestDemo::~QtTestDemo()
{
	m_funcReleaseVideo();
	FreeLibrary(m_module);
	m_module = NULL;
	
	if (nullptr != ui)
	{
		delete ui;
		ui = nullptr;
	}
}

void QtTestDemo::InitVideo()
{
	m_funcInitVideo();
}

void QtTestDemo::sltPlayVideo()
{
	unsigned int hWnd0 = ui->video_main->winId();
	unsigned int hWnd1 = ui->video_side->winId();
	
	std::string serialNo0 = "140816673";
	std::string serialNo1 = "140816679";

	m_funcPlayVideo(hWnd0, serialNo0.c_str(), 1, hWnd1, serialNo1.c_str(), 1);
	sltPlayMain();
}

void QtTestDemo::sltPlayMain()
{
	ui->video_main->setVisible(true);
	ui->video_side->setVisible(false);
}

void QtTestDemo::sltPlayLeft()
{
	ui->video_main->setVisible(false);
	ui->video_side->setVisible(true);
}

void QtTestDemo::sltStopVideo()
{
	m_funcStopVideo();
	ui->video_main->update();
	ui->video_side->update();
}

void QtTestDemo::InitDlg()
{
	connect(ui->btnStart, &QPushButton::clicked, [this]() {sltPlayVideo(); });
	connect(ui->btnStartMain, &QPushButton::clicked, [this]() {sltPlayMain(); });
	connect(ui->btnStartLeft, &QPushButton::clicked, [this]() {sltPlayLeft(); });
	connect(ui->btnStop, &QPushButton::clicked, [this]() {sltStopVideo(); });
}
