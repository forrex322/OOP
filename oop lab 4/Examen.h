#pragma once
#include <iostream>
#include <string>
#include <fstream>
//#include "Student.h"
//#include "Teacher.h"
//#include "Faculty.h"
using namespace std;

class Student;
class Teacher;
class Faculty;
class Examen;

class Examen {
private:
	Teacher* teacher;
	Faculty* faculty;
	Student* student;
public:
	Examen(Student* _student, Teacher* _teacher, Faculty* _faculty);
	void passExam();
};