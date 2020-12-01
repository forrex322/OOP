#include "Department.h"
#include "Teacher.h"

void Department::listTeacherOfDepartment(Department a, Teacher* b)
{
	cout << "In " << a.name << " works teacher: " << b->name << " " << b->surname << endl;

}
