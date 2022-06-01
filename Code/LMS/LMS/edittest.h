#ifndef EDITTEST_H
#define EDITTEST_H

#include <QWidget>
#include "ui_edittest.h"

class editTest : public QWidget
{
	Q_OBJECT

public:
	editTest(QWidget *parent = 0);
	~editTest();

private:
	Ui::editTest ui;

	public slots:
		void selectClicked();
		void cancelClicked();
};

#endif // EDITTEST_H
