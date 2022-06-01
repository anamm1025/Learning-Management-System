#pragma once
#include<iostream>
#include<string>


#include"Person.h"
#include"Result.h"
class Student:public Person
{
private:
	int StudentId;
public:
	Student(void);
	~Student(void);
	void setID(int id);
	int getID();
};

