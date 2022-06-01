#include "login.h"
#include"signup.h"

#include"LMSsystem.h"
#include"studentprofile.h"
#include"adminprofile.h"
#include"teacherprofile.h"

login::login(QWidget *parent)
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

login::~login()
{

}

void login::signupButtonClicked()
{
	this->destroy();
	signup *s=new signup;
	s->showMaximized();

}

void login::loginButtonClicked()
{
	ui.checkboxLabel->setText("");
	ui.errorLabel->setText("");

	QString username=ui.usernameEdit->text();
	QString password=ui.passwordEdit->text();

	int student=ui.studentCheckBox->checkState();
	int admin=ui.adminCheckBox->checkState();
	int teacher=ui.TeacherCheckBox->checkState();

	LMSsystem *one;
	one = LMSsystem::getInstance();
	if(one->verifyCheckBoxForLogin(student,admin,teacher)==0)
	{
		ui.checkboxLabel->setText("Select Only one");
	}

	if(one->isLogin(username.toLocal8Bit().constData(),password.toLocal8Bit().constData(),student,admin,teacher)==0)
	{
		ui.errorLabel->setText("Username or password is incorrect...!!");
	}
	else
	{
		if(one->getSessionStatus()=="student")
		{
			this->destroy();
			StudentProfile* s=new StudentProfile;
			s->showMaximized();
		}

		if(one->getSessionStatus()=="admin")
		{
			this->destroy();
			AdminProfile* s=new AdminProfile;
			s->showMaximized();
		}

		if(one->getSessionStatus()=="teacher")
		{
			this->destroy();
			TeacherProfile* s=new TeacherProfile;
			s->showMaximized();
		}
	}


}
