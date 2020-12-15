#include <iostream>
#include <string.h>
#include <fstream>
#include <string>
//#include "Teacher.h"
//#include "Faculty.h"
//#include "Examen.h"

using namespace std;

//class Teacher;
class Faculty;
//class Examen;

class Student {
private:
	string adress;
	string city;
	int age;
	int studentId;
	int phoneNumber;

	//Teacher* teacher;
	Faculty* faculty;
	//Student* student;
protected:
	int grant;
public:
	string name;
	string surname;
	string school;

	void outputStudent();
	void studentWriteToFile();
	void studentReadFromFile();

	Student outputStudent(Student a);

	string getStudentInfo(int a);
	int getStudentInfo(string a);
	//int getStudentAge();
	void setStudentInfo(string valueAdress, string valueCity, int valueAge, int valueStudentId, int valuePhoneNumber);

	//void зробити взаємодію 

	Student();
	//Student(Student* _student,Teacher* _teacher,Faculty* _faculty);
	//void passExam();

	//void studentWantEnterFaculty(Student a,Faculty* b);

	int array(int a);

	Student(string _name, string _surname, string _school) :name(_name), surname(_surname), school(_school) {};// 5 завдання

	Student(int valueGrant);//8 завдання
	int getStudenGrant();
	void setStudentGrant(int _grant);

	Student(string valueCity);//8 завдання
	string getStudentCity();

	Student(string valueName,string valueSchool);//8 завдання
	string getStudentSchool();

	friend class Teacher;

	/*template <typename T>
	void compare(Student* a, Student* b);*/

	Student& operator ++();
	Student& operator --();
	Student operator ++(int);
	Student operator --(int);

};