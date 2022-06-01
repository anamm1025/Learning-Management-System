#include "Student.h"
#include<iostream>
#include<string>

#include"Person.h"

Student::Student(void)
{
}


Student::~Student(void)
{
}

void Student::setID(int id)
{
	this->StudentId=id;
}

int Student::getID()
{
	return this->StudentId;
}