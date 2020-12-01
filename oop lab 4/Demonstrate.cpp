#include <iostream>
#include <string.h>
#include <fstream>
////#include "Student.h"
//#include "Examen.h"
////#include "Teacher.h"
////#include "Faculty.h"
//#include "University.h"
//#include "Department.h"

#include "Student.h"
//#include "Teacher.h"
#include "Faculty.h"
#include "Examen.h"
#include "University.h"
#include "ForeignDepartment.h"
#include "BioPhysicsTeacher.h"


//якщо буде багато помилок при взаємодії класів то закинути файли .h в .cpp

using namespace std;

int functinOutsideFromClass(Teacher a){
	cout << "\nFunction outside of class" << endl;
	int Tax;
	return Tax = a.getTeacherSalary() * 0.2;
}
int functinOutsideFromClass(Teacher* a) {
	cout << "Override function" << endl;
	int Tax;
	return Tax = a->getTeacherSalary() * 0.2;
}

//void Service_Dynamic(Teacher* a[]) {
//	string o;
//	cin >> o;
//	for (int i = 0; i < 4; i++) {
//		if (o == a[i]->name) {
//			cout << "Delete " << a[i]->name << endl;
//			delete a[i];
//		}
//	}
//}

Student* createStudent() {
	Student* studentNumberOne = new Student;
	studentNumberOne->name = "Denis";
	return studentNumberOne;
}

Student deleteStudent(Student* studentNumberOne) {
	delete studentNumberOne;
	return NULL;
}

