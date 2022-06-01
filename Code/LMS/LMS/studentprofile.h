#ifndef STUDENTPROFILE_H
#define STUDENTPROFILE_H

#include <QWidget>
#include "ui_studentprofile.h"

class StudentProfile : public QWidget
{
	Q_OBJECT

public:
	StudentProfile(QWidget *parent = 0);
	~StudentProfile();

private:
	Ui::StudentProfile ui;

	public slots:
		void optionsButtonClicked();
		void TakeQuizClicked();
		void PreviousResultClicked();
		void takeExerciseClicked();
};

#endif // STUDENTPROFILE_H
