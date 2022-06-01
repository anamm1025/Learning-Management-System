#ifndef EDITPROFILEN_H
#define EDITPROFILEN_H

#include <QWidget>
#include "ui_editprofilen.h"

class editProfilen : public QWidget
{
	Q_OBJECT

public:
	editProfilen(QWidget *parent = 0);
	~editProfilen();

private:
	Ui::editProfilen ui;

	public slots:
		void saveChangesClicked();
		void CancelButtonClicked();
};

#endif // EDITPROFILEN_H
