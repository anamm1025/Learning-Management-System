#include "chooseexercise.h"
#include"exerciseq.h"
#include"studentprofile.h"

#include"LMSsystem.h"

chooseExercise::chooseExercise(QWidget *parent)
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

	ui.coursePanel->setColumnWidth(0,50);

	LMSsystem *one;
	one = LMSsystem::getInstance();

	for(int i=0; i<one->getNoOfExercises(); i++)
	{
		
		Exercise c = one->getExercise(i);
		QTreeWidgetItem * item = new QTreeWidgetItem;
		int idx=c.getID();
		char id[10];
		itoa(idx,id,10);
		string course = c.getCourse();
		string topic = c.getTopic();
		int noOfQ = c.getNoOfQ();

		char a[10];
		itoa(noOfQ, a, 10);


		item->setText(0,QString::fromStdString(id));
		item->setText(1,QString::fromStdString(course));
		item->setText(2,QString::fromStdString(topic));
		item->setText(3,a);
		
		
		ui.coursePanel->addTopLevelItem(item);
	}
}

chooseExercise::~chooseExercise()
{


}



void chooseExercise::cancelClicked()
{

	this->destroy();
	StudentProfile * p = new StudentProfile;
	p->showMaximized();
}
void chooseExercise::selectClicked()
{	
	if(ui.coursePanel->currentItem())
	{

	int exerciseID  = ui.coursePanel->currentItem()->data(0,0).toInt();
	LMSsystem *one;
	one = LMSsystem::getInstance();
	one->setcurrentExercise(exerciseID-1);
	one->setcurrentExerciseQ(0);
			
	this->destroy();
	exerciseQ * p = new exerciseQ;
	p->showMaximized();
	}

	else
	{
	ui.errorLabel->setText("No Exercises Available!!");
	}
}