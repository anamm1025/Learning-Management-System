#include "editnextquestion.h"
#include"adminprofile.h"
#include"edittest.h"
#include"teacherprofile.h"
#include"LMSsystem.h"
#include"question.h"

editNextQuestion::editNextQuestion(QWidget *parent)
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
	int qNum = one->getCurrentQuestioNoToBeEdited();

	qNum++;
	char a[10];
	itoa(qNum, a, 10);
	ui.qNo->setText(a);

	Question q = one->getQuestion();
	ui.statementEdit->setText(QString::fromStdString(q.getStatement()));
	ui.optionA->setText(QString::fromStdString(q.getAnswer().getOptionA()));
	ui.optionB->setText(QString::fromStdString(q.getAnswer().getOptionB()));
	ui.optionC->setText(QString::fromStdString(q.getAnswer().getOptionC()));
	ui.optionD->setText(QString::fromStdString(q.getAnswer().getOptionD()));

	if(q.getAnswer().getCorrectAnswer() == q.getAnswer().getOptionA())
		ui.correct->setCurrentIndex(0);
	else if(q.getAnswer().getCorrectAnswer() == q.getAnswer().getOptionB())
			ui.correct->setCurrentIndex(1);
	else if(q.getAnswer().getCorrectAnswer() == q.getAnswer().getOptionC())
			ui.correct->setCurrentIndex(2);
	else if(q.getAnswer().getCorrectAnswer() == q.getAnswer().getOptionD())
			ui.correct->setCurrentIndex(3);

}

editNextQuestion::~editNextQuestion()
{

}


void editNextQuestion::deleteClicked()
{
	QString statement = ui.statementEdit->text();
	LMSsystem *one;
	one = LMSsystem::getInstance();
	one->deleteQuestion(statement.toLocal8Bit().constData());

	if(one->getNoOfQuestionInCurrentTest()==0)
	{
		one->DropTest(one->getSelectedCourseCode(), one->getCurrentTestName());
		this->destroy();
		editTest * e = new editTest;
		e->showMaximized();
	}

	else 
	{
		if(one->getCurrentQuestioNoToBeEdited()  >= one->getNoOfQuestionInCurrentTest())
			one->setCurrentQuestioNoToBeEdited( one->getCurrentQuestioNoToBeEdited()-1);


	this->destroy();
	editNextQuestion * e = new editNextQuestion;
	e->showMaximized();
	}

}
void editNextQuestion::editClicked()
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
	  one->editQuestion(q);
	  ui.msgLabel->setText("Question is Edited Successfully!");	 
	}
}


void editNextQuestion::nextClicked()
{
		LMSsystem *one;
	one = LMSsystem::getInstance();
	if(one->getCurrentQuestioNoToBeEdited()+1 < one->getNoOfQuestionInCurrentTest())
	{
	one->setCurrentQuestioNoToBeEdited( one->getCurrentQuestioNoToBeEdited() + 1);

	this->destroy();
	editNextQuestion * e = new editNextQuestion;
	e->showMaximized();
	}

	else
	{
		ui.msgLabel->setText("No more Questions are there in this test!");
	}
}
void editNextQuestion::backClicked()
{
	
	LMSsystem *one;
	one = LMSsystem::getInstance();
	if(one->getCurrentQuestioNoToBeEdited()-1 >=0)
	{
	   one->setCurrentQuestioNoToBeEdited(one->getCurrentQuestioNoToBeEdited() - 1);
	   this->destroy();
	   editNextQuestion * e = new editNextQuestion;
	   e->showMaximized();
	}

	else
	{
		ui.msgLabel->setText("This is first Question, You can't go back!");
	}

}
void editNextQuestion::cancelClicked()
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
