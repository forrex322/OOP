#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Faculty;

class University {
private:
	University* university;
	Faculty* faculty;
	Faculty* FacultyList[4];

	string name;
public:
	University();

	void setUniversityName(string _name);
	string getUniversityName();

	University(string _name);

	University(University* _university, Faculty* _faculty);
	void listOfFaculty();

	~University();
};
