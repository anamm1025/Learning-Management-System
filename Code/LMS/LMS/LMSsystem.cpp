#include "LMSsystem.h"
#include<iostream>
#include<string>

#include"Person.h"
#include"Admin.h"
#include"Student.h"
#include"Teacher.h"
#include"DAL.h"
#include"course.h"
#include"question.h"
#include"answer.h"
#include"test.h"
#include"exercise.h"




LMSsystem::LMSsystem(void)
{
	DAL* dd=new DAL;//opening the DB connection
	this->StudentList=dd->getStudentsfromDatabase();//getting list of students from Data Access Layer
	this->adminList=dd->getAdminsfromDatabase();//getting list of Admins from Data Access Layer
	this->TeacherList=dd->getTeachersfromDatabase();//getting list of Teachers from Data Access Layer
	this->courseList=dd->getCoursesFromDatabase();
	this->resultList=dd->getResultFromDB();
	
	this->exerciseList = dd->getExercisesFromDatabase();

	this->currentCorrectAnswers=0;
	this->currentWrongAnswers=0;

	this->questionId=dd->getLastQuestionId();
	this->questionId++;
	sessionUsername="-1";//means no username has logged in yet
	delete dd;
}


LMSsystem::~LMSsystem(void)
{
	instanceFlag = false;
}

bool LMSsystem::instanceFlag = false;
LMSsystem* LMSsystem::single = NULL;
LMSsystem* LMSsystem::getInstance()
{
	if(! instanceFlag)
	{
		single = new LMSsystem();
		instanceFlag = true;
		return single;
	}
	else
	{
		return single;
	}
}

string LMSsystem::getSessionStatus()
{
	return this->sessionStatus;
}

string LMSsystem::getSessionUsername()
{
	return this->sessionUsername;
}

void LMSsystem::method()
{
	cout << "Method of the singleton class" << endl;
}

bool LMSsystem::verifyUsername(string username)//to verify if username is unique or not
{
	if(this->sessionUsername=="-1")
	{
		for(std::vector<Student>::iterator it = StudentList.begin(); it != StudentList.end(); ++it) 
		{
			if(it->getUsername()==username)
				return false;
		}
		return true;
	}
	if(this->sessionStatus=="admin")
	{
		for(std::vector<Teacher>::iterator it = TeacherList.begin(); it != TeacherList.end(); ++it) 
		{
			if(it->getUsername()==username)
				return false;
		}
		return true;
	}



}

bool LMSsystem::verifyName(string name)//to verify if name is valid or not
{
	for(int i=0;i<name.length();i++)
	{
		if(!isalpha(name[i]))
			return false;
	}
	return true;
}

bool LMSsystem::verifyPassword(string password)//to verify if password is 6 characters long or not
{
	if(password.length()<6)
		return false;
	else
		return true;
}

bool LMSsystem::verifyPasswordMatches(string password,string repassword)//to verify if password matches
{
	if(password!=repassword && password!="")
		return false;
	else
		return true;
}

bool  LMSsystem::verifyContact(string contact)//to verify if contact is valid or not
{
	for(int i=0;i<contact.length();i++)
	{
		if(isalpha(contact[i]))
			return false;
	}
	return true;
}

bool isCharacter(const char Character)
{
	return ( (Character >= 'a' && Character <= 'z') || (Character >= 'A' && Character <= 'Z'));
	//Checks if a Character is a Valid A-Z, a-z Character, based on the ascii value
}
bool isNumber(const char Character)
{
	return ( Character >= '0' && Character <= '9');
	//Checks if a Character is a Valid 0-9 Number, based on the ascii value
}
bool LMSsystem::verifyEmail(string email)
{
	if(email=="") // If cannot read the Email Address...
		return 0;

	if(!isCharacter(email[0])) // If the First character is not A-Z, a-z
		return 0;
	int AtOffset = -1;
	int DotOffset = -1;
	unsigned int Length = email.length(); // Length = StringLength (strlen) of EmailAddress
	for(unsigned int i = 0; i < Length; i++)
	{
		if(email[i] == '@') // If one of the characters is @, store it's position in AtOffset
			AtOffset = (int)i;
		else if(email[i] == '.') // Same, but with the dot
			DotOffset = (int)i;
	}
	if(AtOffset == -1 || DotOffset == -1) // If cannot find a Dot or a @
		return 0;
	if(AtOffset > DotOffset) // If the @ is after the Dot
		return 0;
	return !(DotOffset >= ((int)Length-1)); //Check there is some other letters after the Dot
}

