
#include<iostream>
#include"DAL.h"
#include<atldbcli.h>
#include<atldbsch.h>
#include<cstring>
#include<string>

#include"Person.h"
#include"question.h"
#include"LMSsystem.h"

using namespace std;

void wtoc(CHAR* Dest, const WCHAR* Source)//this function is assigning WCHAR* to CHAR*
{
	int i = 0;

	while(Source[i] != '\0')
	{
		Dest[i] = (CHAR)Source[i];
		++i;
	}
	Dest[i] = (CHAR)Source[i];
}


DAL::DAL()//in constructor database connection is established
{
	DAM = "OLEDB";
	this->questionid=0;
	lpcOleConnect = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=LMS.accdb";

	USES_CONVERSION;

	HRESULT hr1 = CoInitialize(NULL);
	hr = dbDataSource.OpenFromInitializationString(lpcOleConnect);

	if (FAILED(hr))
	{
		cout << DAM << ": Unable to connect to data source " << OLE2T((LPOLESTR)lpcOleConnect) << endl;
	}
	else
	{
		hr = dbSession.Open(dbDataSource);
		if (FAILED(hr))
		{
			cout << DAM << ": Couldn't create session on data source " << OLE2T((LPOLESTR)lpcOleConnect) << endl;
		}
		else
		{
			CComVariant var;
			hr = dbDataSource.GetProperty(DBPROPSET_DATASOURCEINFO, DBPROP_DATASOURCENAME, &var);
			if (FAILED(hr) || (var.vt == VT_EMPTY))
			{
				cout << DAM << ": No Data Source Name Specified." << endl;
			}
			else
			{
				cout << DAM << ": Successfully connected to database. Data source name:\n  "
					<< COLE2T(var.bstrVal) << endl;


			}
		}
	}
}


DAL::~DAL()//in destructor database connection is closed
{
	dbDataSource.Close();
	dbSession.Close();
	cout << DAM << ": Cleanup. Done." << endl;
}

vector<Student> DAL::getStudentsfromDatabase()
{
	vector<Student> l1;
	LPOLESTR query = L"SELECT* FROM Student;";
	USES_CONVERSION;
	cout << DAM << ": SQL query:\n  " << OLE2T(query) << endl;
	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, query);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr)&& 0 < colCount)
	{
		cout << DAM << ": Retrieve schema info for the given result set: " << endl;
		DBORDINAL cColumns;
		DBCOLUMNINFO* rgInfo = NULL;
		OLECHAR* pStringsBuffer = NULL;
		cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);

		cout << DAM << ": Fetch the actual data: " << endl;
		int rowCount = 0;
		CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
		while (pRS->MoveNext() == S_OK)
		{
			for (int col = 1; col <= (int)colCount; col++)
			{
				Student studnt;
				WCHAR* szValue = cmd.GetString(col);
				char id[4];
				wtoc(id,szValue );
				int idx;
				idx=atoi(id);
				studnt.setID(idx);
				col++;

				char fname[50];
				char lname[50];
				szValue = cmd.GetString(col);
				wtoc(fname,szValue );
				col++;
				szValue = cmd.GetString(col);
				wtoc(lname,szValue );
				studnt.setName(fname,lname);

				col++;

				char DOB[10];
				szValue = cmd.GetString(col);
				wtoc(DOB,szValue );
				studnt.setDOB(DOB);

				col++;

				char gender[10];
				szValue = cmd.GetString(col);
				wtoc(gender,szValue );
				genderType g;
				if(!strcmp(gender,"Female" ) || !strcmp(gender,"female" ))
				{
					g=Female;
				}
				if(!strcmp(gender,"male" ) || !strcmp(gender,"Male" ))
				{
					g=Male;
				}

				studnt.setGender(g);

				col++;

				char username[30];
				szValue = cmd.GetString(col);
				wtoc(username,szValue );
				studnt.setUsername(username);

				col++;

				char password[20];
				szValue = cmd.GetString(col);
				wtoc(password,szValue );
				studnt.setPassword(password);

				col++;

				char email[40];
				szValue = cmd.GetString(col);
				wtoc(email,szValue );
				studnt.setEmail(email);

				col++;

				char address[50];
				szValue = cmd.GetString(col);
				wtoc(address,szValue );
				studnt.setAddress(address);

				col++;

				char contact[50];
				szValue = cmd.GetString(col);
				wtoc(contact,szValue );
				studnt.setContact(contact);

				col++;

				l1.push_back(studnt);
			}
			rowCount++;
		}
	}

	return l1;

}

