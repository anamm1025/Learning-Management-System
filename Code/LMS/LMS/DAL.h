#pragma once
#include<iostream>
#include<string>
#include<atldbcli.h>
#include<atldbsch.h>
#include"Student.h"
#include"course.h"
#include"test.h"
#include"exercise.h"

#include"LMSsystem.h"


using namespace std;


class DAL//DATA ACCESS LAYER
{
private:
	HRESULT hr;
	char* DAM;
	CDataSource dbDataSource;
	CSession dbSession;
	LPCOLESTR lpcOleConnect;
	int questionid;//last question id in the db

public:
	DAL();
	~DAL();
	void AddStudentToDB(Student s);
	vector<Student> getStudentsfromDatabase();
	vector<Admin> getAdminsfromDatabase();
	vector<Teacher> getTeachersfromDatabase();
	vector<Course> getCoursesFromDatabase();
	vector<Result> getResultFromDB();
	
	vector<Exercise> getExercisesFromDatabase();
	int getLastQuestionId();
	void AddTestInCourse(string cname,string cCode,Test t,vector<Course>& c);
	void getTestFromDatabase(vector<Course>& c);
	void AddTeacherToDB(Teacher s);
	int getQuestionsFromDatabase(vector<Course>& c);
	

	void DeleteTeacherFromDB(string username);
	void DeleteStudentFromDB(string username);

	void AddCourse(Course c);

	void UpdateStudentProfile(Student s);
	void UpdateTeacherProfile(Teacher s);
	void UpdateAdminProfile(Admin s);

	void UpdateStudentPassword(string pass,string username);
	void UpdateTeacherPassword(string pass,string username);
	void UpdateAdminPassword(string pass,string username);

	//void UpdateQuestionInDB(

	void DeleteCourseFromDB(Course c);

	void AddTestInDatabase(string name,string topic,string CourseName,string CourseCode);
	void AddQuestionInDatabase(Question ques, string testName);

	void AddResultToDataBase(Result r);

	void DropTestFromDB(string testName);

	void DeleteQuestionfromDB(int id);

	void updateQuestionInDB(Question ques, string testName,int idd);
};