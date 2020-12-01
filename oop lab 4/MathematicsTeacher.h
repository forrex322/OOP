#pragma once
#include <iostream>
#include <string>
#include "EnglishTeacher.h"

class Teacher;

class MathematicsTeacher : public Teacher {
private:
protected:
	int salary;
public:
	MathematicsTeacher() { salary = 12350; };
	MathematicsTeacher(string valueName, string valueSurname, string valueAdress);

	void outputInfoAboutMathTeacher();

	void teach();
};
