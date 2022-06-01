#include "LMS.h"
#include <QtWidgets/QApplication>

#include"LMSsystem.h"


int main(int argc, char *argv[])
{
	LMSsystem *one;
	one = LMSsystem::getInstance();

	one->exerciseList;
	QApplication a(argc, argv);
	LMS w;
	w.showMaximized();
	return a.exec();
}
