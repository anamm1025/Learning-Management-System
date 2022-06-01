#ifndef SETTESTSTART_H
#define SETTESTSTART_H

#include <QWidget>
#include "ui_setteststart.h"

class setTestStart : public QWidget
{
	Q_OBJECT

public:
	setTestStart(QWidget *parent = 0);
	~setTestStart();

private:
	Ui::setTestStart ui;
	bool isAdded;

	public slots:
		void cancelClicked();
		void nextClicked();
		void addClicked();
};

#endif // SETTESTSTART_H
