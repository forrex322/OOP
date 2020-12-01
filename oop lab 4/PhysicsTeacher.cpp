#include "PhysicsTeacher.h"

void PhysicsTeacher::showSalaryOfTeacher()
{
	cout << "Standart teacher get: " << Teacher::standardSalary << endl;
	cout << "Math teacher get: " << MathematicsTeacher::salary << endl;
	cout << "English teacher get: " << EnglishTeacher::salary << endl;
	cout << "Physics teacher get: " << PhysicsTeacher::salary << endl;
}

void PhysicsTeacher::teach()
{
	cout << "Teacher of physics asked to pass tests on the stakes of the replacement strum" << endl;
}