bool LMSsystem::AddStudent(Student s,int checkGender1,int checkGender2)//to add a student
{
	if(verifyUsername(s.getUsername())==1 &&  verifyName(s.getFname())==1  &&  verifyName(s.getLname())==1 && verifyPassword(s.getPassword())==1
		&& verifyContact(s.getContact())==1 && verifyEmail(s.getEmail())==1 && s.getUsername()!="" && s.getFname()!="" && 
		s.getLname()!="" && s.getPassword()!="" && s.getContact()!="" && s.getEmail()!="")
	{
		if(checkGender1==2 && checkGender2==2)//it means that both the genders have been selected
		{
			return false;
		}

		else if(checkGender1==0 && checkGender2==0)//it means that none of the genders have been selected
		{
			return false;
		}
		DAL dd;
		int id=this->StudentList.size();
		if(id==0)
		{}
		else
		{
		id=this->StudentList.at(id-1).getID();
		}
		id++;
		s.setID(id);
		this->StudentList.push_back(s);
		dd.AddStudentToDB(s);
		return true;
	}

}

int LMSsystem::getStudentListSize()
{
	return this->StudentList.size();
}

int LMSsystem::getTeacherListSize()
{
	return this->TeacherList.size();
}

bool LMSsystem::verifyUsernameAndPasswordExistInStudent(string username,string password)//to verify if username exists or not for LOGIN
{
	for(std::vector<Student>::iterator it = StudentList.begin(); it != StudentList.end(); ++it) 
	{
		if(it->getUsername()==username && it->getPassword()==password)
			return true;
	}

	return false;
}

bool LMSsystem::verifyUsernameAndPasswordExistInAdmin(string username,string password)//to verify if username exists or not for LOGIN
{
	for(std::vector<Admin>::iterator it = this->adminList.begin(); it != this->adminList.end(); ++it) 
	{
		if(it->getUsername()==username && it->getPassword()==password)
			return true;
	}

	return false;
}

bool LMSsystem::verifyUsernameAndPasswordExistInTeacher(string username,string password)//to verify if username exists or not for LOGIN
{
	for(std::vector<Teacher>::iterator it = this->TeacherList.begin(); it != this->TeacherList.end(); ++it) 
	{
		if(it->getUsername()==username && it->getPassword()==password)
			return true;
	}

	return false;
}

bool LMSsystem::verifyCheckBoxForLogin(int ch1,int ch2,int ch3)//to verify that only one checkbox has been selected
{
	if((ch1==2 && ch2==0 && ch3==0) || (ch1==0 && ch2==2 && ch3==0) || (ch1==0 && ch2==0 && ch3==2))//means only one checkbox has been selected
	{
		return true;
	}
	else
		return false;
}

bool LMSsystem::isLogin(string username,string password,int ch1,int ch2,int ch3)
{
	if(verifyUsernameAndPasswordExistInStudent(username,password)==1 && verifyCheckBoxForLogin(ch1,ch2,ch3)==1 && ch1==2)
	{
		sessionUsername=username;
		sessionStatus="student";
		return true;
	}

	else if(verifyUsernameAndPasswordExistInAdmin(username,password)==1 && verifyCheckBoxForLogin(ch1,ch2,ch3)==1 && ch2==2)
	{
		sessionUsername=username;
		sessionStatus="admin";
		return true;
	}

	else if(verifyUsernameAndPasswordExistInTeacher(username,password)==1 && verifyCheckBoxForLogin(ch1,ch2,ch3)==1 && ch3==2)
	{
		sessionUsername=username;
		sessionStatus="teacher";
		return true;
	}

	else
		return false;
}


void LMSsystem::LogOut()
{
	this->sessionUsername="-1";//to indicate that no user is logged in

}

