#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <string>
using namespace std;

class Teacher;

class Department {
private:
	Teacher* teacher;
public:
	string name;
	Department() {};
	Department(string _name) { name = _name ; };
	void listTeacherOfDepartment(Department a, Teacher* b);
};
