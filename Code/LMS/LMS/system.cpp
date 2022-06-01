#include "system.h"

#include"Person.h"
#include"Admin.h"
#include"Student.h"
#include"Teacher.h"
#include"DAL.h"

using namespace std;

System::System(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	DAL* dd=new DAL;//opening the DB connection
	this->StudentList=dd->getStudentsfromDatabase();//getting list of students from Data Access Layer
	this->adminList=dd->getAdminsfromDatabase();//getting list of Admins from Data Access Layer
	this->TeacherList=dd->getTeachersfromDatabase();//getting list of Teachers from Data Access Layer

	delete dd;
}

System::~System()
{

}

void System::AddStudent(Student s)
{
	StudentList.push_back(s);
}

bool System::signupStudent(Student s)
{
	return true;
}
