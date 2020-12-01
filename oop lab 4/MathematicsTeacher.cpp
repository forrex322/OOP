#include "MathematicsTeacher.h"

//MathematicsTeacher::MathematicsTeacher()
//{
//}

MathematicsTeacher::MathematicsTeacher(string valueName, string valueSurname, string valueAdress)
{
	name = valueName;
	surname = valueSurname;
	adress = valueAdress;
}

void MathematicsTeacher::outputInfoAboutMathTeacher()
{
	outputTeacher();
}

void MathematicsTeacher::teach()
{
	cout << "Teacher of math asked to do tasks about apples" << endl;
}