bool LMSsystem::ChangePassword(string oldpass,string newpass, string newpass1)
{
	if(this->sessionStatus=="student" && this->sessionUsername!="-1")
	{
		for(std::vector<Student>::iterator it = this->StudentList.begin(); it != this->StudentList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername && it->getPassword()==oldpass) && verifyPasswordMatches(newpass,newpass1)==1 && verifyPassword(newpass)==1)
			{
				DAL dd;
				dd.UpdateStudentPassword(newpass,this->sessionUsername);
				it->setPassword(newpass);
				return true;
			}
		}
		return false;
	}

	if(this->sessionStatus=="admin" && this->sessionUsername!="-1")
	{
		for(std::vector<Admin>::iterator it = this->adminList.begin(); it != this->adminList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername && it->getPassword()==oldpass) && verifyPasswordMatches(newpass,newpass1)==1 && verifyPassword(newpass)==1)
			{
				it->setPassword(newpass);
				DAL dd;
				dd.UpdateAdminPassword(newpass,this->sessionUsername);
				return true;
			}
		}
		return false;
	}

	if(this->sessionStatus=="teacher" && this->sessionUsername!="-1")
	{
		for(std::vector<Teacher>::iterator it = this->TeacherList.begin(); it != this->TeacherList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername && it->getPassword()==oldpass) && verifyPasswordMatches(newpass,newpass1)==1 && verifyPassword(newpass)==1)
			{
				it->setPassword(newpass);
				DAL dd;
				dd.UpdateTeacherPassword(newpass,this->sessionUsername);
				return true;
			}
		}
		return false;
	}

	return false;

}

string LMSsystem::getSessionFname()
{
	if(this->sessionStatus=="student" && this->sessionUsername!="-1")
	{
		for(std::vector<Student>::iterator it = this->StudentList.begin(); it != this->StudentList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername))
				return it->getFname();
		}
	}

	if(this->sessionStatus=="admin" && this->sessionUsername!="-1")
	{
		for(std::vector<Admin>::iterator it = this->adminList.begin(); it != this->adminList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername))
				return it->getFname();
		}
	}

	if(this->sessionStatus=="teacher" && this->sessionUsername!="-1")
	{
		for(std::vector<Teacher>::iterator it = this->TeacherList.begin(); it != this->TeacherList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername))
				return it->getFname();
		}
	}
}

string LMSsystem::getSessionLname()
{
	if(this->sessionStatus=="student" && this->sessionUsername!="-1")
	{
		for(std::vector<Student>::iterator it = this->StudentList.begin(); it != this->StudentList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername))
				return it->getLname();
		}
	}

	if(this->sessionStatus=="admin" && this->sessionUsername!="-1")
	{
		for(std::vector<Admin>::iterator it = this->adminList.begin(); it != this->adminList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername))
				return it->getLname();
		}
	}

	if(this->sessionStatus=="teacher" && this->sessionUsername!="-1")
	{
		for(std::vector<Teacher>::iterator it = this->TeacherList.begin(); it != this->TeacherList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername))
				return it->getLname();
		}
	}

}

string  LMSsystem::getSessionContact()
{
	if(this->sessionStatus=="student" && this->sessionUsername!="-1")
	{
		for(std::vector<Student>::iterator it = this->StudentList.begin(); it != this->StudentList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername))
				return it->getContact();
		}
	}

	if(this->sessionStatus=="admin" && this->sessionUsername!="-1")
	{
		for(std::vector<Admin>::iterator it = this->adminList.begin(); it != this->adminList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername))
				return it->getContact();
		}
	}

	if(this->sessionStatus=="teacher" && this->sessionUsername!="-1")
	{
		for(std::vector<Teacher>::iterator it = this->TeacherList.begin(); it != this->TeacherList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername))
				return it->getContact();
		}
	}
}

string  LMSsystem::getSessionEmail()
{
	if(this->sessionStatus=="student" && this->sessionUsername!="-1")
	{
		for(std::vector<Student>::iterator it = this->StudentList.begin(); it != this->StudentList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername))
				return it->getEmail();
		}
	}

	if(this->sessionStatus=="admin" && this->sessionUsername!="-1")
	{
		for(std::vector<Admin>::iterator it = this->adminList.begin(); it != this->adminList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername))
				return it->getEmail();
		}
	}

	if(this->sessionStatus=="teacher" && this->sessionUsername!="-1")
	{
		for(std::vector<Teacher>::iterator it = this->TeacherList.begin(); it != this->TeacherList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername))
				return it->getEmail();
		}
	}
}

string  LMSsystem::getSessionHome()
{
	if(this->sessionStatus=="student" && this->sessionUsername!="-1")
	{
		for(std::vector<Student>::iterator it = this->StudentList.begin(); it != this->StudentList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername))
				return it->getAddress();
		}
	}

	if(this->sessionStatus=="admin" && this->sessionUsername!="-1")
	{
		for(std::vector<Admin>::iterator it = this->adminList.begin(); it != this->adminList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername))
				return it->getAddress();
		}
	}

	if(this->sessionStatus=="teacher" && this->sessionUsername!="-1")
	{
		for(std::vector<Teacher>::iterator it = this->TeacherList.begin(); it != this->TeacherList.end(); ++it) 
		{
			if((it->getUsername()==this->sessionUsername))
				return it->getAddress();
		}
	}
}

