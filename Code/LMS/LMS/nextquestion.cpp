#include "nextquestion.h"
#include"selectcourse.h"
#include"adminprofile.h"
#include"teacherprofile.h"
#include"LMSsystem.h"

nextQuestion::nextQuestion(QWidget *parent)
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


	LMSsystem *one;
	one = LMSsystem::getInstance();
	int number = one->getQuestionNoInCurrentTest()+1;
	char qNo[10];
	itoa(number, qNo, 10);
	ui.qNoLabel->setText(qNo);

}

nextQuestion::~nextQuestion()
{

}

void nextQuestion::cancelClicked()
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
void nextQuestion::nextClicked()
{
	if(isAdded)
	{
		this->destroy();
		nextQuestion *  s = new nextQuestion;
		s->showMaximized();
	}
	else {
		ui.msgLabel->setText("Please add this question first");
	}

}

void nextQuestion::addClicked()
{

	ui.msgLabel->setText("");
	LMSsystem *one;
	one = LMSsystem::getInstance();

	QString statement = ui.statementEdit->text();
	QString optionA = ui.optionA->text();
	QString optionB = ui.optionB->text();
	QString optionC = ui.optionC->text();
	QString optionD = ui.optionD->text();
	QString correct;
	QVariant option=ui.correct->currentIndex();

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
	


	if(statement=="" || optionA=="" || optionB=="" || optionC=="" || optionD=="" )
	{

		ui.msgLabel->setText("Please Fill in all the fields!!");

	}
	
	else
	{
	  Question q;
	  q.setStatement(statement.toLocal8Bit().constData());
	  q.setAnswer(optionA.toLocal8Bit().constData(),optionB.toLocal8Bit().constData(), optionC.toLocal8Bit().constData(), optionD.toLocal8Bit().constData(), correct.toLocal8Bit().constData());
	 if( one->addQuestion(q))
	 {
		 ui.msgLabel->setText("Question is added Successfully!");
		 isAdded = true;

	 }
	 else
	 {
		 ui.msgLabel->setText("Question already exists!");

	 }
	 
	}

}