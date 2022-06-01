#include "takequiz.h"

#include"adminprofile.h"
#include"seenextquestion.h"
#include"teacherprofile.h"
#include"studentprofile.h"
#include"course.h"
#include"LMSsystem.h"

takeQuiz::takeQuiz(QWidget *parent)
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

	
	ui.treeWidget->setColumnWidth(0,150);

	LMSsystem *one;
	one = LMSsystem::getInstance();


	for(int i=0; i<one->getCourseListSize(); i++)
	{

		Course c = one->getCourseItem(i);

		if(c.getNoOfTests()>0)
		{
			for(int j=0; j<c.getNoOfTests(); j++)
			{
				QTreeWidgetItem * item = new QTreeWidgetItem();

				Test t = c.getTest(j);
				item->setText(0,QString::fromStdString(c.getCourseCode()));
				item->setText(1,QString::fromStdString(c.getCourseName()));
				item->setText(2,QString::fromStdString(t.getName()));
				item->setText(3,QString::fromStdString(t.getTopic()));

				int num = t.getNoOfQuestions();
				char a[10];
				itoa(num, a, 10);

				item->setText(4,QString::fromStdString(a));
				ui.treeWidget->addTopLevelItem(item);
			}
		}

	}
}

takeQuiz::~takeQuiz()
{

}

void takeQuiz::CancelButtonClicked()
{
	this->destroy();
	StudentProfile * a = new StudentProfile;
	a->showMaximized();
}

void takeQuiz::SelectButtonClicked()
{
	QTreeWidgetItem *item = ui.treeWidget->currentItem();
	 

     if(item==NULL)
	 {
		 ui.msgLabel->setText("No Test is added Yet..!!");
		 return;
	 }

	 LMSsystem *one;
	one = LMSsystem::getInstance();

	  QString courseCode  = item->data(0,0).toString();
	  
	  QString testName  = item->data(2,0).toString();

	  one->setCurrentTestName(testName.toLocal8Bit().constData());
	  one->setSelectedCourseCode(courseCode.toLocal8Bit().constData());
	  one->setCurrentQuestioNoToBeEdited(0);

	  this->destroy();
	  seeNextQuestion * n = new seeNextQuestion;
	  n->showMaximized();
}