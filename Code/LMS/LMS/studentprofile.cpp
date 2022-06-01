#include "studentprofile.h"
#include"chooseexercise.h"
#include"viewpreviousresults.h"

#include"LMSsystem.h"
#include"changepassword.h"
#include"lms.h"
#include"editprofilen.h"
#include"takequiz.h"


using namespace std;

StudentProfile::StudentProfile(QWidget *parent)
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



	////////////////////////

	


	ui.fname->setText(QString::fromStdString(one->getSessionFname()));
	ui.lname->setText(QString::fromStdString(one->getSessionLname()));
	ui.contact->setText(QString::fromStdString(one->getSessionContact()));
	ui.email->setText(QString::fromStdString(one->getSessionEmail()));
	ui.address->setText(QString::fromStdString(one->getSessionHome()));



}

StudentProfile::~StudentProfile()
{

}


void StudentProfile::optionsButtonClicked()
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

void StudentProfile::TakeQuizClicked()
{
	this->destroy();
	takeQuiz* t=new takeQuiz;
	t->showMaximized();
}

void StudentProfile::PreviousResultClicked()
{
	this->destroy();
	viewPreviousResults* p=new viewPreviousResults;
	p->showMaximized();

}

void StudentProfile::takeExerciseClicked()
{

	this->destroy();
	chooseExercise * p=new chooseExercise;
	p->showMaximized();
}