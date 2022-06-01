#pragma once
#include<iostream>
#include<string>
#include<vector>

#include"Person.h"
#include"Admin.h"
#include"Student.h"
#include"Teacher.h"
#include"DAL.h"
#include"course.h"
#include"question.h"
#include"test.h"
#include"answer.h"
#include"Result.h"
#include"exercise.h"


using namespace std;

class LMSsystem
{
public:
	vector<Admin> adminList;
	vector<Teacher> TeacherList;
	vector<Student> StudentList;
	vector<Course> courseList;
	vector<Result> resultList;
	vector<Question> currentWrongQuestionsList;
	string sessionUsername;//to remember which user has logged in
	string sessionStatus;//to tell if the current user is a student, admin or teacher
	string selectedCourseCode;
	string currentTestName;    //will give the current test being edited
	vector<Exercise> exerciseList;
	int currentQuestioNoToBeEdited;
	int currentResultId;
	int currentCorrectAnswers;
	int currentWrongAnswers;
	int currentExercise;
	int currentExerciseQ;
	int questionId;

	static bool instanceFlag;
    static LMSsystem *single;
	LMSsystem(void);

public:
	
	~LMSsystem(void);
	 static LMSsystem* getInstance();
    void method();

	int getStudentListSize();
	int getTeacherListSize();
	string getSessionStatus();
	string getSessionUsername();
	int getSpecificStudentResultListSize();

	//functions for sign up
	bool verifyUsername(string username);//to verify if username is unique or not
	bool verifyName(string name);//to verify if name is valid or not
	bool verifyPassword(string password);//to verify if password is 6 characters long or not
	bool verifyPasswordMatches(string password,string repassword);//to verify if password matches
	bool verifyContact(string contact);//to verify if contact is valid or not
	bool verifyEmail(string email);//to verify if email is valid or not
	bool AddStudent(Student s,int checkGender1,int checkGender2);

	//functions for login
	bool verifyUsernameAndPasswordExistInStudent(string username,string password);//to verify if username exists or not for LOGIN
	bool verifyCheckBoxForLogin(int ch1,int ch2,int ch3);//to verify that only one checkbox has been selected
	bool isLogin(string username,string password,int ch1,int ch2,int ch3);

	bool verifyUsernameAndPasswordExistInAdmin(string username,string password);//to verify if username exists or not for LOGIN
	bool verifyUsernameAndPasswordExistInTeacher(string username,string password);//to verify if username exists or not for LOGIN
	
	void LogOut();
	bool ChangePassword(string oldpass,string newpass, string newpass1);

	string getSessionFname();
	string getSessionLname();
	string getSessionContact();
	string getSessionEmail();
	string getSessionHome();
	bool EditProfileInfo(string fname,string lname,string contact,string email,string home);
	bool AddTeacher(Teacher s,int checkGender1,int checkGender2);

	Teacher getTeacherItem(int index);
	Student getStudentItem(int index);

	bool DropATeacher(string username);
	bool DropAStudent(string username);



	bool verifyIfCourseExists(string name);
	int getCourseListSize();
	Course getCourseItem(int index);
	bool AddCourse(string name,string code);
	bool DropCourse(string code);
	bool AddTest(int _courseId);
	bool DropTest(string code, string name);



	string getSelectedCourseCode();
	void setSelectedCourseCode(string code);
	string getCurrentTestName();
	void setCurrentTestName(string name);
	bool verifyUniqueTestnName(string name);

	void setTest(Question q, string name, string topic);
	bool addQuestion(Question q);
	int getQuestionNoInCurrentTest();

	int getCurrentQuestioNoToBeEdited();
	void setCurrentQuestioNoToBeEdited(int n);

	void editQuestion(Question q);
	void deleteQuestion(string statement);
	Question getQuestion();
	int getNoOfQuestionInCurrentTest();

	void AddResult();
	void IncreaseCorrectAnswers();
	void IncreaseWrongAnswers();
	int getCurrentCorrectAnswers();
	int getCurrentWrongAnswers();
	void setCurrentQuestionsToZero();

	string showcurrentWrongQuestionsList();
	Result getResultItem(int index);
	vector<Result> getSpecificStudentResultList();
	int getNoOfExercises();
	
    Exercise getExercise(int index);
	void setcurrentExercise(int i);
	void setcurrentExerciseQ(int i);
		int getcurrentExercise();
	int getcurrentExerciseQ();
	int getNoOfQuestionsinCurrentExercise();
};
