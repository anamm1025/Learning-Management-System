#ifndef LMS_H
#define LMS_H

#include <QtWidgets/QMainWindow>
#include "ui_LMS.h"

class LMS : public QMainWindow
{
	Q_OBJECT

public:
	LMS(QWidget *parent = 0);
	~LMS();

private:
	Ui::LMSClass ui;


public slots:
	void loginButtonClicked();
	void signupButtonClicked();

};

#endif // LMS_H
