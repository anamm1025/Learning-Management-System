#pragma once
#include<vector>
#include<iostream>
#include<string>
using namespace std;


class ShortQuestion
{
private:
	int ID;
	string question;
	string answer;
public:
	void setValues(int id, string q, string a);
	int getID();
	string getQues();
	string getAns();

};