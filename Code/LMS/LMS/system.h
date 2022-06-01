#ifndef SYSTEM_H
#define SYSTEM_H

#include <QWidget>
#include "ui_system.h"

#include"Person.h"
#include"Admin.h"
#include"Student.h"
#include"Teacher.h"
#include"DAL.h"
#include"signup.h"

class System : public QWidget
{
	Q_OBJECT

public:
	System(QWidget *parent = 0);
	~System();
	void AddStudent(Student s);
	bool signupStudent(Student s);

private:
	Ui::System ui;
	vector<Admin> adminList;
	vector<Teacher> TeacherList;
	vector<Student> StudentList;
};

#endif // SYSTEM_H
