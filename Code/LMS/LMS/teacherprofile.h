#ifndef TEACHERPROFILE_H
#define TEACHERPROFILE_H

#include <QWidget>
#include "ui_teacherprofile.h"

class TeacherProfile : public QWidget
{
	Q_OBJECT

public:
	TeacherProfile(QWidget *parent = 0);
	~TeacherProfile();

private:
	Ui::TeacherProfile ui;

	public slots:
		void optionsComboBox();
		void editTestClicked();
		void deleteTestClicked();
		void setTestClicked();
		void addQuestionClicked();
};

#endif // TEACHERPROFILE_H
