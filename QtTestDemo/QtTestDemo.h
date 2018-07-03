#pragma once

#include <QtWidgets/QDialog>
#include <windows.h>
#include "ui_QtTestDemo.h"

typedef bool(*Init) ();
typedef bool(*Release) ();
typedef bool(*Play) (int, const char*, int, int, const char*, int);
typedef bool(*Stop) ();

class QtTestDemo : public QDialog
{
	Q_OBJECT

public:
	QtTestDemo(QWidget *parent = Q_NULLPTR);
	~QtTestDemo();
	
	void InitVideo();

public slots:
	void sltPlayVideo();
	void sltPlayMain();
	void sltPlayLeft();
	void sltStopVideo();

private:
	void InitDlg();

private:
	Ui::QtTestDemoClass* ui = nullptr;
	HMODULE m_module = NULL;
	std::string m_strSessionInit;
	std::string m_strSessionPlay;

	Init m_funcInitVideo = nullptr;
	Release m_funcReleaseVideo = nullptr;
	Play m_funcPlayVideo = nullptr;
	Stop m_funcStopVideo = nullptr;
};
