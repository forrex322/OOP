#include <iostream>
#include <string.h>
#include <fstream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <functional> // std::plus 
#include <algorithm> // std::transform 
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
#include "Bookkeeping.h"


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


Student* createStudent() {
	Student* studentNumberOne = new Student;
	studentNumberOne->name = "Denis";
	return studentNumberOne;
}

Student deleteStudent(Student* studentNumberOne) {
	delete studentNumberOne;
	return NULL;
}

template<typename T> void print_queue(T& q) {
	while (!q.empty()) {
		std::cout << q.top() << " ";
		q.pop();
	}
	std::cout << '\n';
}

void printArray(int arr[], int n)
{

	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
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
	//student.outputStudent(student);

	++student; // binary operator
	--student; // binary operator
	student++; //postfix
	student--; //postfix
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

	//зробити шаблонну функцию
	
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

	

	University XHY;

	XHY.setUniversityName("XHY");

	University university("XEHEY");//композиція

	University listOfFaculty(&XHY,&KISP);//композиція

	listOfFaculty.listOfFaculty();



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

	

	Teacher* pTeacher;
	BiologyTeacher teacherOfBiology;
	MathematicsTeacher teacherOfMath;
	EnglishTeacher teacherOfEnglish;
	PhysicsTeacher teacherOfPhysics;
	BioPhysicsTeacher teacherOfBioPhysic;

	pTeacher = (Teacher*)&teacherOfBiology; // pTeacher = new BiologyTeacher; тоже саме
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


	int count = 3;
	Student* stud = new Student[count];
	stud[0].setStudentGrant(5500);
	stud[1].setStudentGrant(1300);
	stud[2].setStudentGrant(1800);

	Bookkeeping <int>g(stud[0].getStudenGrant());
	Bookkeeping <int>b(stud[1].getStudenGrant());
	Bookkeeping <int>c(stud[2].getStudenGrant());
	Bookkeeping <int>o(stud[0].getStudenGrant(), stud[1].getStudenGrant(),stud[2].getStudenGrant());
	Bookkeeping <int>emptyp;
	/*Bookkeeping <int>ppp(stud[0].getStudenGrant(), stud[1].getStudenGrant(), stud[2].getStudenGrant());
	Bookkeeping <int>iii(stud[0].getStudenGrant(), stud[1].getStudenGrant(), stud[2].getStudenGrant());*/

	cout << "President grant is ";
	g.showGrants();
	
	cout << "Suma of President and Default grants is ";
	b += g;
	b.showGrants();

	g -= c;
	cout << "Difference of President and High grants is ";
	g.showGrants();

	c *= b;
	cout << "Multiply of Default and High grants is: ";
	c.showGrants();

	g = c;
	g.showGrants();

	//c = g - b; // binary operators
	//cout << "c = g - b";
	//c.showGrants();

	//g = c + b;
	//cout << "g = c + b";
	//g.showGrants();
	

	o.sumaOfTwoGrant(stud[0].getStudenGrant(), stud[1].getStudenGrant(), stud[2].getStudenGrant());
	
	// презентація 1-я 2-тех. звд. 3-юмл. 4- інтерфейс в win.forms(щоб мало нормальний вигляд, можна з не робочими кнопками)
	cout << "\nVector" << endl;
	vector<string> v = { "Vadim", "Vlad", "Danya", "Misha" };
	cout << "Add new students" << endl;
	v.push_back("Dima");
	v.push_back("Neket");

	for (string n : v) {
		cout << n << '\n';
	}

	cout << "\nList" << endl;
	list<string> l = { "Maryna Ivanovna", "Nataly Sergeevna", "Nataly Vasulivna" };
	cout << "Add new teachers" << endl;
	l.push_front("Oksana Anatoliyvna");
	l.push_back("Lydmila Edyardovna");

	for (string n : l) {
		cout << n << '\n';
	}

	cout << "\nDeque" << endl;
	deque<string> d = { "Vadim", "Vlad", "Danya", "Misha" };
	cout << "Add new students" << endl;
	d.push_front("Dima");
	d.push_back("Neket");

	for (string n : d) {
		std::cout << n << '\n';
	}

	cout << "\nSet" << endl;
	set <int> st;

	cout << "Enter 5 numbers: " << endl;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ") ";
		int dig; cin >> dig;
		st.insert(dig);
	}

	cout << "Content of set: ";

	copy(st.begin(), st.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	cout << "\nMultiset" << endl;

	multiset <int> ms1;

	ms1.insert(1);
	ms1.insert(2);

	cout << "The size of the multiset is initially " << ms1.size() << "." << endl;

	ms1.clear();
	cout << "The size of the multiset after clearing is " << ms1.size() << "." << endl;

	cout << "\nMap" << endl;
	map <int, int> mp;

	cout << "Enter number of elements: "; int nn; cin >> nn;

	for (int i = 0; i < nn; i++) {
		cout << i << ") "; int a; cin >> a;
		mp[a] = i;  // добавляем новые элементы
	}

	map <int, int> ::iterator it = mp.begin();
	cout << "Get sorted map: " << endl;
	for (int i = 0; it != mp.end(); it++, i++) {  // выводим их
		cout << i << ") Key " << it->first << ", element " << it->second << endl;
	}

	cout << "\nMultimap" << endl;
	multimap <char, int> myMultimap;///объявили multimap

   ///заполняем myMultimap
	myMultimap.insert(pair<char, int>('q', 111));
	myMultimap.insert(pair<char, int>('u', 201));
	myMultimap.insert(pair<char, int>('h', 301));

	cout << "myMultimap contains:\n";
	for (auto it = myMultimap.begin(); it != myMultimap.end(); ++it)
	{
		cout << it->first << " : " << it->second << endl;
	}

	cout << "\nStack" << endl;
	stack <int> steck;  // создаем стек
	int ii = 0;
	cout << "Enter any 6 numbers: " << endl; // предлагаем пользователю 
														// ввести 6 чисел
	while (ii != 6) {
		int a;
		cin >> a;

		steck.push(a);  // добавляем введенные числа
		ii++;
	}

	if (steck.empty()) cout << "Stack dont empty";  // проверяем пуст ли стек (нет)

	cout << "Upper elemnt of stack: " << steck.top() << endl; // выводим верхний элемент
	cout << "Let's delete upper element " << endl;

	steck.pop();  // удаляем верхний элемент

	cout << "It's a new upper element: " << steck.top() << endl; // выводим уже новый

	cout << "\nQueue" << endl;
	queue<string> myQueue;     // создаем пустую очередь типа strin
	// добавили в очередь несколько элементов типа string
	myQueue.push("No pain ");
	myQueue.push("- no gain");
	cout << "Number of elements in queue: " << myQueue.size() << endl;
	cout << "\nHere they are: " << myQueue.front() << myQueue.back();
	myQueue.pop(); // удаляем один элемент в очереди
	cout << "\nNow there is one element: " << myQueue.front() << endl;

	cout << "\nPriority queue" << endl;
	std::priority_queue<int> q;

	for (int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
		q.push(n);

	print_queue(q);

	std::priority_queue<int, std::vector<int>, std::greater<int> > q2;

	for (int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
		q2.push(n);

	print_queue(q2);

	// Using lambda to compare elements.
	auto cmp = [](int left, int right) { return (left ^ 1) < (right ^ 1); };
	std::priority_queue<int, std::vector<int>, decltype(cmp)> q3(cmp);

	for (int n : {1, 8, 5, 6, 3, 4, 0, 9, 7, 2})
		q3.push(n);

	print_queue(q3);

	cout << "\nIterator input" << endl;
	vector<int> v1 = { 1, 2, 3, 4, 5 };
	// Declaring an iterator
	vector<int>::iterator i1;
	for (i1 = v1.begin(); i1 != v1.end(); ++i1) {
		// Accessing elements using iterator
		cout << (*i1) << " ";
	}

	cout << endl;

	cout << "\nIterator output" << endl;
	//vector<int>v1 = { 1, 2, 3, 4, 5 };
	// Declaring an iterator 
	//vector<int>::iterator i1;
	for (i1 = v1.begin(); i1 != v1.end(); ++i1)
	{
		// Assigning elements using iterator 
		*i1 = 1;
	}
	// v1 becomes 1 1 1 1 1 

	cout << endl;

	cout << "\nIterator forward" << endl;
	for (i1 = v1.begin(); i1 != v1.end(); ++i1) {
		// Assigning values to locations pointed by iterator 
		*i1 = 1;
	}

	for (i1 = v1.begin(); i1 != v1.end(); ++i1) {
		// Accessing values at locations pointed by iterator 
		cout << (*i1) << " ";
	}

	cout << endl;

	cout << "\nBidirectional iterator" << endl;

	list<int>v2 = { 1, 2, 3, 4, 5 };

	// Declaring an iterator 
	list<int>::iterator i2;

	// Accessing the elements from end using decrement 
	// operator 
	for (i2 = v2.end(); i2 != v2.begin(); --i2)
	{
		if (i2 != v2.end())
		{
			cout << (*i2) << " ";
		}
	}
	cout << (*i2);

	cout << endl;

	cout << "\nIterator of random access" << endl;
	vector<int>v12 = { 1, 2, 3, 4, 5 };
	// Accessing elements using offset dereference 
	// operator [ ] 
	for (int i = 0; i < 5;)
	{
		cout << v12[i] << " ";
		i++;
	}

	cout << endl;

	cout << "Functor plus" << endl;
	// First array  
	int first[] = { 1, 2, 3, 4, 5 };

	// Second array 
	int second[] = { 10, 20, 30, 40, 50 };

	// Result array 
	int results[5];

	// std::transform applies std::plus to the whole array 
	std::transform(first, first + 5, second, results, std::plus<int>());

	// Printing the result array 
	for (int i = 0; i < 5; i++)
		std::cout << results[i] << " ";

	cout << endl;

	cout << "Functor greater" << endl;
	int arr[] = { 60, 10, 80, 40, 30,
				 20, 50, 90, 70 };
	int n1 = sizeof(arr) / sizeof(arr[0]);

	// To sort the array in decreasing order 
	// use greater <int>() as an third arguments 
	sort(arr, arr + 9, greater<int>());

	// Print array elements 
	printArray(arr, n1);

	cout << endl;



}
