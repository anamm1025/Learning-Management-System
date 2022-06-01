#ifndef VIEWTEACHERS_H
#define VIEWTEACHERS_H

#include <QWidget>
#include "ui_viewteachers.h"

class ViewTeachers : public QWidget
{
	Q_OBJECT

public:
	ViewTeachers(QWidget *parent = 0);
	~ViewTeachers();

private:
	Ui::ViewTeachers ui;

	public slots:
		void dropTeacherClicked();
		void CancelbuttonClicked();
};

#endif // VIEWTEACHERS_H