vector<Admin> DAL::getAdminsfromDatabase()
{
	vector<Admin> l1;
	LPOLESTR query = L"SELECT* FROM Admin;";
	USES_CONVERSION;
	cout << DAM << ": SQL query:\n  " << OLE2T(query) << endl;
	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, query);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr)&& 0 < colCount)
	{
		cout << DAM << ": Retrieve schema info for the given result set: " << endl;
		DBORDINAL cColumns;
		DBCOLUMNINFO* rgInfo = NULL;
		OLECHAR* pStringsBuffer = NULL;
		cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);

		cout << DAM << ": Fetch the actual data: " << endl;
		int rowCount = 0;
		CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
		while (pRS->MoveNext() == S_OK)
		{
			for (int col = 1; col <= (int)colCount; col++)
			{
				Admin admin;
				WCHAR* szValue = cmd.GetString(col);
				char id[4];
				wtoc(id,szValue );
				int idx;
				idx=atoi(id);
				admin.setId(idx);
				col++;

				char fname[50];
				char lname[50];
				szValue = cmd.GetString(col);
				wtoc(fname,szValue );
				col++;
				szValue = cmd.GetString(col);
				wtoc(lname,szValue );
				admin.setName(fname,lname);

				col++;

				char DOB[10];
				szValue = cmd.GetString(col);
				wtoc(DOB,szValue );
				admin.setDOB(DOB);

				col++;

				char gender[10];
				szValue = cmd.GetString(col);
				wtoc(gender,szValue );
				genderType g;
				if(!strcmp(gender,"Female" ) || !strcmp(gender,"female" ))
				{
					g=Female;
				}
				if(!strcmp(gender,"male" ) || !strcmp(gender,"Male" ))
				{
					g=Male;
				}

				admin.setGender(g);

				col++;

				char username[30];
				szValue = cmd.GetString(col);
				wtoc(username,szValue );
				admin.setUsername(username);

				col++;

				char password[20];
				szValue = cmd.GetString(col);
				wtoc(password,szValue );
				admin.setPassword(password);

				col++;

				char email[40];
				szValue = cmd.GetString(col);
				wtoc(email,szValue );
				admin.setEmail(email);

				col++;

				char address[50];
				szValue = cmd.GetString(col);
				wtoc(address,szValue );
				admin.setAddress(address);

				col++;

				char contact[50];
				szValue = cmd.GetString(col);
				wtoc(contact,szValue );
				admin.setContact(contact);

				col++;

				l1.push_back(admin);
			}
			rowCount++;
		}
	}

	return l1;
}

vector<Teacher> DAL::getTeachersfromDatabase()
{
	vector<Teacher> l1;
	LPOLESTR query = L"SELECT* FROM Teacher;";
	USES_CONVERSION;
	cout << DAM << ": SQL query:\n  " << OLE2T(query) << endl;
	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, query);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr)&& 0 < colCount)
	{
		cout << DAM << ": Retrieve schema info for the given result set: " << endl;
		DBORDINAL cColumns;
		DBCOLUMNINFO* rgInfo = NULL;
		OLECHAR* pStringsBuffer = NULL;
		cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);

		cout << DAM << ": Fetch the actual data: " << endl;
		int rowCount = 0;
		CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
		while (pRS->MoveNext() == S_OK)
		{
			for (int col = 1; col <= (int)colCount; col++)
			{
				Teacher teacher;
				WCHAR* szValue = cmd.GetString(col);
				char id[4];
				wtoc(id,szValue );
				int idx;
				idx=atoi(id);
				teacher.setId(idx);
				col++;

				char subject[30];
				szValue = cmd.GetString(col);
				wtoc(subject,szValue );
				teacher.setSubject(subject);

				col++;

				char fname[50];
				char lname[50];
				szValue = cmd.GetString(col);
				wtoc(fname,szValue );
				col++;
				szValue = cmd.GetString(col);
				wtoc(lname,szValue );
				teacher.setName(fname,lname);

				col++;

				char DOB[10];
				szValue = cmd.GetString(col);
				wtoc(DOB,szValue );
				teacher.setDOB(DOB);

				col++;

				char gender[10];
				szValue = cmd.GetString(col);
				wtoc(gender,szValue );
				genderType g;
				if(!strcmp(gender,"Female" ) || !strcmp(gender,"female" ))
				{
					g=Female;
				}
				if(!strcmp(gender,"male" ) || !strcmp(gender,"Male" ))
				{
					g=Male;
				}

				teacher.setGender(g);

				col++;

				char username[30];
				szValue = cmd.GetString(col);
				wtoc(username,szValue );
				teacher.setUsername(username);

				col++;

				char password[20];
				szValue = cmd.GetString(col);
				wtoc(password,szValue );
				teacher.setPassword(password);

				col++;

				char email[40];
				szValue = cmd.GetString(col);
				wtoc(email,szValue );
				teacher.setEmail(email);

				col++;

				char address[50];
				szValue = cmd.GetString(col);
				wtoc(address,szValue );
				teacher.setAddress(address);

				col++;

				char contact[50];
				szValue = cmd.GetString(col);
				wtoc(contact,szValue );
				teacher.setContact(contact);

				col++;

				l1.push_back(teacher);
			}
			rowCount++;
		}
	}

	return l1;
}

