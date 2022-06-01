#ifndef CHANGEPASSWORD_H
#define CHANGEPASSWORD_H

#include <QWidget>
#include "ui_changepassword.h"

class ChangePassword : public QWidget
{
	Q_OBJECT

public:
	ChangePassword(QWidget *parent = 0);
	~ChangePassword();

private:
	Ui::ChangePassword ui;

	public slots:
		void OKButtonClicked();
		void CancelButtonClicked();
};

#endif // CHANGEPASSWORD_H
