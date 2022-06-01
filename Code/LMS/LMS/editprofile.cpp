#include "editprofile.h"
#include<string>
#include<iostream>

#include"LMSsystem.h"

using namespace std;

EditProfile::EditProfile(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	/*LMSsystem *one;
	one = LMSsystem::getInstance();
	string s=one->getSessionUsername();

	transform(s.begin(), s.end(), s.begin(), toupper);
	QString session=QString::fromStdString(s);
	ui.topLabel->setText(session);*/
}

EditProfile::~EditProfile()
{

}

void EditProfile::saveChangesClicked()
{

}

void EditProfile::cancelButtonClicked()
{

}
