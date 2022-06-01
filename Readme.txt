Section 1:

- Our application is built in QT Visual Studio 2010.
- "Code" folder contains the complete project including all the files, so there is simply no need to add any file to make it run. 
- All you have to do is to run the LMS.sln file of the application.
- User can sign up, log in, and can use different functionalities provided by the application
-Only students can sign up, whereas admin can add a teacher. So to use the functionalities of admin,you need to know the admin username and password. Admin username and password
 are stored in the DB named as "LMS.accdb".DB is placed at this path: Code\LMS\LMS\LMS.accdb
- In order to ease the access of our application, here is the login info of an admin:   username: janeeta	password: janeeta
- In order to ease the access of our application, here is the login info of a teacher:   username: sobia	password: 123456
- For every task to be performed, there are added buttons in the application, By clicking the buttons user can perform different tasks.
- For every step, application itself provides the instruction, by giving user success/error messages so it's quite straight forward to run it.




Section 2:

- The design pattern we used in our application is "SINGLETON"
- We used this pattern, because in GUI classes in QT, every GUI class has to call LMS class (i.e. system class) to perform further action, as SYSTEM CLASS
 is responsible for adding, updating or deleting any data, so every GUI class need to make LMS object but we can't make more than one object of system
class.
- So Singleton pattern helps us slove this problem. We'll make only one class of the system and get this instance in every GUI class to access system.
-GUI classes are our presentation layer, system classes are our business logic layer and DAL is our data access layer.
-"LMSsystem" is our Singleton class, of which there'll be only one instance.
-"LMSsystem.h" and  "LMSsystem.cpp" are the files for singleton class.
-And addCourse.cpp, addTeacher.cpp, adminprofile.cpp etc and all the other GUI classes get the single instance of LMSsystem to access system class.
-We access this LMSsystem' single instance in every GUI class.
 