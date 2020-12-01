#include "University.h"
#include "Faculty.h"

University::University()
{
}

void University::setUniversityName(string _name)
{
	name = _name;
}

string University::getUniversityName()
{
	return name;
}

University::University(string _name)
{
	name = _name;
	Faculty* faculty;
	Faculty::initList(FacultyList);
	Faculty::addFaculty(faculty,this,"KISP");
	FacultyList[0] = faculty;
	cout << this->name << " have a " << FacultyList[0]->facultyName << endl;
	Faculty::addFaculty(faculty, this, "KI");
	FacultyList[1] = faculty;
	cout << this->name << " have a " << FacultyList[1]->facultyName << endl;
	Faculty::addFaculty(faculty, this, "TP");
	FacultyList[2] = faculty;
	cout << this->name << " have a " << FacultyList[2]->facultyName << endl;
	Faculty::addFaculty(faculty, this, "FRAK");
	FacultyList[3] = faculty;
	cout << this->name << " have a " << FacultyList[3]->facultyName << endl;
}

University::University(University* _university, Faculty* _faculty)
{
	university = _university;
	faculty = _faculty;
}

void University::listOfFaculty()
{
	faculty->listOfFaculty(university->name, faculty->facultyName);
}

University::~University()
{
	unsigned int i;
	for (i = 0; i < 4; ++i) {
		if (FacultyList[i] != NULL)
		{
			delete (FacultyList[i]);
		}
	}
}

