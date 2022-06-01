#include "Person.h"

#include<iostream>
#include<string>

using namespace std;


Person::Person(void)
{
}


Person::~Person(void)
{
}

void Person::setName(string fname,string lname)
{
	this->firstName=fname;
	this->lastName=lname;
}
void Person::setDOB(string DOBx)
{
	this->DOB=DOBx;
}

void Person::setGender(genderType genderx)
{
	this->gender=genderx;
}

void Person::setUsername(string usernamex)
{
	this->username=usernamex;
}

void Person::setPassword(string passwordx)
{
	this->password=passwordx;
}

void Person::setEmail(string emailx)
{
	this->email=emailx;
}

void Person::setAddress(string addressx)
{
	this->address=addressx;
}

void Person::setContact(string contactx)
{
	this->contact=contactx;
}

string Person::getFname()
{
	return this->firstName;
}

string Person::getLname()
{
	return this->lastName;
}
	
string Person::getDOB()
{
	return this->DOB;
}
	
genderType Person::getGender()
{
	return this->gender;
}
	
string Person::getUsername()
{
	return this->username;
}
	
string Person::getPassword()
{
	return this->password;
}
	
string Person::getEmail()
{
	return this->email;
}

string Person::getAddress()
{
	return this->address;
}

string Person::getContact()
{
	return this->contact;
}

