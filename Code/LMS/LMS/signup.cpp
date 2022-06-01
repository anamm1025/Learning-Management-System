#include "signup.h"
#include<iostream>
#include<string>

#include"Student.h"
#include"Person.h"
#include"lms.h"
#include"LMSsystem.h"

using namespace std;
signup::signup(QWidget *parent)
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
}

signup::~signup()
{

}

void signup::signupButtonClicked()
{
	
	QString username=ui.usernameEdit->text();
	QString fname=ui.firstnameEdit->text();
	QString lname=ui.lnameEdit->text();
	QString password=ui.passwordEdit->text();
	QString repassword=ui.retypePasswordEdit->text();
	QString contact=ui.phoneEdit->text();
	QString email=ui.emailEdit->text();
	QString date=ui.dateEdit->text();
	QString home=ui.homeEdit->text();

	ui.genderError->setText("");
	ui.nameError->setText("");
	ui.passwordError->setText("");
	ui.repasswordError->setText("");
	ui.contactError->setText("");
	ui.emailError->setText("");
	ui.DOBerror->setText("");
	ui.errorLabel->setText("");
	ui.usernameError->setText("");

	int checkGender1=ui.femaleCheckbox->checkState();
	int checkGender2=ui.maleCheckbox->checkState();

	genderType gender;

	if(checkGender1==2 && checkGender2==2)//it means that both the genders have been selected
	{
		ui.genderError->setText("Select only one gender!");
	}

	else if(checkGender1==0 && checkGender2==0)//it means that none of the genders have been selected
	{
		ui.genderError->setText("Select a gender!");
	}
	else if(checkGender1==0 && checkGender2==2)//Male
	{
		gender=Male;
	}
	else
		gender=Female;


	if(password==""|| repassword=="" || fname=="" || lname=="" || username=="" || email=="" || home=="" || contact=="")
	{
		ui.errorLabel->setText("Fill all the fields!");
	}

	LMSsystem *one;
	one = LMSsystem::getInstance();
	if(one->verifyUsername(username.toLocal8Bit().constData())==0)
	{
		ui.usernameError->setText("Username already exists.Enter a unique username");
	}
	if(one->verifyName(fname.toLocal8Bit().constData())==0 || one->verifyName(lname.toLocal8Bit().constData())==0)
	{
		ui.nameError->setText("Invalid Name");
	}

	if(one->verifyPassword(password.toLocal8Bit().constData())==0)
	{
		ui.passwordError->setText("Password must be 6 characters long");
	}

	else if(one->verifyPasswordMatches(password.toLocal8Bit().constData(),repassword.toLocal8Bit().constData())==0)
	{
		ui.repasswordError->setText("Password does not match");
	}
	else
		ui.repasswordError->setText("Password matched");

	if(one->verifyContact(contact.toLocal8Bit().constData())==0)
	{
		ui.contactError->setText("Invalid Contact Number");
	}
	if(one->verifyEmail(email.toLocal8Bit().constData())==0)
	{
		ui.emailError->setText("Invalid email address");
	}

	Student s;

	s.setUsername(username.toLocal8Bit().constData());//converting QString to string
	s.setName(fname.toLocal8Bit().constData(),lname.toLocal8Bit().constData());
	s.setPassword(password.toLocal8Bit().constData());
	s.setAddress(home.toLocal8Bit().constData());
	s.setDOB(date.toLocal8Bit().constData());
	s.setEmail(email.toLocal8Bit().constData());
	s.setGender(gender);
	s.setContact(contact.toLocal8Bit().constData());

	if(one->AddStudent(s,checkGender1,checkGender2)==1)
	{
		ui.errorLabel->setText("Congratulations. Your account has been created.");
	}
}

void signup::quitButtonClicked()
{
	this->destroy();
	LMS *w=new LMS;
	w->showMaximized();
}