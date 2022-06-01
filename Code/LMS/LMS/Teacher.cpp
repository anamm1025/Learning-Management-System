#include "Teacher.h"
#include<iostream>
#include<string>

#include"Person.h"

using namespace std;

Teacher::Teacher(void)
{
}


Teacher::~Teacher(void)
{
}

void Teacher::setSubject(string subjectx)
{
	this->subject=subjectx;
}

void Teacher::setId(int idx)
{
	this->TeacherId=idx;
}

int Teacher::getId()
{
	return this->TeacherId;
}

string Teacher::getSubject()
{
	return this->subject;
}