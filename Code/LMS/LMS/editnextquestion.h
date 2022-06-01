#ifndef EDITNEXTQUESTION_H
#define EDITNEXTQUESTION_H

#include <QWidget>
#include "ui_editnextquestion.h"

class editNextQuestion : public QWidget
{
	Q_OBJECT

public:
	editNextQuestion(QWidget *parent = 0);
	~editNextQuestion();

private:
	Ui::editNextQuestion ui;


	public slots:
		void deleteClicked();
		void editClicked();
		void nextClicked();
		void backClicked();
		void cancelClicked();
};

#endif // EDITNEXTQUESTION_H
