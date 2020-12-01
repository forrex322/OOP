#include "MathDepartment.h"
#include "Teacher.h"

//MathDepartment::MathDepartment(string _name)
//{
//	name = _name;
//}

void MathDepartment::listTeacherOfDepartment(MathDepartment a, Teacher* b, Teacher* c)
{
	cout << "In " << a.name << " works teacher: " << b->name << " " << b->surname << " is teacher of math and " << c->name << " " << c->surname << " is teacher of physics" << endl;

}
