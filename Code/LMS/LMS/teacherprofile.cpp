#include "teacherprofile.h"
#include"lms.h"
#include"editprofilen.h"
#include"changepassword.h"
#include"edittest.h"
#include"selectcourse.h"
#include"selecttest.h"
#include"addquestion.h"
#include"LMSsystem.h"


TeacherProfile::TeacherProfile(QWidget *parent)
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
	ui.topLabel->setText("WELCOME "+session);



	/////////////

	

	ui.fname->setText(QString::fromStdString(one->getSessionFname()));
	ui.lname->setText(QString::fromStdString(one->getSessionLname()));
	ui.contact->setText(QString::fromStdString(one->getSessionContact()));
	ui.email->setText(QString::fromStdString(one->getSessionEmail()));
	ui.address->setText(QString::fromStdString(one->getSessionHome()));
}

TeacherProfile::~TeacherProfile()
{

}

void TeacherProfile::optionsComboBox()
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


		void  TeacherProfile::editTestClicked()
		{
	 		this->destroy();
	        editTest * s = new editTest;
	        s->showMaximized();
		}
		void  TeacherProfile::deleteTestClicked()
		{

			this->destroy();
	       	selectTest * s = new selectTest;
         	s->showMaximized();
		}
		void  TeacherProfile::setTestClicked()
		{
				this->destroy();
	     		selectCourse * s = new selectCourse;
				s->showMaximized();
		}
		void  TeacherProfile::addQuestionClicked()
		{
			this->destroy();
			addQuestion * s = new addQuestion;
			s->showMaximized();
		}