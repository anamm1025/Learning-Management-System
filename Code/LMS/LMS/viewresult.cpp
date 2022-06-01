#include "viewresult.h"

#include"studentprofile.h"
#include"detailedresult.h"
#include"chooseexercise.h"

#include"LMSsystem.h"

viewResult::viewResult(QWidget *parent)
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

}

viewResult::~viewResult()
{

}

void viewResult::CancelButtonClicked()
{
	this->destroy();
	StudentProfile *p=new StudentProfile;
	p->showMaximized();
}

void viewResult::viewDetailedresultClicked()
{
	this->destroy();
	detailedResult* d=new detailedResult;
	d->showMaximized();

}

void viewResult::TakeExercisesClicked()
{
	this->destroy();
	chooseExercise * p=new chooseExercise;
	p->showMaximized();
}