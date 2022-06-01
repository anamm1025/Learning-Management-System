#pragma once
#include<iostream>
#include<string>

#include"Person.h"

class Teacher:public Person
{
private:
	int TeacherId;
	string subject;
public:
	Teacher(void);
	~Teacher(void);
	void setSubject(string subjectx);
	void setId(int idx);
	int getId();
	string getSubject();


};

