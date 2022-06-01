#include "Result.h"


Result::Result(void)
{
}


Result::~Result(void)
{
}

void Result::setResultId(int id)
{
	this->ResultId=id;
}

int Result::getResultId()
{
	return this->ResultId;
}
	
void Result::setNoOfCorrectAnswers(int n)
{
	this->noOfCorrectAnswers=n;
}
	
int Result::getNoOfCorrectAnswers()
{
	return this->noOfCorrectAnswers;
}

void Result::setNoOfWrongAnswers(int n)
{
	this->noOfWrongAnswers=n;
}
	
int Result::getNoOfWrongAnswers()
{
	return this->noOfWrongAnswers;
}

void Result::setStudentForResult(string s)
{
	this->studentUsername=s;
}

void Result::setTestForResult(string t)
{
	this->testName=t;
}


string Result::getStudentForResult()
{
	return this->studentUsername;
}
	
string Result::getTestForResult()
{
	return this->testName;
}

void Result::setCourseCode(string n)
{
	this->courseCode=n;
}

string Result::getCourseCode()
{
	return this->courseCode;
}