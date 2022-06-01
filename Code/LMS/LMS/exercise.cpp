#include"exercise.h"


void Exercise::setID(int id)
{
	ID = id;

}

void Exercise::setCourseName(string cn)
{
	this->course = cn;
}


void Exercise::setTopic(string tn)
{
	this->topic = tn;
}

int  Exercise::getID()
{
	return ID;
}


void Exercise::setQuestionList(vector<ShortQuestion> q)
{
	this->questionList = q;
}



string Exercise::getCourse()
{
	return this->course;
}



string Exercise::getTopic()
{
	return this->topic;
}



	ShortQuestion Exercise::getQuestion(int i)
	{

		return this->questionList.at(i);
	}

	int Exercise::getNoOfQ()
	{
		return this->questionList.size();
	}