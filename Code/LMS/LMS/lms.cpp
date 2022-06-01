#include "LMS.h"
#include"login.h"
#include"signup.h"

LMS::LMS(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//setStyleSheet("border-image: url(image.jpg);");    

	QPixmap pic("image.jpg");
	setAutoFillBackground(true);
	QPalette palette;
	//QPixmap scaled=pic.scaled ( 1600, 480, Qt::IgnoreAspectRatio, Qt::FastTransformation );

	QPixmap scaled=pic.scaled ( 2200, 840, Qt::IgnoreAspectRatio, Qt::FastTransformation );

	palette.setBrush(QPalette::Window, QBrush(scaled));

	this->setPalette(palette); 
}

LMS::~LMS()
{

}

void LMS::loginButtonClicked()
{

	this->destroy();
	login* l=new login;
	l->showMaximized();
}

void LMS::signupButtonClicked()
{
	this->destroy();
	signup* s=new signup;
	s->showMaximized();
}
