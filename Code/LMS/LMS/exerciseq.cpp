#include "exerciseq.h"
#include"studentprofile.h"
#include"LMSsystem.h"
#include"exercise.h"
exerciseQ::exerciseQ(QWidget *parent)
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

	Exercise e = one->getExercise(one->getcurrentExercise());
	int qnumber = one->getcurrentExerciseQ();
	string q = e.getQuestion(qnumber).getQues();
	string a = e.getQuestion(qnumber).getAns();

	qnumber++;
	char label[10];
	itoa(qnumber, label, 10);
	ui.qNo->setText(label);
	ui.qLabel->setText(QString::fromStdString(q));
	ui.aLabel->setText(QString::fromStdString(a));


}

exerciseQ::~exerciseQ()
{

}



void exerciseQ::backClicked()
{
		LMSsystem *one;
	one = LMSsystem::getInstance();
	

	if(one->getcurrentExerciseQ() > 0)
	{
		one->setcurrentExerciseQ(one->getcurrentExerciseQ()-1);

	this->destroy();
	exerciseQ * e = new exerciseQ;
	e->showMaximized();			
	}

	else
	{
	ui.msg->setText("no more questions!");

	}
}


void exerciseQ::nextClicked()
{
	LMSsystem *one;
	one = LMSsystem::getInstance();

		if(one->getcurrentExerciseQ()+1 < one->getNoOfQuestionsinCurrentExercise())
	     {

		one->setcurrentExerciseQ(one->getcurrentExerciseQ()+1);

	this->destroy();
	exerciseQ * e = new exerciseQ;
	e->showMaximized();

		}


	else
	{
		ui.msg->setText("no more questions!");
	}

}

void exerciseQ::cancelClicked()
{
				
	this->destroy();
	StudentProfile * e = new StudentProfile;
	e->showMaximized();
}
