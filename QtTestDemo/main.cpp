#include "QtTestDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtTestDemo w;

	w.InitVideo();
	w.show();

	return a.exec();
}
