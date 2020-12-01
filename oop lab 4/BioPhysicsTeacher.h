#include <iostream>
#include <string>
using namespace std;

#include "BiologyTeacher.h"

class BioPhysicsTeacher : public Teacher ,private BiologyTeacher, private PhysicsTeacher {
private:
	string name;
protected:
public:
	BioPhysicsTeacher() {};
	BioPhysicsTeacher(string _name);
	void showLessonsOfBioPhysics();

	void teach();
};