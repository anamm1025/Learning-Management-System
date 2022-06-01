#include "detailedresult.h"


#include"studentprofile.h"
#include"chooseexercise.h"
#include"LMSsystem.h"

detailedResult::detailedResult(QWidget *parent)
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

	int correctNo = one->getCurrentCorrectAnswers();

	char a[10];
	itoa(correctNo, a, 10);
	
	ui.correctAnswers->setText("Correct Answers: "+ QString::fromStdString(a));

	int wrongNo=one->getCurrentWrongAnswers();
	itoa(wrongNo, a, 10);

	ui.wrongAnswers->setText("Wrong Answers: " + QString::fromStdString(a));

	int unansweredNo=one->getNoOfQuestionInCurrentTest()-correctNo - wrongNo;
	itoa(unansweredNo, a, 10);

	ui.unanswered->setText("UnAnswered Questions:" + QString::fromStdString(a));

	
	if( one->showcurrentWrongQuestionsList() =="" )
	{
		ui.textBrowser->setText("NO WRONG QUESTIONS...!!");
	}
	else
		ui.textBrowser->setText( QString::fromStdString(one->showcurrentWrongQuestionsList()));
}

detailedResult::~detailedResult()
{

}


void detailedResult::CancelButtonClicked()
{
	LMSsystem *one;
	one = LMSsystem::getInstance();
	one->setCurrentQuestionsToZero();
	this->destroy();
	StudentProfile *p=new StudentProfile;
	p->showMaximized();
}

void detailedResult::TakeExercisesClicked()
{
	this->destroy();
	chooseExercise * p=new chooseExercise;
	p->showMaximized();
}