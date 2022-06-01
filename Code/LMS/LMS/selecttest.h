#ifndef SELECTTEST_H
#define SELECTTEST_H

#include <QWidget>
#include "ui_selecttest.h"

class selectTest : public QWidget
{
	Q_OBJECT

public:
	selectTest(QWidget *parent = 0);
	~selectTest();
	

private:
	Ui::selectTest ui;

	public slots:
		void dropClicked();
		void backClicked();
};

#endif // SELECTTEST_H
