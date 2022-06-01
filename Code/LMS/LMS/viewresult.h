#ifndef VIEWRESULT_H
#define VIEWRESULT_H

#include <QWidget>
#include "ui_viewresult.h"

class viewResult : public QWidget
{
	Q_OBJECT

public:
	viewResult(QWidget *parent = 0);
	~viewResult();

private:
	Ui::viewResult ui;

	public slots:
		void CancelButtonClicked();
		void viewDetailedresultClicked();
		void TakeExercisesClicked();
};

#endif // VIEWRESULT_H
