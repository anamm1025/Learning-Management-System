#ifndef EXERCISEQ_H
#define EXERCISEQ_H

#include <QWidget>
#include "ui_exerciseq.h"

class exerciseQ : public QWidget
{
	Q_OBJECT

public:
	exerciseQ(QWidget *parent = 0);
	~exerciseQ();

private:
	Ui::exerciseQ ui;


	public slots:

		void backClicked();
		void nextClicked();
		void cancelClicked();
};

#endif // EXERCISEQ_H
