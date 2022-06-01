#ifndef DETAILEDRESULT_H
#define DETAILEDRESULT_H

#include <QWidget>
#include "ui_detailedresult.h"

class detailedResult : public QWidget
{
	Q_OBJECT

public:
	detailedResult(QWidget *parent = 0);
	~detailedResult();

private:
	Ui::detailedResult ui;

	public slots:
		void CancelButtonClicked();
		void TakeExercisesClicked();
};

#endif // DETAILEDRESULT_H
