#include "seenextquestion.h"

#include"studentprofile.h"
#include"viewresult.h"

#include"LMSsystem.h"
#include"question.h"
#include"Result.h"

seeNextQuestion::seeNextQuestion(QWidget *parent)
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
	ui.username->setText(session);

	int qNum = one->getCurrentQuestioNoToBeEdited();


	qNum++;
	char a[10];
	itoa(qNum, a, 10);
	ui.label->setText("Question NO "+ QString::fromStdString(a));

	Question q = one->getQuestion();
	ui.statementLabel->setText("Question Statemnt:  " + QString::fromStdString(q.getStatement()));
	ui.optionA->setText(QString::fromStdString(q.getAnswer().getOptionA()));
	ui.optionB->setText(QString::fromStdString(q.getAnswer().getOptionB()));
	ui.optionC->setText(QString::fromStdString(q.getAnswer().getOptionC()));
	ui.optionD->setText(QString::fromStdString(q.getAnswer().getOptionD()));

}

seeNextQuestion::~seeNextQuestion()
{

}


void seeNextQuestion::QuitButtonClicked()
{
	this->destroy();
	StudentProfile* p=new StudentProfile;
	p->showMaximized();
}

void seeNextQuestion::NextButtonClicked()
{

	LMSsystem *one;
	one = LMSsystem::getInstance();
	Question q = one->getQuestion();

	QVariant option=ui.correct->currentIndex();



	if(one->getCurrentQuestioNoToBeEdited()+1 < one->getNoOfQuestionInCurrentTest())
	{
		QVariant option=ui.correct->currentIndex();
		if(option==0)//select nothing
		{

		}
		else if(option==1 && q.getAnswer().getCorrectAnswer() ==q.getAnswer().getOptionA())//means optionA is selected
		{

			one->IncreaseCorrectAnswers();
		}
		else if(option==2 && q.getAnswer().getCorrectAnswer() ==q.getAnswer().getOptionB())//means optionB is selected
		{
			one->IncreaseCorrectAnswers();
		}
		else if(option==3 && q.getAnswer().getCorrectAnswer() ==q.getAnswer().getOptionC())//means optionC is selected
		{
			one->IncreaseCorrectAnswers();
		}
		else if(option==4 && q.getAnswer().getCorrectAnswer()==q.getAnswer().getOptionD())//means optionD is selected
		{
			one->IncreaseCorrectAnswers();
		}
		else
		{
			one->IncreaseWrongAnswers();

		}

		one->setCurrentQuestioNoToBeEdited( one->getCurrentQuestioNoToBeEdited() + 1);

		this->destroy();
		seeNextQuestion * e = new seeNextQuestion;
		e->showMaximized();
	}

	else
	{
		ui.msgLabel->setText("No more Questions are there in this test! Submit the quiz...!!");
	}
}

void seeNextQuestion::submitTestClicked()
{
	LMSsystem *one;
	one = LMSsystem::getInstance();

	Question q = one->getQuestion();

	QVariant option=ui.correct->currentIndex();
	if(option==0)//means no option is selected
	{

	}
	if(option==1 && q.getAnswer().getCorrectAnswer() ==q.getAnswer().getOptionA())//means optionA is selected
	{
		one->IncreaseCorrectAnswers();
	}
	else if(option==2 && q.getAnswer().getCorrectAnswer() ==q.getAnswer().getOptionB())//means optionB is selected
	{
		one->IncreaseCorrectAnswers();
	}
	else if(option==3 && q.getAnswer().getCorrectAnswer() ==q.getAnswer().getOptionC())//means optionC is selected
	{
		one->IncreaseCorrectAnswers();
	}
	else if(option==4 && q.getAnswer().getCorrectAnswer()==q.getAnswer().getOptionD())//means optionD is selected
	{
		one->IncreaseCorrectAnswers();
	}
	else
	{
		one->IncreaseWrongAnswers();

	}

	one->AddResult();

	this->destroy();
	viewResult* v=new  viewResult;
	v->showMaximized();
}