vector<Course> DAL::getCoursesFromDatabase()
{
	vector<Course> l1;
	LPOLESTR query = L"SELECT* FROM Course;";
	USES_CONVERSION;
	cout << DAM << ": SQL query:\n  " << OLE2T(query) << endl;
	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, query);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr)&& 0 < colCount)
	{
		cout << DAM << ": Retrieve schema info for the given result set: " << endl;
		DBORDINAL cColumns;
		DBCOLUMNINFO* rgInfo = NULL;
		OLECHAR* pStringsBuffer = NULL;
		cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);

		cout << DAM << ": Fetch the actual data: " << endl;
		int rowCount = 0;
		CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
		while (pRS->MoveNext() == S_OK)
		{
			for (int col = 1; col <= (int)colCount; col++)
			{
				Course cours;
				WCHAR* szValue = cmd.GetString(col);
				char id[4];
				wtoc(id,szValue );
				int idx;
				idx=atoi(id);
				cours.setID(idx);

				col++;

				char courseName[50];
				szValue = cmd.GetString(col);
				wtoc(courseName,szValue );
				cours.setCourseName(courseName);

				col++;

				char courseCode[50];
				szValue = cmd.GetString(col);
				wtoc(courseCode,szValue );
				cours.setCourseCode(courseCode);

				col++;

				l1.push_back(cours);
			}
			rowCount++;
		}
	}

	getTestFromDatabase(l1);
	getQuestionsFromDatabase(l1);
	return l1;
}

vector<Result> DAL::getResultFromDB()
{
	vector<Result> l1;
	LPOLESTR query = L"SELECT* FROM Result;";
	USES_CONVERSION;
	cout << DAM << ": SQL query:\n  " << OLE2T(query) << endl;
	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, query);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr)&& 0 < colCount)
	{
		cout << DAM << ": Retrieve schema info for the given result set: " << endl;
		DBORDINAL cColumns;
		DBCOLUMNINFO* rgInfo = NULL;
		OLECHAR* pStringsBuffer = NULL;
		cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);

		cout << DAM << ": Fetch the actual data: " << endl;
		int rowCount = 0;
		CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
		while (pRS->MoveNext() == S_OK)
		{
			for (int col = 1; col <= (int)colCount; col++)
			{
				Result result;
				WCHAR* szValue = cmd.GetString(col);
				char id[4];
				wtoc(id,szValue );
				int idx;
				idx=atoi(id);
				result.setResultId(idx);

				col++;

				char testName[50];
				szValue = cmd.GetString(col);
				wtoc(testName,szValue );
				result.setTestForResult(testName);

				col++;

				char username[50];
				szValue = cmd.GetString(col);
				wtoc(username,szValue );
				result.setStudentForResult(username);

				col++;

				char courseCode[50];
				szValue = cmd.GetString(col);
				wtoc(courseCode,szValue );
				result.setCourseCode(courseCode);

				col++;

				char correct[5];
				szValue = cmd.GetString(col);
				wtoc(correct,szValue );
				int correctx=atoi(correct);

				result.setNoOfCorrectAnswers(correctx);

				col++;

				char wrong[5];
				szValue = cmd.GetString(col);
				wtoc(wrong,szValue );
				int wrongx=atoi(wrong);

				result.setNoOfWrongAnswers(wrongx);

				col++;

				l1.push_back(result);
			}
			rowCount++;
		}
	}

	return l1;
}

void DAL::AddTestInCourse(string cname,string cCode,Test t,vector <Course>& c)
{
	for(std::vector<Course>::iterator it =c.begin(); it !=c.end(); ++it) 
	{
		if(it->getCourseCode() == cCode)
		{
			it->addTest(t);
			break;
		}
	}
}

void DAL::getTestFromDatabase(vector <Course>& c)
{
	//getting tests from database
	LPOLESTR query = L"SELECT* FROM Test;";
	USES_CONVERSION;
	cout << DAM << ": SQL query:\n  " << OLE2T(query) << endl;
	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, query);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr)&& 0 < colCount)
	{
		cout << DAM << ": Retrieve schema info for the given result set: " << endl;
		DBORDINAL cColumns;
		DBCOLUMNINFO* rgInfo = NULL;
		OLECHAR* pStringsBuffer = NULL;
		cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);

		cout << DAM << ": Fetch the actual data: " << endl;
		int rowCount = 0;
		CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
		while (pRS->MoveNext() == S_OK)
		{
			for (int col = 1; col <= (int)colCount; col++)
			{
				Test t;
				WCHAR* szValue = cmd.GetString(col);
				col++;

				char courseName[50];
				szValue = cmd.GetString(col);
				wtoc(courseName,szValue );

				col++;

				char courseCode[50];
				szValue = cmd.GetString(col);
				wtoc(courseCode,szValue );

				col++;

				char testName[50];
				szValue = cmd.GetString(col);
				wtoc(testName,szValue );
				t.setName(testName);
				col++;

				char testTopic[50];
				szValue = cmd.GetString(col);
				wtoc(testTopic,szValue );
				t.setTopic(testTopic);

				col++;
				//add test in the appropriate course

				AddTestInCourse(courseName,courseCode,t,c);

			}
			rowCount++;
		}
	}
}

