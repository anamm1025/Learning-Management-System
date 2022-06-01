#include"course.h"

	void Course::setID(int id)
	{
		courseID = id;
	}

	void Course::setCourseName(string cn)
	{

		courseName = cn;
	}

	void Course::setCourseCode(string cc)
	{

		courseCode = cc;
	}

	int Course::getID()
	{
		return courseID;
	}

	string Course::getCourseName()
	{
		return courseName;
	}

	string Course::getCourseCode()
	{
		return courseCode;
	}


	int Course::getNoOfTests()
	{
		return this->testList.size();
	}

	bool Course::verifyUniquetestName(string name)
	{
		
		for(std::vector<Test>::iterator it = this->testList.begin(); it != this->testList.end(); ++it) 
	{
		if(it->getName() == name)
			
		{
			return false;
			

		}
	}

		return true;

	}


	bool Course::addTest(Test t)
	{
		testList.push_back(t);
		return true;
	}

		bool Course::dropTest(string name)
	{
		for(std::vector<Test>::iterator it = this->testList.begin(); it!=this->testList.end(); ++it) 
	{
		if(it->getName() == name)
		{ 
			//testList.erase();
			//int index=it-testList.begin();
			this->testList.erase(it);
			return true;
		}
	}

	}


	bool Course::addQuestion(Question q, string testName)
	{
		for(std::vector<Test>::iterator it = this->testList.begin(); it != this->testList.end(); ++it) 
		{
			if(it->getName() == testName)
			{
				return (it->addQuestion(q));
				
			}
		}
	      return false;
	}


	int Course::getNoOfQuestions(string testName)
	{
		for(std::vector<Test>::iterator it = this->testList.begin(); it != this->testList.end(); ++it) 
		{
			if(it->getName() == testName)
			{
				return it->getNoOfQuestions();
			}
		}

		return -1;
	}


	Test Course::getTest(int index)
	{
		return this->testList.at(index);
	}


	void Course::EditQuestion(Question q, string testName,int questionNo)
	{
		for(std::vector<Test>::iterator it = this->testList.begin(); it != this->testList.end(); ++it) 
		{
			if(it->getName() == testName)
			{
				it->editQuestion(q, questionNo);
			}
		}
			
	}

	void  Course::deleteQuestion(string testName, string statement)
	{


		for(std::vector<Test>::iterator it = this->testList.begin(); it != this->testList.end(); ++it) 
		{
			if(it->getName() == testName)
			{
				it->deleteQuestion(statement);
			}
		}

	}


	
	Question  Course::getQuestion(string testName, int indexOfQuestion)
	{
		for(std::vector<Test>::iterator it = this->testList.begin(); it != this->testList.end(); ++it) 
		{
			if(it->getName() == testName)
			{
				return it->getQuestion(indexOfQuestion);
			}
		}
	}
	
	Test  Course::getTest(string name)
	{
		for(std::vector<Test>::iterator it = this->testList.begin(); it != this->testList.end(); ++it) 
		{
			if(it->getName() == name)
			{
				return this->testList.at(it-testList.begin());
			}
		}
	}