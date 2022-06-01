#include "adminprofile.h"
#include"addquestion.h"
#include"edittest.h"
#include"editprofilen.h"
#include"changepassword.h"
#include"addteacher.h"
#include"lms.h"
#include"selecttest.h"
#include"viewteachers.h"
#include"viewstudents.h"
#include"addcourse.h"
#include"dropcourse.h"
#include"selectcourse.h"

#include"LMSsystem.h"
#include<cstring>
#include<iostream>



AdminProfile::AdminProfile(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

		QPixmap pic("image.jpg");
	setAutoFillBackground(true);
	QPalette palette;
	//QPixmap scaled=pic.scaled ( 1600, 480, Qt::IgnoreAspectRatio, Qt::FastTransformation );

	QPixmap scaled=pic.scaled ( 2200, 840, Qt::IgnoreAspectRatio, Qt::FastTransformation );

	palette.setBrush(QPalette::Window, QBrush(scaled));

	this->setPalette(palette); 

	LMSsystem *one;
	one = LMSsystem::getInstance();
	string s=one->getSessionUsername();

	transform(s.begin(), s.end(), s.begin(), toupper);
	QString session=QString::fromStdString(s);
	ui.label->setText("WELCOME "+session);


	/////


	

	ui.fname->setText(QString::fromStdString(one->getSessionFname()));
	ui.lname->setText(QString::fromStdString(one->getSessionLname()));
	ui.contact->setText(QString::fromStdString(one->getSessionContact()));
	ui.email->setText(QString::fromStdString(one->getSessionEmail()));
	ui.address->setText(QString::fromStdString(one->getSessionHome()));
}


AdminProfile::~AdminProfile()
{

}

void AdminProfile::optionsChanged()
{
	QVariant option=ui.optionComboBox->currentIndex();

	if(option==1)//means "edit profile" is selected
	{
		this->destroy();
		editProfilen * e =new editProfilen;
		e->showMaximized();
	}
	if(option==2)//means "change password" is selected
	{
		ChangePassword * e =new ChangePassword;
		e->showMaximized();
		this->destroy();
	}
	if(option==3)//means "Log Out" is selected
	{
		LMSsystem *one;
		one = LMSsystem::getInstance();
		one->LogOut();
		this->destroy();
		LMS* l=new LMS;
		l->showMaximized();
	}
}

void AdminProfile::AddTeacherButtonClicked()
{
	this->destroy();
	AddTeacher* t=new AddTeacher;
	t->showMaximized();
}

void AdminProfile::viewTeacherClicked()
{
	this->destroy();
	ViewTeachers* t=new ViewTeachers;
	t->showMaximized();
}

void AdminProfile::viewStudentsClicked()
{
	this->destroy();
	viewStudents* t=new viewStudents;
	t->showMaximized();
}

void AdminProfile::addCourseClicked()
{
	this->destroy();
	addCourse * a = new addCourse;
	a->showMaximized();

}
void AdminProfile::dropCourseClicked()
{
	this->destroy();
	dropCourse * d = new dropCourse;
	d->showMaximized();
}

void AdminProfile::setTestClicked()
{
	LMSsystem *one;
	one = LMSsystem::getInstance();
	this->destroy();
	selectCourse * s = new selectCourse;
	s->showMaximized();
}


void AdminProfile::deleteTestClicked()
{
	LMSsystem *one;
	one = LMSsystem::getInstance();
	this->destroy();
	selectTest * s = new selectTest;
	s->showMaximized();
}

void AdminProfile::addQuestionClicked()
{
	this->destroy();
	addQuestion * s = new addQuestion;
	s->showMaximized();
}

	void  AdminProfile::editTestClicked()
	{
	this->destroy();
	editTest * s = new editTest;
	s->showMaximized();
	}