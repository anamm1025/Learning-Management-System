#include "Admin.h"
#include<iostream>
#include<string>

#include"Person.h"

Admin::Admin()
{
}


Admin::~Admin(void)
{
}

void Admin::setId(int idx)
{
	this->Adminid=idx;
}

int Admin::getId()
{
	return this->Adminid; 
}