bool  LMSsystem::EditProfileInfo(string fname,string lname,string contact,string email,string home)
{
	if(this->verifyName(fname)==1 && this->verifyName(lname)==1 && this->verifyContact(contact)==1 && this->verifyEmail(email)==1 
		&& fname!="" && lname!="" && contact!="" && email!="" && home!="")
	{
		if(this->sessionStatus=="student" && this->sessionUsername!="-1")
		{
			for(std::vector<Student>::iterator it = this->StudentList.begin(); it != this->StudentList.end(); ++it) 
			{
				if(it->getUsername()==this->sessionUsername)
				{
					it->setName(fname,lname);
					it->setContact(contact);
					it->setEmail(email);
					it->setAddress(home);
					DAL dd;
					dd.UpdateStudentProfile(*it);
					return true;
				}
			}
			return false;
		}

		if(this->sessionStatus=="admin" && this->sessionUsername!="-1")
		{
			for(std::vector<Admin>::iterator it = this->adminList.begin(); it != this->adminList.end(); ++it) 
			{
				if(it->getUsername()==this->sessionUsername)
				{
					it->setName(fname,lname);
					it->setContact(contact);
					it->setEmail(email);
					it->setAddress(home);
					DAL dd;
					dd.UpdateAdminProfile(*it);
					return true;
				}
			}
			return false;
		}

		if(this->sessionStatus=="teacher" && this->sessionUsername!="-1")
		{
			for(std::vector<Teacher>::iterator it = this->TeacherList.begin(); it != this->TeacherList.end(); ++it) 
			{
				if(it->getUsername()==this->sessionUsername)
				{
					it->setName(fname,lname);
					it->setContact(contact);
					it->setEmail(email);
					it->setAddress(home);
					DAL dd;
					dd.UpdateTeacherProfile(*it);
					return true;
				}
			}
			return false;
		}
	}
}

bool LMSsystem::AddTeacher(Teacher s,int checkGender1,int checkGender2)
{
	if(verifyUsername(s.getUsername())==1 &&  verifyName(s.getFname())==1  &&  verifyName(s.getLname())==1 && verifyPassword(s.getPassword())==1
		&& verifyContact(s.getContact())==1 && verifyEmail(s.getEmail())==1 && s.getUsername()!="" && s.getFname()!="" && 
		s.getLname()!="" && s.getPassword()!="" && s.getContact()!="" && s.getEmail()!="")
	{
		if(checkGender1==2 && checkGender2==2)//it means that both the genders have been selected
		{
			return false;
		}

		else if(checkGender1==0 && checkGender2==0)//it means that none of the genders have been selected
		{
			return false;
		}
		DAL dd;
		int id=this->TeacherList.size();
		id=this->TeacherList.at(id-1).getId();
		id++;
		s.setId(id);
		this->TeacherList.push_back(s);//adding teacher into the vector
		dd.AddTeacherToDB(s);
		return true;
	}
}

Teacher LMSsystem::getTeacherItem(int index)
{
	return this->TeacherList.at(index);
}

bool LMSsystem::DropATeacher(string username)
{
	for(std::vector<Teacher>::iterator it = this->TeacherList.begin(); it != this->TeacherList.end(); ++it) 
	{
		if(it->getUsername()==username)//delete the specific teacher
		{
			int index=it-TeacherList.begin();
			this->TeacherList.erase(it);
			DAL dd;
			dd.DeleteTeacherFromDB(username);
			return true;
		}
	}
}

Student LMSsystem::getStudentItem(int index)
{
	return this->StudentList.at(index);
}

bool LMSsystem::DropAStudent(string username)
{
	for(std::vector<Student>::iterator it = this->StudentList.begin(); it != this->StudentList.end(); ++it) 
	{
		if(it->getUsername()==username)//delete the specific student from the vector
		{
			int index=it-StudentList.begin();
			this->StudentList.erase(it);
			DAL dd;
			dd.DeleteStudentFromDB(username);
			return true;
		}
	}
}

