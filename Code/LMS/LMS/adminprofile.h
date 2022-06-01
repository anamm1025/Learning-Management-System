#ifndef ADMINPROFILE_H
#define ADMINPROFILE_H

#include <QWidget>
#include "ui_adminprofile.h"

class AdminProfile : public QWidget
{
	Q_OBJECT

public:
	AdminProfile(QWidget *parent = 0);
	~AdminProfile();

private:
	Ui::AdminProfile ui;

	public slots:
		void optionsChanged();
		void AddTeacherButtonClicked();
		void viewTeacherClicked();
		void viewStudentsClicked();
		void addCourseClicked();
		void dropCourseClicked();
		void setTestClicked();
		void deleteTestClicked();
		void addQuestionClicked();
		void editTestClicked();
};

#endif // ADMINPROFILE_H
