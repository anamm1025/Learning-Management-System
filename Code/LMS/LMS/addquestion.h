#ifndef ADDQUESTION_H
#define ADDQUESTION_H

#include <QWidget>
#include "ui_addquestion.h"

class addQuestion : public QWidget
{
	Q_OBJECT

public:
	addQuestion(QWidget *parent = 0);
	~addQuestion();

private:
	Ui::addQuestion ui;

	public slots:
		void selectClicked();
		void cancelClicked();

};

#endif // ADDQUESTION_H
