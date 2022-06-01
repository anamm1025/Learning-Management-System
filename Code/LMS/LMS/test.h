#pragma once
#include"question.h"
#include<vector>
#include<iostream>
#include<string>
using namespace std;


class Test
{
private:

	string name;
	string topic;
	vector<Question> questionList;
public:
	int getNoOfQuestions();
	bool addQuestion(Question q);
	bool deleteQuestion(string statement);
	string getName();
	void setName(string name);
	string getTopic();
	void setTopic(string topic);
	void editQuestion(Question q, int number);
	Question getQuestion(int index);
	int getNoOfQuestion();

};