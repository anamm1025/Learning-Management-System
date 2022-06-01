#ifndef SEENEXTQUESTION_H
#define SEENEXTQUESTION_H

#include <QWidget>
#include "ui_seenextquestion.h"

class seeNextQuestion : public QWidget
{
	Q_OBJECT

public:
	seeNextQuestion(QWidget *parent = 0);
	~seeNextQuestion();

private:
	Ui::seeNextQuestion ui;

	public slots:
		void QuitButtonClicked();
		void NextButtonClicked();
		void submitTestClicked();
};

#endif // SEENEXTQUESTION_H
