#ifndef ADDTEACHER_H
#define ADDTEACHER_H

#include <QWidget>
#include "ui_addteacher.h"

class AddTeacher : public QWidget
{
	Q_OBJECT

public:
	AddTeacher(QWidget *parent = 0);
	~AddTeacher();

private:
	Ui::AddTeacher ui;

	public slots:
		void quitButtonClicked();
		void AddTeacherClicked();
};

#endif // ADDTEACHER_H
