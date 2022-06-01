#include"shortQuestion.h"

	void ShortQuestion::setValues(int id, string q, string a)
	{
		ID = id;
		this->question = q;
		this->answer = a;
	}
	int ShortQuestion::getID()
	{
		return ID;
	}
	string ShortQuestion::getQues()
	{
		return question;
	}
	string ShortQuestion::getAns()
	{
		return answer;
	}