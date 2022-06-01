#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "ui_login.h"

class login : public QWidget
{
	Q_OBJECT

public:
	login(QWidget *parent = 0);
	~login();

private:
	Ui::login ui;

public slots:
	void signupButtonClicked();
	void loginButtonClicked();

};

#endif // LOGIN_H
