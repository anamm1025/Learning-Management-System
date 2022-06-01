#ifndef SIGNUP_H
#define SIGNUP_H

#include <QWidget>
#include "ui_signup.h"

class signup : public QWidget
{
	Q_OBJECT

private:
	Ui::signup ui;

public:
	signup(QWidget *parent = 0);
	~signup();

	public slots:
		void signupButtonClicked();
		void quitButtonClicked();

};

#endif // SIGNUP_H
