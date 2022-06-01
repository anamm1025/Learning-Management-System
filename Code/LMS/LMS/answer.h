#pragma once
#include<iostream>
#include<string>
using namespace std;

class Answer
{
private:
	string optionA;
	string optionB;
	string optionC;
	string optionD;
	string correctAnswer;

public:
	void setAnswer(string A, string B, string C, string D, string correct);
	string getCorrectAnswer();
	string getOptionA();
	string getOptionB();
    string getOptionC();
   string getOptionD();
   

	
};