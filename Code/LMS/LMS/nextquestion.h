#ifndef NEXTQUESTION_H
#define NEXTQUESTION_H

#include <QWidget>
#include "ui_nextquestion.h"

class nextQuestion : public QWidget
{
	Q_OBJECT

public:
	nextQuestion(QWidget *parent = 0);
	~nextQuestion();

private:
	Ui::nextQuestion ui;
	bool isAdded;

public slots:
		void cancelClicked();
		void nextClicked();
		void addClicked();
};

#endif // NEXTQUESTION_H
