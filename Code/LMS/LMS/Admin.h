#pragma once
#include<iostream>
#include<string>

#include"Person.h"

class Admin:public Person
{
private:
	int Adminid;
public:
	Admin(void);
	~Admin(void);
	void setId(int idx);
	int getId();
};

