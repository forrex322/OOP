#include "ForeignDepartment.h"
#include "Teacher.h"

ForeignDepartment::ForeignDepartment(string _name)
{
	name = _name;
}

void ForeignDepartment::listTeacherOfDepartment(ForeignDepartment a, Teacher* b)
{
	cout << "In " << a.name << " works teacher: " << b->name << " " << b->surname << endl;
}
