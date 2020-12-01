#include <iostream>
#include <string.h>
#include <fstream>
#include <string>
using namespace std;

class Student;
class Teacher {
private:
	string position;
	string sex;
	int teacherId;
	int age;
	int phoneNumber;
	int salary;
protected:
	int standardSalary;
	void showTeacherSalary();
public:
	string name;
	string surname;
	string adress;

	//Teacher() { standardSalary = 5650; };

	Teacher();
	Teacher(string position, string sex, int teacherId, int age, int phoneNumber, string name, string surname, string adress);//доробити конструкторі
	//Teacher(int teacherId);
	//Teacher(const Teacher& a);
	//~Teacher();


	void outputTeacher();
	void teacherWriteToFile();
	void teacherReadFromFile();
	void setTeacherInfo(string valuePosition, string valueSex,int valueTeacherId,int valueAge,int valuePhoneNumber, int valueSalary);

	Teacher outputTeacher(Teacher a);

	void teacherWork(string name,string faculty);


	int getTeacherSalary();

	void showTeacherFullInfo();

	friend void takingExam(Teacher& a, Student& b);

	//friend class Student;
	void showCityWhereWorksTeacher(string name, Student& a);

	virtual void teach();
	virtual ~Teacher();
};