int DAL::getLastQuestionId()
{
	return this->questionid;
}

int DAL::getQuestionsFromDatabase(vector<Course>& c)
{
	//getting questions from database
	LPOLESTR query = L"SELECT* FROM Question;";
	USES_CONVERSION;
	cout << DAM << ": SQL query:\n  " << OLE2T(query) << endl;
	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, query);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr)&& 0 < colCount)
	{
		cout << DAM << ": Retrieve schema info for the given result set: " << endl;
		DBORDINAL cColumns;
		DBCOLUMNINFO* rgInfo = NULL;
		OLECHAR* pStringsBuffer = NULL;
		cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);

		cout << DAM << ": Fetch the actual data: " << endl;
		int rowCount = 0;
		CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
		while (pRS->MoveNext() == S_OK)
		{
			for (int col = 1; col <= (int)colCount; col++)
			{
				Question t;
				Answer ans;
				WCHAR* szValue = cmd.GetString(col);

				char id[4];
				wtoc(id,szValue);
				int idx;
				idx=atoi(id);

				t.setID(idx);
				this->questionid=idx;
				col++;

				char testName[50];
				szValue = cmd.GetString(col);
				wtoc(testName,szValue );

				col++;

				char statement[500];
				szValue = cmd.GetString(col);
				wtoc(statement,szValue );
				t.setStatement(statement);

				col++;

				char optionA[200];
				szValue = cmd.GetString(col);
				wtoc(optionA,szValue );
				col++;

				char optionB[200];
				szValue = cmd.GetString(col);
				wtoc(optionB,szValue );

				col++;

				char optionC[200];
				szValue = cmd.GetString(col);
				wtoc(optionC,szValue );

				col++;

				char optionD[200];
				szValue = cmd.GetString(col);
				wtoc(optionD,szValue );

				col++;

				char answer[200];
				szValue = cmd.GetString(col);
				wtoc(answer,szValue );

				ans.setAnswer(optionA,optionB,optionC,optionD,answer);
				t.setAnswer(ans);
				col++;

				//add test in the appropriate course

				//AddQuestionInTest(testName,t);
				for(std::vector<Course>::iterator it =c.begin(); it !=c.end(); ++it) 
				{

					it->addQuestion(t,testName);
				}
				//t.setID(it->getNoOfQuestions()+1);

				//int num=it->getTest(testName).getNoOfQuestion()+1;

			}
			rowCount++;
		}
	}
	return questionid;
}

void DAL::AddStudentToDB(Student s)
{
	char fname[50];
	strcpy(fname, s.getFname().c_str());
	char lname[50];
	strcpy(lname, s.getLname().c_str());

	char username[50];
	strcpy(username, s.getUsername().c_str());

	char password[50];
	strcpy(password, s.getPassword().c_str());

	char contact[50];
	strcpy(contact, s.getContact().c_str());

	char email[50];
	strcpy(email, s.getEmail().c_str());

	char home[100];
	strcpy(home, s.getAddress().c_str());

	char DOB[10];
	strcpy(DOB, s.getDOB().c_str());

	char gender[10];
	genderType g=s.getGender();
	if(g==Female)
	{
		strcpy(gender, "Female");
	}
	if(g==Male)
	{
		strcpy(gender, "Male");
	}


	LMSsystem *one;
	one = LMSsystem::getInstance();
	int id=s.getID();

	char idx[5];
	itoa (id,idx,10);

	LPOLESTR query;
	char *q=new char[400];

	strcpy(q,"INSERT INTO Student VALUES('");


	strcat(q,idx);
	strcat(q,"','");
	strcat(q,fname);
	strcat(q,"','");
	strcat(q,lname);
	strcat(q,"','");
	strcat(q,DOB);
	strcat(q,"','");
	strcat(q,gender);
	strcat(q,"','");
	strcat(q,username);
	strcat(q,"','");
	strcat(q,password);
	strcat(q,"','");
	strcat(q,email);
	strcat(q,"','");
	strcat(q,home);
	strcat(q,"','");
	strcat(q,contact);
	strcat(q,"');");

	USES_CONVERSION;
	//query = SysAllocString(A2OLE(q.c_str()));
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))//&& 0 < colCount)
	{

		cout << DAM << "\n\nStudent added Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR, id is not unique" << endl;
	}
}

