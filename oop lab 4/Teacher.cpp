#include "Teacher.h"
#include "Student.h"

void Teacher::showTeacherSalary()
{
	cout << standardSalary;
}

Teacher::Teacher()
{
	standardSalary = 5650;
}

Teacher::Teacher(string position, string sex, int teacherId,int age,int phoneNumber,string name,string surname,string adress)
{
	this->adress = adress;
	this->age = age;
	this->name = name;
	this->phoneNumber = phoneNumber;
	this->position = position;
	this->sex = sex;
	this->surname = surname;
	this->teacherId = teacherId;
}
//
//Teacher::Teacher(int teacherId)
//{
//	this->teacherId = teacherId;
//}
//
//Teacher::Teacher(const Teacher& a)
//{
//	this->teacherId = a.teacherId;
//}



void Teacher::outputTeacher()
{
	cout << "Name: " << name << "\tSurname: " << surname << "\tAdress: " << adress << endl;
}

void Teacher::teacherWriteToFile()
{
	ofstream f1("File_teacher");
	f1 << name << " " << surname << " " << adress << endl;
}

void Teacher::teacherReadFromFile()
{
	ifstream f1("File_teacher");
	cout << f1.rdbuf() << endl;
}

void Teacher::setTeacherInfo(string valuePosition, string valueSex, int valueTeacherId, int valueAge, int valuePhoneNumber,int valueSalary)
{
	position = valuePosition;
	sex = valueSex;
	teacherId = valueTeacherId;
	age = valueAge;
	phoneNumber = valuePhoneNumber;
	salary = valueSalary;
}

Teacher Teacher::outputTeacher(Teacher a)
{
	cout << "Position: " << position << "\tSex: " << sex << "\tTeacher Id: " << teacherId << "\tAge: " << age << "\tPhone number: " << phoneNumber << endl;
	return Teacher();
}

void Teacher::teacherWork(string name, string faculty)
{
	cout << "Teacher: " << name << " works at the faculty of the: " << faculty << endl;
}

//Teacher::~Teacher()
//{
//	cout << "Work of destructor" << endl;
//}

int Teacher::getTeacherSalary()
{
	return salary;
}

void Teacher::showTeacherFullInfo()
{
	cout << name << " " << surname << " " << adress << " " << " " << position << " " << sex << " " << teacherId << " " << age << " " << phoneNumber << endl;
}

void Teacher::showCityWhereWorksTeacher(string name, Student& a)
{
	cout << "Teacher " << name << " lives in " << a.city << endl;
}

void Teacher::teach()
{

}

Teacher::~Teacher()
{
	//cout << "Work of virtual destructor" << endl;
}

void takingExam(Teacher& a, Student& b)
{
	cout << "Teacher " << a.name << " takes an exam from " << b.name << endl;
}
