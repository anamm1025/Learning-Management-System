#pragma once

#include<iostream>
#include<string>

using namespace std;

enum genderType
{
	Female,Male
};

class Person
{
protected:
	string firstName;
	string lastName;
	string DOB;
	genderType gender;
	string username;
	string password;
	string email;
	string address;
	string contact;


public:
	Person(void);
	~Person(void);

	//setters:
	void setName(string fname,string lname);
	void setDOB(string DOBx);
	void setGender(genderType genderx);
	void setUsername(string usernamex);
	void setPassword(string passwordx);
	void setEmail(string emailx);
	void setAddress(string addressx);
	void setContact(string contactx);

	//getters:
	string getFname();
	string getLname();
	string getDOB();
	genderType getGender();
	string getUsername();
	string getPassword();
	string getEmail();
	string getAddress();
	string getContact();
};

