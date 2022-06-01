#include"question.h"

	void Question::setID(int id)
	{
		ID=id;
	}
	void Question::setStatement(string s)
	{
		statement = s;
	}
	int Question::getID()
	{
		return ID;
	}
	string Question::getStatement()
	{
		return statement;
	}

	void Question::setAnswer(string A, string B, string C, string D, string correct)
	{
		answer.setAnswer( A,  B,  C,  D,  correct);
	}
	Answer Question::getAnswer()
	{
		return this->answer;
	}

	void Question::setAnswer(Answer a)
	{
		this->answer =a;
	}