void LMSsystem::AddResult()
{
	Result r;
	if(this->resultList.size()==0)
	{
		r.setResultId(1);
	}
	else
	{
		//r.setResultId(this->resultList.end()->getResultId()+1);
		r.setResultId(this->resultList.size()+1);	
	}
	r.setStudentForResult(this->sessionUsername);
	r.setTestForResult(this->currentTestName);
	r.setNoOfCorrectAnswers(this->currentCorrectAnswers);
	r.setNoOfWrongAnswers(this->currentWrongAnswers);
	r.setCourseCode(this->selectedCourseCode);

	this->resultList.push_back(r);
	this->currentResultId=r.getResultId();

}

void LMSsystem::IncreaseCorrectAnswers()
{
	this->currentCorrectAnswers++;
}

void LMSsystem::IncreaseWrongAnswers()
{
	this->currentWrongAnswers++;
	this->currentWrongQuestionsList.push_back(this->getQuestion());
}

void LMSsystem::setCurrentQuestionsToZero()
{
	this->currentCorrectAnswers=0;
	this->currentWrongAnswers=0;
	this->currentWrongQuestionsList.clear();
}

int LMSsystem::getCurrentCorrectAnswers()
{
	return this->currentCorrectAnswers;
}
	
int LMSsystem::getCurrentWrongAnswers()
{
	return this->currentWrongAnswers;
}

string LMSsystem::showcurrentWrongQuestionsList()
{
	string wrongQues;
	for(std::vector<Question>::iterator it = this->currentWrongQuestionsList.begin(); it != this->currentWrongQuestionsList.end(); ++it) 
	{
		wrongQues.append("Question Statement:");
		wrongQues.append(it->getStatement());
		wrongQues.append("\n          Correct Answer: ");
		wrongQues.append(it->getAnswer().getCorrectAnswer()) ;
		wrongQues.append("\n \n");

	}
	return wrongQues;
}

bool LMSsystem::AddCourse(string name, string code)
{
	//int id = this->courseList.size()+1;

	int id=this->courseList.size();
	id=this->courseList.at(id-1).getID();
	id++;
	Course c;
	c.setCourseName(name);
	c.setID(id);
	c.setCourseCode(code);
	courseList.push_back(c);
	DAL dd;
	dd.AddCourse(c);
	
	return true;
}

bool LMSsystem::DropCourse(string code)
{
	for(std::vector<Course>::iterator it = this->courseList.begin(); it != this->courseList.end(); ++it) 
	{
		if(it->getCourseCode() == code)
		{
			
			DAL dd;
			dd.DeleteCourseFromDB(*it);
			this->courseList.erase(it);
			return true;
		}
	}

	return false;
}

bool LMSsystem::AddTest(int _courseId)
{
	return true;
}

bool LMSsystem::DropTest(string code, string name)
{
	for(std::vector<Course>::iterator it = this->courseList.begin(); it != this->courseList.end(); ++it) 
	{
		if(it->getCourseCode() == code)
		{
			
			DAL dd;
			dd.DropTestFromDB(name);
			return  it->dropTest(name);
		}
	}

	return false;
}




bool LMSsystem::verifyIfCourseExists(string code)
{
	for(std::vector<Course>::iterator it = this->courseList.begin(); it != this->courseList.end(); ++it) 
	{
		if(it->getCourseCode() == code)
			return true;
	}

	return false;
}


int LMSsystem::getCourseListSize()
{
	return this->courseList.size();
}
Course LMSsystem::getCourseItem(int index)
{
	return this->courseList.at(index);
}



string  LMSsystem::getSelectedCourseCode()
{
	return selectedCourseCode;
}

void LMSsystem::setSelectedCourseCode(string code)
{
	selectedCourseCode = code;
}

void LMSsystem::setTest(Question q, string name, string topic)
{
	for(std::vector<Course>::iterator it = this->courseList.begin(); it != this->courseList.end(); ++it) 
	{
		if(it->getCourseCode() == this->selectedCourseCode)
		{
			Test t;
			q.setID(this->questionId);
			this->questionId++;
			t.setName(name);
			t.setTopic(topic);
			t.addQuestion(q);
			it->addTest(t);

			DAL dd;
			dd.AddTestInDatabase(name,topic,it->getCourseName(),it->getCourseCode());
			dd.AddQuestionInDatabase(q,name);

		}
	}
}

bool LMSsystem::addQuestion(Question q)
{
	for(std::vector<Course>::iterator it = this->courseList.begin(); it != this->courseList.end(); ++it) 
	{
		if(it->getCourseCode() == this->selectedCourseCode)
		{
			if(it->addQuestion(q, this->currentTestName)==true)
			{
				q.setID(this->questionId);
				this->questionId++;
				DAL dd;
				dd.AddQuestionInDatabase(q,this->currentTestName);
				return true;
			}


		}
	}

	return false;
}


