#ifndef VIEWSTUDENTS_H
#define VIEWSTUDENTS_H

#include <QWidget>
#include "ui_viewstudents.h"

class viewStudents : public QWidget
{
	Q_OBJECT

public:
	viewStudents(QWidget *parent = 0);
	~viewStudents();

private:
	Ui::viewStudents ui;

	public slots:
		void CancelButton();
		void DropStudentClicked();
};

#endif // VIEWSTUDENTS_H
