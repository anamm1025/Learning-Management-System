#ifndef SELECTCOURSE_H
#define SELECTCOURSE_H

#include <QWidget>
#include "ui_selectcourse.h"

class selectCourse : public QWidget
{
	Q_OBJECT

public:
	selectCourse(QWidget *parent = 0);
	~selectCourse();

private:
	Ui::selectCourse ui;


	public slots:
		void cancelButtonClicked();
		void selectCourseClicked();
};

#endif // SELECTCOURSE_H