string  LMSsystem::getCurrentTestName()
{
	return currentTestName;
}
void  LMSsystem::setCurrentTestName(string name)
{
	currentTestName = name;
}

bool LMSsystem::verifyUniqueTestnName(string name)
{

	for(std::vector<Course>::iterator it = this->courseList.begin(); it != this->courseList.end(); ++it) 
	{
		if(it->getCourseCode() == this->selectedCourseCode)

		{
			if(it->verifyUniquetestName(name))
				return true;
			else 
				return false;			

		}
	}
}


int LMSsystem::getQuestionNoInCurrentTest()
{
	for(std::vector<Course>::iterator it = this->courseList.begin(); it != this->courseList.end(); ++it) 
	{
		if(it->getCourseCode() == this->selectedCourseCode)

		{
			return it->getNoOfQuestions(this->currentTestName);
		}

	}

	return -1;
}



int LMSsystem::getCurrentQuestioNoToBeEdited()
{
	return currentQuestioNoToBeEdited;

}
void LMSsystem::setCurrentQuestioNoToBeEdited(int n)
{
	currentQuestioNoToBeEdited = n;
}

void LMSsystem::editQuestion(Question q)
{
	int id;
	for(std::vector<Course>::iterator it = this->courseList.begin(); it != this->courseList.end(); ++it)
	{

		if(it->getCourseCode() == this->selectedCourseCode)
		{
			int index=this->currentQuestioNoToBeEdited;
			id=it->getTest(this->currentTestName).getQuestion(index).getID();
			it->EditQuestion(q, this->currentTestName, this->currentQuestioNoToBeEdited);
			DAL dd;
			dd.updateQuestionInDB(q,this->currentTestName,id);

		}

	}


}


void LMSsystem::deleteQuestion(string statement)
{

	for(std::vector<Course>::iterator it = this->courseList.begin(); it != this->courseList.end(); ++it)
	{
		int id;

		if(it->getCourseCode() == this->selectedCourseCode)
		{
			int index=this->currentQuestioNoToBeEdited;
			id=it->getTest(this->currentTestName).getQuestion(index).getID();
			it->deleteQuestion(this->currentTestName, statement);
			DAL dd;
			dd.DeleteQuestionfromDB(id);
		}

	}
}


Question LMSsystem::getQuestion()
{
	for(std::vector<Course>::iterator it = this->courseList.begin(); it != this->courseList.end(); ++it)
	{

		if(it->getCourseCode() == this->selectedCourseCode)
		{
			return (it->getQuestion(this->currentTestName, this->currentQuestioNoToBeEdited));
		}
	}

}

int LMSsystem::getNoOfQuestionInCurrentTest()
{
	for(std::vector<Course>::iterator it = this->courseList.begin(); it != this->courseList.end(); ++it)
	{

		if(it->getCourseCode() == this->selectedCourseCode)
		{
			return (it->getNoOfQuestions(this->currentTestName));
		}

	}

}

int LMSsystem::getSpecificStudentResultListSize()
{
	int size=0;
	for(std::vector<Result>::iterator it = this->resultList.begin(); it != this->resultList.end(); ++it)
	{
		if(it->getStudentForResult() == this->sessionUsername)
		{
			size++;
		}

	}
	return size;
}

Result LMSsystem::getResultItem(int index)
{
	return this->resultList.at(index);
}

vector<Result> LMSsystem::getSpecificStudentResultList()
{
	vector<Result> r;
	for(std::vector<Result>::iterator it = this->resultList.begin(); it != this->resultList.end(); ++it)
	{
		if(it->getStudentForResult() == this->sessionUsername)
		{
			r.push_back(*it);
		}

	}
	return r;
}


int LMSsystem::getNoOfExercises()
{
	return this->exerciseList.size();
}


Exercise LMSsystem::getExercise(int index)
{
	return this->exerciseList.at(index);
}


void LMSsystem::setcurrentExercise(int i)
{
	currentExercise = i;
}
void LMSsystem::setcurrentExerciseQ(int i)
{
	currentExerciseQ = i;
}
int LMSsystem::getcurrentExercise()
{
	return currentExercise;
}
int LMSsystem::getcurrentExerciseQ()
{
	return currentExerciseQ;
}


	int LMSsystem::getNoOfQuestionsinCurrentExercise()
	{

		return this->exerciseList.at(this->currentExercise).getNoOfQ();
	}
	
	