void DAL::AddTeacherToDB(Teacher s)
{
	char fname[50];
	strcpy(fname, s.getFname().c_str());
	char lname[50];
	strcpy(lname, s.getLname().c_str());

	char subject[50];
	strcpy(subject, s.getSubject().c_str());

	char username[50];
	strcpy(username, s.getUsername().c_str());

	char password[50];
	strcpy(password, s.getPassword().c_str());

	char contact[50];
	strcpy(contact, s.getContact().c_str());

	char email[50];
	strcpy(email, s.getEmail().c_str());

	char home[100];
	strcpy(home, s.getAddress().c_str());

	char DOB[10];
	strcpy(DOB, s.getDOB().c_str());

	char gender[10];
	genderType g=s.getGender();
	if(g==Female)
	{
		strcpy(gender, "Female");
	}
	if(g==Male)
	{
		strcpy(gender, "Male");
	}


	LMSsystem *one;
	one = LMSsystem::getInstance();
	int id=s.getId();

	char idx[5];
	itoa (id,idx,10);

	LPOLESTR query;
	char *q=new char[400];

	strcpy(q,"INSERT INTO Teacher VALUES('");


	strcat(q,idx);
	strcat(q,"','");
	strcat(q,subject);
	strcat(q,"','");
	strcat(q,fname);
	strcat(q,"','");
	strcat(q,lname);
	strcat(q,"','");
	strcat(q,DOB);
	strcat(q,"','");
	strcat(q,gender);
	strcat(q,"','");
	strcat(q,username);
	strcat(q,"','");
	strcat(q,password);
	strcat(q,"','");
	strcat(q,email);
	strcat(q,"','");
	strcat(q,home);
	strcat(q,"','");
	strcat(q,contact);
	strcat(q,"');");

	USES_CONVERSION;
	//query = SysAllocString(A2OLE(q.c_str()));
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))//&& 0 < colCount)
	{

		cout << DAM << "\n\nTeacher added Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR, id is not unique" << endl;
	}
}

void DAL::DeleteTeacherFromDB(string username)
{

	LPOLESTR query;
	char *q=new char[400];

	char name[50];
	strcpy(name, username.c_str());

	strcpy(q,"DELETE FROM Teacher where username='");
	strcat(q,name);
	strcat(q,"';");

	USES_CONVERSION;
	//query = SysAllocString(A2OLE(q.c_str()));
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))//&& 0 < colCount)
	{

		cout << DAM << "\n\nTeacher deleted Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR" << endl;
	}
}

void DAL::DeleteStudentFromDB(string username)
{
	LPOLESTR query;
	char *q=new char[400];

	char name[50];
	strcpy(name, username.c_str());

	strcpy(q,"DELETE FROM Student where username='");
	strcat(q,name);
	strcat(q,"';");

	USES_CONVERSION;
	//query = SysAllocString(A2OLE(q.c_str()));
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))
	{

		cout << DAM << "\n\nStudent deleted Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR" << endl;
	}
}

void DAL::AddCourse(Course c)
{

	LPOLESTR query;
	char *q=new char[400];

	int id=c.getID();

	char idx[5];
	itoa (id,idx,10);

	char name[50];
	strcpy(name, c.getCourseName().c_str());

	char courseCode[50];
	strcpy(courseCode, c.getCourseCode().c_str());

	strcpy(q,"INSERT INTO COURSE (id,CourseName,CourseCode) VALUES ('");
	strcat(q,idx);
	strcat(q,"','");
	strcat(q,name);
	strcat(q,"','");
	strcat(q,courseCode);
	strcat(q,"');");

	USES_CONVERSION;
	//query = SysAllocString(A2OLE(q.c_str()));
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))
	{

		cout << DAM << "\n\nCourse Added Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR" << endl;
	}
}

void DAL::UpdateStudentProfile(Student s)
{
	char fname[50];
	strcpy(fname, s.getFname().c_str());
	char lname[50];
	strcpy(lname, s.getLname().c_str());

	char username[50];
	strcpy(username, s.getUsername().c_str());

	char contact[50];
	strcpy(contact, s.getContact().c_str());

	char email[50];
	strcpy(email, s.getEmail().c_str());

	char home[100];
	strcpy(home, s.getAddress().c_str());


	LMSsystem *one;
	one = LMSsystem::getInstance();
	int id=s.getID();

	char idx[5];
	itoa (id,idx,10);

	LPOLESTR query;
	char *q=new char[400];

	strcpy(q,"UPDATE Student SET firstName='");

	strcat(q,fname);
	strcat(q,"',");
	strcat(q,"LastName='");
	strcat(q,lname);
	strcat(q,"',");
	strcat(q,"contact='");
	strcat(q,contact);
	strcat(q,"',");
	strcat(q,"email='");
	strcat(q,email);
	strcat(q,"',");
	strcat(q,"address='");
	strcat(q,home);
	strcat(q,"' ");
	strcat(q,"where username='");
	strcat(q,username);	
	strcat(q,"';");

	USES_CONVERSION;
	//query = SysAllocString(A2OLE(q.c_str()));
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))//&& 0 < colCount)
	{

		cout << DAM << "\n\nStudent updated Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR" << endl;
	}
}

