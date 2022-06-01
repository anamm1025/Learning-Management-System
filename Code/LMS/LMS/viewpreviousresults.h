#ifndef VIEWPREVIOUSRESULTS_H
#define VIEWPREVIOUSRESULTS_H

#include <QWidget>
#include "ui_viewpreviousresults.h"

class viewPreviousResults : public QWidget
{
	Q_OBJECT

public:
	viewPreviousResults(QWidget *parent = 0);
	~viewPreviousResults();

private:
	Ui::viewPreviousResults ui;

	public slots:
		void BackButtonClicked();
};

#endif // VIEWPREVIOUSRESULTS_H
