#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include "Department.h"
using namespace std;



class MathDepartment : public virtual Department { // 1 завдання, virtual inharitance
private:
public:
	//string name;

	MathDepartment(string name) : Department(name) {};
	//MathDepartment(string _name);
	virtual ~MathDepartment() { cout << "Work of virtual destructor\n\n"; };

	void listTeacherOfDepartment(MathDepartment a, Teacher* b,Teacher* c);


};