int main() {

	//Student

	Student student;
	Student stundet1("Vlad","Ksondzyk","NVK 2");// список ініціалізації

	cout << "Student" << endl;

	student.name = "Dima";
	student.surname = "Andreev";
	student.school = "NVK 2";

	student.outputStudent();
	student.studentWriteToFile();// зробити через try catch просто перевырка на помилки і створення та видалення об'єктів через switch case
	student.studentReadFromFile();
	student.setStudentInfo("Hayova 8","Khm",18,1,06760);
	student.outputStudent(student);

	int s_id = 1;
	student.getStudentInfo(s_id);

	string s_name = "Dima";
	student.getStudentInfo(s_name);

	student.array(10);
	cout << "\n" << endl;

	Student studentWithGrant(1300);
	cout << "Student with grant have: " << studentWithGrant.getStudenGrant() << " grivnas." << endl;//8 завдання

	Student studentWhoLivesInKhm("Khmelnitskiy");//8 завдання
	studentWhoLivesInKhm.getStudentCity();

	Student studentWhoFinishedSchool("Danil","NVK 2");//8 завдання
	studentWhoFinishedSchool.getStudentSchool();

	//Array of objects

	Student sstudent[3];

	sstudent[0].name = "Misha";
	sstudent[0].surname = "Shelestyk";
	sstudent[0].school = "NVK 2";

	sstudent[1].name = "Vadim";
	sstudent[1].surname = "Rybachok";
	sstudent[1].school = "NVK 2";

	sstudent[2].name = "Neket";
	sstudent[2].surname = "Savchuk";
	sstudent[2].school = "NVK 2";

	for (int i = 0; i < 3; i++) {
		sstudent[i].outputStudent();
	}

	//Teacher
	
	Teacher teacher;
	cout << "\nTeacher" << endl;

	teacher.name = "Kate";
	teacher.surname = "Cheese";
	teacher.adress = "Ivana Franka 56";

	teacher.outputTeacher();
	teacher.teacherWriteToFile();
	teacher.teacherReadFromFile();
	teacher.setTeacherInfo("Teacher","Women",1,36,12345,6250);
	teacher.outputTeacher(teacher);

	functinOutsideFromClass(teacher);
	functinOutsideFromClass(&teacher);

	/*Teacher tteacher1;
	Teacher tteacher2("teacher","women",2,27,3443,"Vlada","Bylax","Franka 46");
	Teacher tteacher3 = 3;*/

	Teacher a;
	Teacher* p = &a;
	p->name = "Masha";
	p->surname = "Gabi";
	p->adress = "Gastelo 15";
	p->outputTeacher();

	Student* pstudent1;
	//const std::exception &
	try
	{
		pstudent1 = new Student("Neket");

		Student* student1 = pstudent1;
		string l;
		cin >> l;
		if (l != "Neket") {
			cout << "Exception. Memory is not allocated" << endl;
			throw exception("Exception. Memory is not allocated");
		}
		student1->name = l;
		student1->outputStudent();
		delete student1;
	}
	catch (bad_alloc ba)
	{
		//cout << "Exception. Memory is not allocated" << endl;
		cout << ba.what() << endl;
		return -1;
	}

	Student* pstudent2;
	//const std::exception &
	try
	{
		pstudent2 = new Student("Vlad");

		Student* student2 = pstudent2;
		string n;
		cin >> n;
		if (n != "Vlad") {
			//cout << "Error" << endl;
			//throw std::exception("Error");
			throw "Error 404";
		}
		student2->name = n;
		student2->outputStudent();
		delete student2;
	}
	//std::exception err
	catch (const char* exception)
	{
		//std::cout << err.what() << std::endl;
		std::cerr << "Error: " << exception << "\n";

		return -1;
	}

	Student* pstudent3;
	//const std::exception &
	try
	{
		pstudent3 = new Student("Vova");

		Student* student3 = pstudent3;
		string g;
		cin >> g;
		if (g != "Vova") {
			cout << "Fail in a dynamic cast" << endl;
			throw std::exception("Fail in a dynamic cast");
		}
		student3->name = g;
		student3->outputStudent();
		delete student3;
	}
	catch (bad_cast bc)
	{
		std::cout << bc.what() << std::endl;
		cerr << bc.what() << endl;
		return -1;
	}

	//6 завдання 
	//8 через кейси зробити створення та видалення

	Student* student4 = new Student;
	student4->name = "Vadim";
	delete student4;
	Student* student5 = new Student;
	student5->name = "Misha";
	delete student5;

	Teacher teacher1, teacher2, teacher3, teacher4, teacher5;//об'єкти в статичній пам'яті
	teacher1.name = "Valya";
	teacher2.name = "Lena";
	teacher3.name = "Bogdan";
	teacher3.surname = "Kinder";
	teacher4.name = "Nazar";
	teacher5.name = "Amina";
	teacher5.surname = "Arhipova";

	//Student studentNumberOne;
	// 8 zavdannya
	int choice = 0, n = 1;

	while (n == 1)
	{
		do {
			cout << "Choose action" << endl;
			cout << "1 Add student" << endl;
			cout << "2 Delete student" << endl;

			cin >> choice;
			switch (choice)
			{
			/*default:
				break;*/
			case1: {createStudent(); break; }
			case2: {deleteStudent(createStudent()); break; }
			default: cout << "Error"; break;
			}
		} while ((choice < 1) || (choice > 3));
			cout << "Return to menu enter 1" << endl;
			cout << "For out from menu enter 2" << endl;
		cin >> n;
	}
	

	Faculty faculty(1,4,97,"Bachelor","Ukr","KISP","Savenko","KI");// 5 завдання

	Faculty faculty1();
	Faculty faculty2(1, 4, 97, "Bachelor", "Ukr", "KISP", "Savenko", "KI");
	Faculty faculty3 = 1;

	Faculty KISP;
	KISP.facultyName = "KISP";

	cout << endl;

	Examen exam(&student, &teacher, &faculty); // асоціація
	exam.passExam();

	//// доробити агрегацію та композицію

	////Faculty WorkOfTeacher(&teacher1,&KISP);//композиція
	////WorkOfTeacher.teacherWork();

	//Student stud;

	//stud.studentWantEnterFaculty(student,&KISP);//агрегація

	///*Examen exam(&student,&teacher,&faculty);
	//exam.passExam();*/

	University XHY;

	XHY.setUniversityName("XHY");

	University university("XEHEY");//композиція

	University listOfFaculty(&XHY,&KISP);//композиція

	listOfFaculty.listOfFaculty();

	//Department dep;

	//dep.name = "Department of Math";

	//dep.listTeacherOfDepartment(dep,&teacher);// агрегація



	MathematicsTeacher mathTeacher("Sofia","Anderson","Hayova 8");//9 завдання
	mathTeacher.outputInfoAboutMathTeacher();// 9 завдання

	EnglishTeacher englTeacher1("Teacher","Man",10,22,4544,"Bob","Bimbl","Kozacha 13");//11 завдання
	englTeacher1.outputInfoAboutEnglishTeacher();

	PhysicsTeacher physicsTeacher;
	physicsTeacher.showSalaryOfTeacher();//12 завдання
	

	takingExam(teacher,student);//16 завдання

	//17 завдання 

	Student ssstudent("KHM");
	teacher.showCityWhereWorksTeacher("Misha",ssstudent);

	//teacher.showCityWhereWorksTeacher("Misha",student);

	BioPhysicsTeacher teacherOfBioPhysics("Vlad");

	teacherOfBioPhysics.showLessonsOfBioPhysics();

	// зробити віртуалізацію та переробити зв'язки

	MathDepartment mathDep("Department of Math");
	mathDep.listTeacherOfDepartment(mathDep,&teacher,&teacher5);

	ForeignDepartment foreignDep("Department of Foreign languages");
	foreignDep.listTeacherOfDepartment(foreignDep,&teacher3);

	//dorobutu virtual function and next...

	

	//BiologyTeacher TeacherOfBiology;
	///*BiologyTeacher* pTeacherOfBiology = &TeacherOfBiology;
	//pTeacherOfBiology->teach();*/
	//delete pTeacherOfBiology;

	//MathematicsTeacher TeacherOfMath;
	///*MathematicsTeacher* pTeacherOfMath = &TeacherOfMath;
	//pTeacherOfMath->teach();*/
	//delete pTeacherOfMath;

	//EnglishTeacher TeacherOfEnglish;
	//EnglishTeacher* pTeacherOfEnglish = &TeacherOfEnglish;
	//pTeacherOfEnglish->teach();
	//delete pTeacherOfEnglish;

	//PhysicsTeacher TeacherOfPhysics;
	//PhysicsTeacher* pTeacherOfPhysics = &TeacherOfPhysics;
	//pTeacherOfPhysics->teach();
	//delete pTeacherOfPhysics;

	Teacher* pTeacher;
	BiologyTeacher teacherOfBiology;
	MathematicsTeacher teacherOfMath;
	EnglishTeacher teacherOfEnglish;
	PhysicsTeacher teacherOfPhysics;
	BioPhysicsTeacher teacherOfBioPhysic;

	pTeacher = (Teacher*)&teacherOfBiology;
	pTeacher->teach();
	pTeacher = (Teacher*)&teacherOfMath;
	pTeacher->teach();
	pTeacher = (Teacher*)&teacherOfEnglish;
	pTeacher->teach();
	pTeacher = (Teacher*)&teacherOfPhysics;
	pTeacher->teach();
	cout << "Teacher of Physics wanted to be a BioPhysic" << endl;
	pTeacher = (Teacher*)&teacherOfBioPhysic;
	pTeacher->teach();
	
	//пізне звязування зробити
	int (*pFcn)(Teacher) = functinOutsideFromClass;
	cout << pFcn(teacher) << endl;


	/*Teacher* teachers[] = {new BiologyTeacher, new MathematicsTeacher,new EnglishTeacher, new PhysicsTeacher };

	teachers[0]->teach();
	teachers[1]->teach();
	teachers[2]->teach();
	teachers[3]->teach();*/





	/*teachers[0]->name = "Larisa";
	teachers[0]->setTeacherInfo("Teacher","Women",1,36,12345,6250);
	teachers[1]->name = "Lolita";
	teachers[1]->setTeacherInfo("Dekan", "Women", 1, 36, 12345, 6250);
	teachers[2]->name = "Lorochka";
	teachers[2]->setTeacherInfo("Docent", "Women", 1, 36, 12345, 6250);
	teachers[3]->name = "Marina";
	teachers[3]->setTeacherInfo("Higher teacher", "Women", 1, 36, 12345, 6250);*/

	/*string o;
	cin >> o;*/

	/*if (o == "Larisa") {
		cout << "Delete Larisa" << endl;
		delete teachers[0];
	}
	else if (o == "Lolita") {
		cout << "Delete Lolita" << endl;
		delete teachers[1];
	}
	else if (o == "Lorochka") {
		cout << "Delete Lorochka" << endl;
		delete teachers[2];
	}
	else if (o == "Marina") {
		cout << "Delete Marina" << endl;
		delete teachers[3];
	}*/

	/*for (int i = 0; i < 4; i++) {
		if (o == teachers[i]->name) {
			cout << "Delete " << teachers[i]->name << endl;
			delete teachers[i];
		}
	}*/

	//Service_Dynamic(&teachers[4]);

}