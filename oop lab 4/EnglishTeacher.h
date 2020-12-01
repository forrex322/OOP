#pragma once
#include <iostream>
#include <string>
#include "Teacher.h"


class EnglishTeacher : public Teacher {
private:
protected:
	int salary;
public:
	EnglishTeacher() { salary = 6720; };

	EnglishTeacher(string position, string sex, int teacherId, int age, int phoneNumber, string name, string surname, string adress)
		: Teacher(position, sex, teacherId, age, phoneNumber, name, surname, adress) {};

	void outputInfoAboutEnglishTeacher();

	void teach();

};
