#pragma once
#include"test.h"
#include"question.h"
#include"Student.h"
#include"Person.h"

class Result
{
private:
	int ResultId;
	int noOfCorrectAnswers;
	int noOfWrongAnswers;
	//vector<Question> wrongQuestionList;
	string testName;
	string studentUsername;
	string courseCode;

public:
	Result(void);
	~Result(void);
	void setResultId(int id);
	int getResultId();
	void setNoOfCorrectAnswers(int n);
	int getNoOfCorrectAnswers();
	void setNoOfWrongAnswers(int n);
	int getNoOfWrongAnswers();
	void setStudentForResult(string s);
	void setTestForResult(string t);
	void setCourseCode(string n);
	string getCourseCode();

	string getStudentForResult();
	string getTestForResult();
};

