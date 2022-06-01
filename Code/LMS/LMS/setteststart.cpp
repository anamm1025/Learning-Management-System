#include "setteststart.h"
#include"selectcourse.h"
#include"nextquestion.h"

#include"adminprofile.h"
#include"teacherprofile.h"
#include"LMSsystem.h"
#include"question.h"


setTestStart::setTestStart(QWidget *parent)
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

	isAdded = false;

}

setTestStart::~setTestStart()
{

}

void setTestStart::cancelClicked()
{
		LMSsystem *one;
	one = LMSsystem::getInstance();

		if(one->getSessionStatus()=="admin")
	{
	this->destroy();
	AdminProfile * a = new AdminProfile;
	a->showMaximized();
	}

	else if(one->getSessionStatus()=="teacher")
	{
	this->destroy();
	TeacherProfile * a = new TeacherProfile;
	a->showMaximized();
	}


}
void setTestStart::nextClicked()
{
	if(isAdded)
	{
		this->destroy();
		nextQuestion *  s = new nextQuestion;
		s->showMaximized();
	}
	else
	{
		ui.errorLabel->setText("Add this question first!");
	}

}

void setTestStart::addClicked()
{
	ui.errorLabel->setText("");
	if(isAdded)
	{
		ui.errorLabel->setText("This question is already added! Go to Next.");
		return;
	}

	
	LMSsystem *one;
	one = LMSsystem::getInstance();

	QString statement = ui.statementEdit->text();
	QString optionA = ui.OptionA->text();
	QString optionB = ui.optionB->text();
	QString optionC = ui.optionC->text();
	QString optionD = ui.optionD->text();
	QString testName = ui.testNameEdit->text();
	QString topic = ui.topicEdit->text();
	QString correct;
	QVariant option=ui.correctOption->currentIndex();

	if(option==0)
	{
		correct = optionA;
	}
	else if(option==1)
	{
		correct = optionB;
	}
		
	else if(option==2)
	{
		correct = optionC;
	}
	else if(option==3)
	{
		correct = optionD;
	}
	


	if(statement=="" || optionA=="" || optionB=="" || optionC=="" || optionD=="" || topic=="" || testName == "")
	{

		ui.errorLabel->setText("Please Fill in all the fields!!");

	}
	else if(!(one->verifyUniqueTestnName(testName.toLocal8Bit().constData())))
	{
		ui.uniqueNameLabel->setText("Test name is not Unique!");
	}
	else
	{
	  Question q;
	  q.setStatement(statement.toLocal8Bit().constData());
	  q.setAnswer(optionA.toLocal8Bit().constData(),optionB.toLocal8Bit().constData(), optionC.toLocal8Bit().constData(), optionD.toLocal8Bit().constData(), correct.toLocal8Bit().constData());
	  one->setTest(q, testName.toLocal8Bit().constData(),topic.toLocal8Bit().constData());
	  one->setCurrentTestName(testName.toLocal8Bit().constData());
	  one->addQuestion(q);
	  ui.errorLabel->setText("Question is added Successfully!");

	  isAdded = true;
	}

}
