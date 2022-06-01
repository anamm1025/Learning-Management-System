#pragma once
#include<vector>
#include<iostream>
#include<string>
#include"shortQuestion.h"
using namespace std;


class Exercise
{private:
	int ID;
	string topic;
	vector<ShortQuestion> questionList;
	string course;

public:

	void setID(int id);
	void setTopic(string tn);
	void setCourseName(string cn);
	int getID();
	void setQuestionList(vector<ShortQuestion> q);
	string getCourse();
	string getTopic();
	ShortQuestion getQuestion(int i);
	int getNoOfQ();


};