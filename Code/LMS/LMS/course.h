#pragma once
#include"test.h"
#include<vector>
#include<iostream>
#include<string>
using namespace std;

class Course
{
private:
	int courseID;
	string courseName;
	string courseCode;
	vector<Test> testList;

public:

	void setID(int id);
	void setCourseName(string cn);
	void setCourseCode(string cc);

	int getID();
	string getCourseName();
	string getCourseCode();


	bool addTest(Test t);
	bool dropTest(string name);
	bool verifyUniquetestName(string name);

	int getNoOfTests();

	bool addQuestion(Question q, string testName);
	int getNoOfQuestions(string testName);

	Test getTest(int index);
	Test getTest(string name);

	void EditQuestion(Question q, string testName, int questionNo);
	void deleteQuestion(string testName, string statement);

	Question getQuestion(string testName, int indexOfQuestion);


	
};