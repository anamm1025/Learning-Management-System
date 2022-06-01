#ifndef TAKEQUIZ_H
#define TAKEQUIZ_H

#include <QWidget>
#include "ui_takequiz.h"

class takeQuiz : public QWidget
{
	Q_OBJECT

public:
	takeQuiz(QWidget *parent = 0);
	~takeQuiz();

private:
	Ui::takeQuiz ui;

	public slots:
		void CancelButtonClicked();
		void SelectButtonClicked();
};

#endif // TAKEQUIZ_H
