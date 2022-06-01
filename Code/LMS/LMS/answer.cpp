#include"answer.h"

void Answer::setAnswer(string A, string B, string C, string D, string correct)
	{
		 optionA= A;
	     optionB = B;
		 optionC = C;
		 optionD = D;
		 correctAnswer = correct;

	}

	string Answer::getCorrectAnswer()
	{
		return correctAnswer;
	}

   string  Answer::getOptionA()
   {
	   return this->optionA;
   }
	string  Answer::getOptionB()
	{
       return this->optionB;
	}
    string  Answer::getOptionC()
	{
		return this->optionC;
	}
   string  Answer::getOptionD()
   {
	   return this->optionD;
   }