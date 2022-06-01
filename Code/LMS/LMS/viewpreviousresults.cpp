#include "viewpreviousresults.h"

#include"studentprofile.h"

#include"LMSsystem.h"

viewPreviousResults::viewPreviousResults(QWidget *parent)
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


	vector<Result> t=one->getSpecificStudentResultList();

	for(std::vector<Result>::iterator it = t.begin(); it != t.end(); ++it)
	{
		QTreeWidgetItem * item = new QTreeWidgetItem();
		int idx=it-t.begin()+1;
		char id[4];
		itoa(idx,id,10);


		item->setText(0,QString::fromStdString(id));
		item->setText(1,QString::fromStdString(it->getTestForResult()));
		item->setText(2,QString::fromStdString(it->getCourseCode()));

		int correctNo=it->getNoOfCorrectAnswers();
		itoa(correctNo,id,10);

		item->setText(3,QString::fromStdString(id));

		int wrongNo=it->getNoOfWrongAnswers();
		itoa(wrongNo,id,10);

		item->setText(4,QString::fromStdString(id));
		ui.treeWidget->addTopLevelItem(item);
	}

}

viewPreviousResults::~viewPreviousResults()
{

}

void viewPreviousResults::BackButtonClicked()
{
	this->destroy();
	StudentProfile* p=new StudentProfile;
	p->showMaximized();
}