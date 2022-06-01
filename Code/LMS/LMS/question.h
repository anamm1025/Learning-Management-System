#pragma once
#include"answer.h"
#include<iostream>
#include<string>
using namespace std;

class Question
{
private:
	int ID;
	string statement;
	Answer answer;

public:
	void setID(int id);
	void setStatement(string s);
	int getID();
	string getStatement();
	void setAnswer(string A, string B, string C, string D, string correct);
	Answer getAnswer();
	void setAnswer(Answer a);
};