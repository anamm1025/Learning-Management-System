#include "addcourse.h"
#include"adminprofile.h"

#include"LMSsystem.h"

addCourse::addCourse(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	QPixmap pic("image.jpg");
	setAutoFillBackground(true);
	QPalette palette;
	QPixmap scaled=pic.scaled ( 2200, 840, Qt::IgnoreAspectRatio, Qt::FastTransformation );

	//QPixmap scaled=pic.scaled ( 1600, 840, Qt::IgnoreAspectRatio, Qt::FastTransformation );

	palette.setBrush(QPalette::Window, QBrush(scaled));

	this->setPalette(palette); 
}

addCourse::~addCourse()
{


}


void addCourse::addCourseClicked()
{
	ui.msgLabel->setText("");

	QString _courseName = ui.courseNameEdit->text();
	QString _courseCode = ui.courseCodeEdit->text();

	
	LMSsystem *one;
	one = LMSsystem::getInstance();

	if(_courseName == "" || _courseCode=="")
	{
		ui.msgLabel->setText("Please fill both the fields!!");
	}

	else if(one->verifyIfCourseExists(_courseCode.toLocal8Bit().constData())==0)
	{
		one->AddCourse(_courseName.toLocal8Bit().constData(), _courseCode.toLocal8Bit().constData());
		ui.msgLabel->setText("Course has been added successfully!!");
	}
	else
	{
			ui.msgLabel->setText("Sorry, Course already exists!!");
	}
}
void addCourse::cancelClicked()
{
	this->destroy();
	AdminProfile * a = new AdminProfile();
	a->showMaximized();
}