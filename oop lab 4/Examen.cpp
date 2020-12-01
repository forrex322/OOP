#include "Student.h"
#include "Teacher.h"
#include "Faculty.h"
#include "Examen.h"


Examen::Examen(Student* _student, Teacher* _teacher, Faculty* _faculty)
{
	student = _student;
	teacher = _teacher;
	faculty = _faculty;
}

void Examen::passExam()
{
	cout << "Student: " << student->name << " is passing exam in this teacher: " << teacher->name << " for this faculty: " << faculty->facultyName << endl;
}


