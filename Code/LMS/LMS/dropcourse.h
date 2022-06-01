#ifndef DROPCOURSE_H
#define DROPCOURSE_H

#include <QWidget>
#include "ui_dropcourse.h"

class dropCourse : public QWidget
{ 
	Q_OBJECT

public:
	dropCourse(QWidget *parent = 0);
	~dropCourse();

private:
	Ui::dropCourse ui;

public slots:
	void CancelButtonClicked();
	void DropButtonClicked();
};

#endif // DROPCOURSE_H
