#ifndef ADDCOURSE_H
#define ADDCOURSE_H

#include <QWidget>
#include "ui_addcourse.h"

class addCourse : public QWidget
{
	Q_OBJECT

public:
	addCourse(QWidget *parent = 0);
	~addCourse();

private:
	Ui::addCourse ui;

public slots:

		void addCourseClicked();
		void cancelClicked();
};

#endif // ADDCOURSE_H
