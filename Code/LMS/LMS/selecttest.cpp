#include "selecttest.h"
#include"adminprofile.h"
#include"teacherprofile.h"
#include"LMSsystem.h"
#include"course.h"


selectTest::selectTest(QWidget *parent)
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

selectTest::~selectTest()
{

}

void selectTest::dropClicked()
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

	  int x = ui.treeWidget->indexOfTopLevelItem(item);
	  if(x >= 0 && x < ui.treeWidget->topLevelItemCount())
     {
		 item = ui.treeWidget->takeTopLevelItem(x);
        if(item)
		{
			
			delete item;
			if(one->DropTest(courseCode.toLocal8Bit().constData(), testName.toLocal8Bit().constData()))
			{
		        ui.msgLabel->setText("Deleted successfully..!!");
			}
				
		}
}

}
void selectTest::backClicked()
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
