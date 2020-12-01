#pragma once
#include <iostream>
#include <string>
using namespace std;

#include "MathematicsTeacher.h"

class Student;

class PhysicsTeacher : public Teacher, private MathematicsTeacher, private EnglishTeacher{
private:
protected:
	int salary;
	string lesson;
public:
	PhysicsTeacher() { salary = 8920, lesson = "Zoologic"; };
	void showSalaryOfTeacher();

	/*using Teacher::showTeacherSalary;
	using Teacher::standardSalary;*/

	void teach();

};