void DAL::UpdateTeacherProfile(Teacher s)
{
	char fname[50];
	strcpy(fname, s.getFname().c_str());
	char lname[50];
	strcpy(lname, s.getLname().c_str());

	char username[50];
	strcpy(username, s.getUsername().c_str());

	char contact[50];
	strcpy(contact, s.getContact().c_str());

	char email[50];
	strcpy(email, s.getEmail().c_str());

	char home[100];
	strcpy(home, s.getAddress().c_str());


	LMSsystem *one;
	one = LMSsystem::getInstance();
	int id=s.getId();

	char idx[5];
	itoa (id,idx,10);

	LPOLESTR query;
	char *q=new char[400];

	strcpy(q,"UPDATE Teacher SET firstName='");

	strcat(q,fname);
	strcat(q,"',");
	strcat(q,"LastName='");
	strcat(q,lname);
	strcat(q,"',");
	strcat(q,"contact='");
	strcat(q,contact);
	strcat(q,"',");
	strcat(q,"email='");
	strcat(q,email);
	strcat(q,"',");
	strcat(q,"address='");
	strcat(q,home);
	strcat(q,"' ");
	strcat(q,"where username='");
	strcat(q,username);	
	strcat(q,"';");

	USES_CONVERSION;
	//query = SysAllocString(A2OLE(q.c_str()));
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))//&& 0 < colCount)
	{

		cout << DAM << "\n\nTeacher Updated Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR" << endl;
	}
}

void DAL::UpdateAdminProfile(Admin s)
{
	char fname[50];
	strcpy(fname, s.getFname().c_str());
	char lname[50];
	strcpy(lname, s.getLname().c_str());

	char username[50];
	strcpy(username, s.getUsername().c_str());

	char contact[50];
	strcpy(contact, s.getContact().c_str());

	char email[50];
	strcpy(email, s.getEmail().c_str());

	char home[100];
	strcpy(home, s.getAddress().c_str());


	LMSsystem *one;
	one = LMSsystem::getInstance();
	int id=s.getId();

	char idx[5];
	itoa (id,idx,10);

	LPOLESTR query;
	char *q=new char[400];

	strcpy(q,"UPDATE Admin SET firstName='");

	strcat(q,fname);
	strcat(q,"',");
	strcat(q,"LastName='");
	strcat(q,lname);
	strcat(q,"',");
	strcat(q,"contact='");
	strcat(q,contact);
	strcat(q,"',");
	strcat(q,"email='");
	strcat(q,email);
	strcat(q,"',");
	strcat(q,"address='");
	strcat(q,home);
	strcat(q,"' ");
	strcat(q,"where username='");
	strcat(q,username);	
	strcat(q,"';");

	USES_CONVERSION;
	//query = SysAllocString(A2OLE(q.c_str()));
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))//&& 0 < colCount)
	{

		cout << DAM << "\n\nAdmin Updated Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR" << endl;
	}
}

void DAL::UpdateStudentPassword(string pass,string username)
{

	char userr[50];
	strcpy(userr, username.c_str());

	char password[50];
	strcpy(password, pass.c_str());

	LPOLESTR query;
	char *q=new char[200];

	strcpy(q,"update Student s set s.password = '");

	strcat(q,password);
	strcat(q,"' ");
	strcat(q,"where s.username = '");
	strcat(q,userr);	
	strcat(q,"'");

	USES_CONVERSION;

	//LPOLESTR olestr = SysAllocString(A2OLE(q));
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	//DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))
	{

		cout << DAM << "\n\nStudent updated Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR" << endl;
	}
}

void DAL::UpdateTeacherPassword(string pass,string username)
{
	char password[50];
	strcpy(password, pass.c_str());

	char user[50];
	strcpy(user,username.c_str());

	LPOLESTR query;
	char *q=new char[400];

	strcpy(q,"update Teacher s set s.password = '");

	strcat(q,password);
	strcat(q,"' ");
	strcat(q,"where s.username='");
	strcat(q,user);	
	strcat(q,"';");

	USES_CONVERSION;
	//query = SysAllocString(A2OLE(q.c_str()));
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))//&& 0 < colCount)
	{

		cout << DAM << "\n\nTeacher password Updated Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR" << endl;
	}
}

void DAL::UpdateAdminPassword(string pass,string username)
{
	char password[50];
	strcpy(password, pass.c_str());

	char user[50];
	strcpy(user,username.c_str());

	LPOLESTR query;
	char *q=new char[400];

	strcpy(q,"update Admin s set s.password = '");

	strcat(q,password);
	strcat(q,"' ");
	strcat(q,"where s.username='");
	strcat(q,user);	
	strcat(q,"';");

	USES_CONVERSION;
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))
	{

		cout << DAM << "\n\nAdmin password Updated Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR" << endl;
	}
}

void DAL::DeleteCourseFromDB(Course c)
{
	LPOLESTR query;
	char *q=new char[400];

	char Cname[50];
	strcpy(Cname, c.getCourseName().c_str());

	strcpy(q,"DELETE FROM Course where CourseName='");
	strcat(q,Cname);
	strcat(q,"';");

	USES_CONVERSION;
	//query = SysAllocString(A2OLE(q.c_str()));
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))
	{

		cout << DAM << "\n\n Course deleted Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR" << endl;
	}
}

