#include <iostream>
#include <string>
using namespace std;

#include "PhysicsTeacher.h"

class BiologyTeacher : public Teacher {
private:
protected:
	int salary;
	string lesson;
public:
	BiologyTeacher() { lesson = "Physics"; };

	void teach();
};