#include <iostream>
#include <string.h>
#include <fstream>
#include <string>
//#include "Teacher.h"
using namespace std;

class Teacher;
class University;

class Faculty {
private:
	int facultyId;
	int facultyNumberOfStudy;// видалити лишні поля
	int facultyRating;
	string facultyDegree;
	string facultyLanguageOfStudy;

	Teacher* teacher1;
	Faculty* faculty;
	University* university;
public:
	string facultyName;
	string facultyDekan;
	string facultySpeciality;

	void outputFaculty();
	void facultyWriteToFile();
	void facultyReadFromFile();

	Faculty outputFaculty(Faculty a);

	string getFacultyInfo(int a);
	int getFacultyInfo(string a);
	void setFacultyInfo(int valuefacultyId, int valuefacultyNumberOfStudy, int valuefacultyRating, string valuefacultyDegree, string valuefacultyLanguageOfStudy);

	Faculty();
	Faculty(int facultyId, int facultyNumberOfStudy, int facultyRating, string facultyDegree, string facultyLanguageOfStudy, string facultyName, string facultyDekan, string facultySpeciality);//доробити конструкторі
	Faculty(int facultyId);
	Faculty(const Faculty& a);

	~Faculty();

	/*Faculty(Teacher* _teacher,Faculty* _faculty);
	void teacherWork();*/


	void listOfFaculty(string name, string faculty);

	Faculty(University* _university, string name);

	static void addFaculty(Faculty* (&faculty), University* _university, string name);//10 завдання
	static void initList(Faculty* (&FacultyList)[4]);//10 завдання

};
