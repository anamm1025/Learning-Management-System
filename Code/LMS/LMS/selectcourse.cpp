#include "selectcourse.h"
#include"LMSsystem.h"
#include"setteststart.h"
#include"adminprofile.h"
#include"teacherprofile.h"
#include"course.h"
selectCourse::selectCourse(QWidget *parent)
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

	//ui.coursePanel->resizeColumnToContents(0);//reheaderView()->resizeSection(0 /*column index*/, 100 /*width*/);
	ui.coursePanel->setColumnWidth(0,50);

	LMSsystem *one;
	one = LMSsystem::getInstance();

	for(int i=0; i<one->getCourseListSize(); i++)
	{
		
		Course c = one->getCourseItem(i);
		QTreeWidgetItem * item = new QTreeWidgetItem;
		int idx=c.getID();
		char id[10];
		itoa(idx,id,10);
		string courseCode = c.getCourseCode();
		string courseName = c.getCourseName();
		

		item->setText(0,QString::fromStdString(id));
		item->setText(1,QString::fromStdString(courseCode));
		item->setText(2,QString::fromStdString(courseName));
		
		ui.coursePanel->addTopLevelItem(item);
	}
}


void selectCourse::cancelButtonClicked()
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

void selectCourse::selectCourseClicked()
{
	QTreeWidgetItem *item = ui.coursePanel->currentItem();
	 

     if(item==NULL)
	 {
		 ui.errorLabel->setText("No course is added Yet..!!");
		 return;
	 }

	 			LMSsystem *one;
			one = LMSsystem::getInstance();

	  QString courseCode  = item->data(1,0).toString();
	  int x = ui.coursePanel->indexOfTopLevelItem(item);
	  if(x >= 0 && x < ui.coursePanel->topLevelItemCount())
     {
		 item = ui.coursePanel->takeTopLevelItem(x);
        if(item)
		{
			

			one->setSelectedCourseCode(courseCode.toLocal8Bit().constData());
		}
     }



		this->destroy();
		setTestStart * s = new setTestStart;
		s->showMaximized();
	
}

selectCourse::~selectCourse()
{

}
