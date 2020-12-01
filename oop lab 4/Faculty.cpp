#include "Faculty.h"
#include "Teacher.h"
#include "University.h"

void Faculty::outputFaculty()
{
	cout << "Name: " << facultyName << "\tDekan: " << facultyDekan << "\tSpeciality: " << facultySpeciality << endl;
}

void Faculty::facultyWriteToFile()
{
	ofstream f1("File_faculty");
	f1 << facultyName << " " << facultyDekan << " " << facultySpeciality << endl;

}

void Faculty::facultyReadFromFile()
{
	ifstream f1("File_faculty");
	cout << f1.rdbuf() << endl;
}

Faculty Faculty::outputFaculty(Faculty a)
{
	cout << "Faculty Id: " << facultyId << "\tNumber years of study: " << facultyNumberOfStudy << "\tRating: " << facultyRating << "\tDegree: " << facultyDegree << "\tLanguage of study: " << facultyLanguageOfStudy << endl;
	return Faculty();
}

string Faculty::getFacultyInfo(int a)
{
	cout << "Faculty name: " << facultyName << endl;
	return string();
}

int Faculty::getFacultyInfo(string a)
{
	cout << "Rating of faculty: " << facultyRating << endl;
	return 0;
}

void Faculty::setFacultyInfo(int valueFacultyId, int valueFacultyNumberOfStudy, int valueFacultyRating, string valueFacultyDegree, string valueFacultyLanguageOfStudy)
{
	facultyId = valueFacultyId;
	facultyNumberOfStudy = valueFacultyNumberOfStudy;
	facultyRating = valueFacultyRating;
	facultyDegree = valueFacultyDegree;
	facultyLanguageOfStudy = valueFacultyLanguageOfStudy;
}

Faculty::Faculty()
{
}

Faculty::Faculty(int facultyId, int facultyNumberOfStudy, int facultyRating, string facultyDegree, string facultyLanguageOfStudy, string facultyName, string facultyDekan, string facultySpeciality)
{
	this->facultyId = facultyId;
	this->facultyDegree = facultyDegree;
	this->facultyLanguageOfStudy = facultyLanguageOfStudy;
	this->facultyName = facultyName;
	this->facultyNumberOfStudy = facultyNumberOfStudy;
	this->facultyRating = facultyRating;
	this->facultySpeciality = facultySpeciality;
	this->facultyDekan = facultyDekan;
}

Faculty::Faculty(int facultyId)
{
	this->facultyId = facultyId;
}

Faculty::Faculty(const Faculty& a)
{
	this->facultyId = a.facultyId;
}

Faculty::~Faculty()
{
	cout << "Work of destructor" << endl;
}

//Faculty::Faculty(Teacher* _teacher, Faculty* _faculty)
//{
//	teacher1 = _teacher;
//	faculty = _faculty;
//}
//
//void Faculty::teacherWork()
//{
//	teacher1->teacherWork(teacher1->name,faculty->facultyName);
//}

void Faculty::listOfFaculty(string name, string faculty)
{
	cout << "University: " << name << " have a : " << faculty << " faculty." << endl;
}

Faculty::Faculty(University* _university, string name)
{
	if (_university->getUniversityName() != "")
	{
		facultyName = name;
	}
	else {
		cout << "Oops catalogue itself is not Created Yet ...\n";
	}
}

void Faculty::addFaculty(Faculty* (&faculty), University* _university, string name)
{
	faculty = new Faculty(_university, name);
}

void Faculty::initList(Faculty* (&FacultyList)[4])
{
	FacultyList[4] = new Faculty[4];
}

