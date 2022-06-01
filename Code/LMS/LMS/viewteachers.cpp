#include "viewteachers.h"

#include"LMSsystem.h"
#include"Teacher.h"
#include"Person.h"
#include"adminprofile.h"

ViewTeachers::ViewTeachers(QWidget *parent)
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

	ui.treeWidget->setColumnWidth(0,150);

	for(int i=0; i<one->getTeacherListSize(); i++)
	{

		Teacher t=one->getTeacherItem(i);
		QTreeWidgetItem * item = new QTreeWidgetItem();
		int idx=t.getId();
		char id[4];
		itoa(idx,id,10);
		string gender;

		genderType g=t.getGender();
		if(g==Female)
		{
			gender="Female";
		}
		if(g==Male)
		{
			gender="Male";
		}

		item->setText(0,QString::fromStdString(id));
		item->setText(1,QString::fromStdString(t.getUsername()));
		item->setText(2,QString::fromStdString(t.getFname()));
		item->setText(3,QString::fromStdString(t.getLname()));
		item->setText(4,QString::fromStdString(t.getDOB()));
		item->setText(5,QString::fromStdString(gender));
		item->setText(6,QString::fromStdString(t.getEmail()));
		item->setText(7,QString::fromStdString(t.getContact()));
		ui.treeWidget->addTopLevelItem(item);
	}
}

ViewTeachers::~ViewTeachers()
{

}


void ViewTeachers::dropTeacherClicked()
{
	 QTreeWidgetItem *item = ui.treeWidget->currentItem();
	 

     if(item==NULL)
	 {
		 ui.errorLabel2->setText("No Teacher Exist Yet..!!");
		 return;
	 }
	 QString username = item->data(1,0).toString();
     int x = ui.treeWidget->indexOfTopLevelItem(item);
     if(x >= 0 && x < ui.treeWidget->topLevelItemCount())
     {
         item = ui.treeWidget->takeTopLevelItem(x);
        if(item)
		{
			delete item;//deleting item from treeWidget
			LMSsystem *one;
			one = LMSsystem::getInstance();
			if(one->DropATeacher(username.toLocal8Bit().constData())==1)
			{
				ui.errorLabel->setText("Teacher deleted successfully..!!");
			}
		}
     }
}

void ViewTeachers::CancelbuttonClicked()
{
	this->destroy();
	AdminProfile *p=new AdminProfile;
	p->showMaximized();

}