void DAL::DropTestFromDB(string testName)
{
	LPOLESTR query;
	char *q=new char[400];

	char tname[50];
	strcpy(tname, testName.c_str());

	strcpy(q,"DELETE FROM Test where TestName='");
	strcat(q,tname);
	strcat(q,"';");

	USES_CONVERSION;
	//query = SysAllocString(A2OLE(q.c_str()));
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))
	{

		cout << DAM << "\n\n Course deleted Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR" << endl;
	}
}

void DAL::AddTestInDatabase(string name,string topic,string CourseName,string CourseCode)
{
	LPOLESTR query;
	char *q=new char[400];
	char tname[50];
	strcpy(tname,name.c_str());

	char ttopic[50];
	strcpy(ttopic, topic.c_str());

	char cname[50];
	strcpy(cname, CourseName.c_str());

	char ccode[50];
	strcpy(ccode, CourseCode.c_str());

	strcpy(q,"INSERT INTO TEST (CourseName,CourseCode,TestName,TestTopic) VALUES ('");
	strcat(q,cname);
	strcat(q,"','");
	strcat(q,ccode);
	strcat(q,"','");
	strcat(q,tname);
	strcat(q,"','");
	strcat(q,ttopic);
	strcat(q,"');");

	USES_CONVERSION;
	//query = SysAllocString(A2OLE(q.c_str()));
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))
	{

		cout << DAM << "\n\nTest Added Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR" << endl;
	}

}

void DAL::AddQuestionInDatabase(Question ques, string testName)
{
	LPOLESTR query;
	char *q=new char[1000];
	char tname[50];
	strcpy(tname,testName.c_str());

	char statement[300];
	strcpy(statement, ques.getStatement().c_str());

	char optionA[100];
	strcpy(optionA, ques.getAnswer().getOptionA().c_str());

	char optionB[100];
	strcpy(optionB, ques.getAnswer().getOptionB().c_str());

	char optionC[100];
	strcpy(optionC, ques.getAnswer().getOptionC().c_str());

	char optionD[100];
	strcpy(optionD, ques.getAnswer().getOptionD().c_str());

	char answer[100];
	strcpy(answer, ques.getAnswer().getCorrectAnswer().c_str());

	int id=ques.getID();

	char idx[5];
	itoa (id,idx,10);

	strcpy(q,"INSERT INTO Question (id,TestName,statement,optionA,optionB,optionC,optionD,answer) VALUES (");
	strcat(q,idx);
	strcat(q,",'");
	strcat(q,tname);
	strcat(q,"','");
	strcat(q,statement);
	strcat(q,"','");
	strcat(q,optionA);
	strcat(q,"','");
	strcat(q,optionB);
	strcat(q,"','");
	strcat(q,optionC);
	strcat(q,"','");
	strcat(q,optionD);
	strcat(q,"','");
	strcat(q,answer);
	strcat(q,"');");

	USES_CONVERSION;
	//query = SysAllocString(A2OLE(q.c_str()));
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))
	{

		cout << DAM << "\n\nQuestion Added Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR" << endl;
	}
}

void DAL::AddResultToDataBase(Result r)
{
	LPOLESTR query;
	char *q=new char[1000];

	char tname[50];
	strcpy(tname,r.getTestForResult().c_str());

	char username[50];
	strcpy(username, r.getStudentForResult().c_str());

	char CourseCode[50];
	strcpy(CourseCode,r.getCourseCode().c_str());

	int correct=r.getNoOfCorrectAnswers();
	int wrong=r.getNoOfWrongAnswers();

	char correctx[7];
	itoa (correct,correctx,10);

	char wrongx[7];
	itoa (wrong,wrongx,10);

	strcpy(q,"INSERT INTO Result (testName,username,courseCode,NoOfCorrectAnswers,NoOfWrongAnswers) VALUES ('");
	strcat(q,tname);
	strcat(q,"','");
	strcat(q,username);
	strcat(q,"','");
	strcat(q,CourseCode);
	strcat(q,"',");
	strcat(q,correctx);
	strcat(q,",");
	strcat(q,wrongx);
	strcat(q,");");

	USES_CONVERSION;
	//query = SysAllocString(A2OLE(q.c_str()));
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))
	{

		cout << DAM << "\n\nResult Added Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR" << endl;
	} 
}


void DAL::updateQuestionInDB(Question ques, string testName,int idd)
{
	LPOLESTR query;
	char *q=new char[1000];
	char tname[50];
	strcpy(tname,testName.c_str());

	char statement[300];
	strcpy(statement, ques.getStatement().c_str());

	char optionA[100];
	strcpy(optionA, ques.getAnswer().getOptionA().c_str());

	char optionB[100];
	strcpy(optionB, ques.getAnswer().getOptionB().c_str());

	char optionC[100];
	strcpy(optionC, ques.getAnswer().getOptionC().c_str());

	char optionD[100];
	strcpy(optionD, ques.getAnswer().getOptionD().c_str());

	char answer[100];
	strcpy(answer, ques.getAnswer().getCorrectAnswer().c_str());

	int id=idd;

	char idx[5];
	itoa (id,idx,10);

	strcpy(q,"Update Question q set q.statement='");//,optionA,optionB,optionC,optionD,answer) VALUES (");
	strcat(q,statement);
	strcat(q,"',q.optionA='");
	strcat(q,optionA);
	strcat(q,"',q.optionB='");
	strcat(q,optionB);
	strcat(q,"',q.optionC='");
	strcat(q,optionC);
	strcat(q,"',q.optionD='");
	strcat(q,optionD);
	strcat(q,"',q.answer='");
	strcat(q,answer);
	strcat(q,"' where q.id=");
	strcat(q,idx);
	strcat(q,";");

	USES_CONVERSION;
	//query = SysAllocString(A2OLE(q.c_str()));
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))
	{

		cout << DAM << "\n\nQuestion Added Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR" << endl;
	}
}







