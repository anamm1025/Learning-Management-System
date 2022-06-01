#include "changepassword.h"

#include<iostream>
#include<cstring>

#include"LMSsystem.h"
#include"studentprofile.h"
#include"adminprofile.h"
#include"teacherprofile.h"

ChangePassword::ChangePassword(QWidget *parent)
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
}

ChangePassword::~ChangePassword()
{

}

void ChangePassword::OKButtonClicked()
{
	QString oldPassword=ui.oldpasswordEdit->text();
	QString newPassword=ui.newPasswordEdit->text();
	QString renewPassword=ui.renewPasswordEdit->text();


	ui.passErrorLabel->setText("");
	ui.passError1->setText("");
	ui.errorLabel->setText("");

	LMSsystem *one;
	one = LMSsystem::getInstance();

	if(one->verifyPasswordMatches(newPassword.toLocal8Bit().constData(),renewPassword.toLocal8Bit().constData())==0)
	{
		ui.passErrorLabel->setText("Password doesnt match!");
	}

	if(one->verifyPassword(newPassword.toLocal8Bit().constData())==0)
	{
		ui.passError1->setText("Password must be 6 characters long..!!");
	}

	if(one->ChangePassword(oldPassword.toLocal8Bit().constData(),newPassword.toLocal8Bit().constData(),renewPassword.toLocal8Bit().constData())==0)
	{
		ui.errorLabel->setText("Error..Check again that you typed the correct values...!!");
	}

	else
	{
		ui.errorLabel->setText("Password changed successfully");
	}

}


void ChangePassword::CancelButtonClicked()
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