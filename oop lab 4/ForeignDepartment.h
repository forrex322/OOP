#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <string>
#include "MathDepartment.h"
using namespace std;

class ForeignDepartment : public virtual Department {
private:
public:
	string name;

	ForeignDepartment() {};
	ForeignDepartment(string _name);

	void listTeacherOfDepartment(ForeignDepartment a, Teacher* b);
};