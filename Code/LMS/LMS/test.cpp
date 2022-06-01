#include"test.h"

int Test::getNoOfQuestions()
{
	return questionList.size();
}

bool Test::addQuestion(Question q)
{
	for(std::vector<Question>::iterator it = this->questionList.begin(); it != this->questionList.end(); ++it) 
	{
		if(it->getStatement() == q.getStatement())
			return false;
	}

	questionList.push_back(q);
	return true;
}

bool Test::deleteQuestion(string statement)
{
	for(std::vector<Question>::iterator it = this->questionList.begin(); it != this->questionList.end(); ++it) 
	{
		if(it->getStatement() == statement)
		{ 
		    this->questionList.erase(it);
			return true;
		}
	}

}

	string  Test::getName()
	{
		return this->name;
	}
	void  Test::setName(string nam)
	{
		this->name = nam;
	}
	string  Test::getTopic()
	{
		return this->topic;
	}
	void  Test::setTopic(string top)
	{
		this->topic = top;
	}

   void Test::editQuestion(Question q, int number)
   {
	   if(number<this->questionList.size())
	   {
		   this->questionList.at(number) = q;
	   }

   }


   	Question Test::getQuestion(int index)
	{
		if(index < questionList.size())
		{
		   return this->questionList.at(index);
		}
	}

		