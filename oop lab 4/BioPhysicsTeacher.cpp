#include "BioPhysicsTeacher.h"

BioPhysicsTeacher::BioPhysicsTeacher(string _name)
{
	name = _name;
}

void BioPhysicsTeacher::showLessonsOfBioPhysics()
{
	cout << "BioPhysics " << name << " must know " << BiologyTeacher::lesson << " and " << PhysicsTeacher::lesson << endl;
}

void BioPhysicsTeacher::teach()
{
	cout << "Teacher of physics asked to learn information about submolecular organism levels" << endl;
}