///////////////////

vector<Exercise> DAL::getExercisesFromDatabase()
{
	vector<Exercise> l1;
	{LPOLESTR query = L"SELECT * FROM Exercise";
	USES_CONVERSION;
	cout << DAM << ": SQL query:\n  " << OLE2T(query) << endl;
	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, query);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr)&& 0 < colCount)
	{
		cout << DAM << ": Retrieve schema info for the given result set: " << endl;
		DBORDINAL cColumns;
		DBCOLUMNINFO* rgInfo = NULL;
		OLECHAR* pStringsBuffer = NULL;
		cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);

		cout << DAM << ": Fetch the actual data: " << endl;
		int rowCount = 0;
		CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
		while (pRS->MoveNext() == S_OK)
		{
			for (int col = 1; col <= (int)colCount; col++)
			{

				Exercise e;

				WCHAR* szValue = cmd.GetString(col);
				char id[4];
				wtoc(id,szValue );
				int idx;
				idx=atoi(id);
				e.setID(idx);

				col++;

				char courseName[50];
				szValue = cmd.GetString(col);
				wtoc(courseName,szValue );
				e.setCourseName(courseName);

				col++;

				char topic[50];
				szValue = cmd.GetString(col);
				wtoc(topic,szValue );
				e.setTopic(topic);

				col++;
				//////////////////////////////////////////////

				////////////////////////////



				l1.push_back(e);

			}
			rowCount++;
		}
	}

	}
	for(int i=0; i<l1.size(); i++)
	{
		int id= l1.at(i).getID();
		char a[5];
		itoa(id, a, 10);

		vector<ShortQuestion> l2;
		char q[200] = "select ID, question, answer from ShortQuestion where exerciseID = ";
		strcat(q,a);

		USES_CONVERSION;
		LPOLESTR olestr = A2OLE(q);


		CCommand<CDynamicStringAccessor> cmd;
		hr = cmd.Open(dbSession, olestr);

		DBORDINAL colCount = cmd.GetColumnCount();
		if (SUCCEEDED(hr)&& 0 < colCount)
		{
			cout << DAM << ": Retrieve schema info for the given result set: " << endl;
			DBORDINAL cColumns;
			DBCOLUMNINFO* rgInfo = NULL;
			OLECHAR* pStringsBuffer = NULL;
			cmd.GetColumnInfo(&cColumns, &rgInfo, &pStringsBuffer);

			cout << DAM << ": Fetch the actual data: " << endl;
			int rowCount = 0;
			CRowset<CDynamicStringAccessor>* pRS = (CRowset<CDynamicStringAccessor>*)&cmd;
			while (pRS->MoveNext() == S_OK)
			{
				for (int col = 1; col <= (int)colCount; col++)
				{

					ShortQuestion s;

					WCHAR* szValue = cmd.GetString(col);
					char id[4];
					wtoc(id,szValue );
					int idx;
					idx=atoi(id);

					col++;

					char question[500];
					szValue = cmd.GetString(col);
					wtoc(question,szValue );

					col++;

					char answer[500];
					szValue = cmd.GetString(col);
					wtoc(answer,szValue );
					s.setValues(idx, question, answer);
					col++;
					//////////////////////////////////////////////

					////////////////////////////



					l2.push_back(s);

				}
				rowCount++;
			}

			l1.at(i).setQuestionList(l2);
		}


	}

	return l1;
}


void DAL::DeleteQuestionfromDB(int id)
{
	LPOLESTR query;
	char *q=new char[400];

	char idx[5];
	itoa (id,idx,10);

	strcpy(q,"DELETE FROM Question where id=");
	strcat(q,idx);
	strcat(q,";");

	USES_CONVERSION;
	//query = SysAllocString(A2OLE(q.c_str()));
	LPOLESTR olestr = A2OLE(q);

	CCommand<CDynamicStringAccessor> cmd;
	hr = cmd.Open(dbSession, olestr);

	DBORDINAL colCount = cmd.GetColumnCount();
	if (SUCCEEDED(hr))
	{

		cout << DAM << "\n\n Course deleted Succesfully " << endl;
	}
	else
	{
		cout << DAM << "\n\nERROR" << endl;
	}
}
