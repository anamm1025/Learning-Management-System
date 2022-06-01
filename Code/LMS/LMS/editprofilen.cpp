#include "editprofilen.h"

#include<iostream>
#include<string>

#include"LMSsystem.h"
#include"studentprofile.h"
#include"adminprofile.h"
#include"teacherprofile.h"

editProfilen::editProfilen(QWidget *parent)
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
	ui.topLabel->setText(session);

	ui.firstnameEdit->setText(QString::fromStdString(one->getSessionFname()));
	ui.lnameEdit->setText(QString::fromStdString(one->getSessionLname()));
	ui.phoneEdit->setText(QString::fromStdString(one->getSessionContact()));
	ui.emailEdit->setText(QString::fromStdString(one->getSessionEmail()));
	ui.homeEdit->setText(QString::fromStdString(one->getSessionHome()));

}

editProfilen::~editProfilen()
{

}

void editProfilen::saveChangesClicked()
{
	QString fname=ui.firstnameEdit->text();
	QString lname=ui.lnameEdit->text();
	QString contact=ui.phoneEdit->text();
	QString email=ui.emailEdit->text();
	QString home=ui.homeEdit->text();

	ui.nameError->setText("");
	ui.contactError->setText("");
	ui.emailError->setText("");
	ui.errorLabel->setText("");

	LMSsystem *one;
	one = LMSsystem::getInstance();

	if(fname=="" || lname=="" || contact=="" || email=="" || home=="")
	{
		ui.errorLabel->setText("Fill All the Fields");
	}

	if(one->verifyName(fname.toLocal8Bit().constData())==0 || one->verifyName(lname.toLocal8Bit().constData())==0)
	{
		ui.nameError->setText("Invalid Name");
	}

	if(one->verifyContact(contact.toLocal8Bit().constData())==0)
	{
		ui.contactError->setText("Invalid Contact Number");
	}
	if(one->verifyEmail(email.toLocal8Bit().constData())==0)
	{
		ui.emailError->setText("Invalid email address");
	}

	if(one->EditProfileInfo(fname.toLocal8Bit().constData(),lname.toLocal8Bit().constData(),contact.toLocal8Bit().constData(),email.toLocal8Bit().constData(),home.toLocal8Bit().constData())==1)
	{
		ui.errorLabel->setText("Profile Updated Successfully...!!");
	}
}
		
void editProfilen::CancelButtonClicked()
{
	this->destroy();
	LMSsystem *one;
	one = LMSsystem::getInstance();

	if(one->getSessionStatus()=="student")
	{
		StudentProfile* p=new StudentProfile();
		p->showMaximized();
	}

	if(one->getSessionStatus()=="admin")
	{
		AdminProfile* p=new AdminProfile();
		p->showMaximized();
	}

	if(one->getSessionStatus()=="teacher")
	{
		TeacherProfile* p=new TeacherProfile();
		p->showMaximized();
	}
	
}
