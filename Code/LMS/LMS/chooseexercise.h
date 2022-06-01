#ifndef CHOOSEEXERCISE_H
#define CHOOSEEXERCISE_H

#include <QWidget>
#include "ui_chooseexercise.h"

class chooseExercise : public QWidget
{
	Q_OBJECT

public:
	chooseExercise(QWidget *parent = 0);
	~chooseExercise();

private:
	Ui::chooseExercise ui;


	public slots:
		void cancelClicked();
		void selectClicked();
};

#endif // CHOOSEEXERCISE_H
