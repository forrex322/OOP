#include "Student.h"
#include "Examen.h"

Student::Student(){}

int Student::array(int a)
{
	int size = age;
	size = rand() % 50;
	int* arr = new int[size];

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 100;
	}
	cout << "Array: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[i] < arr[j]) {
				swap(arr[i], arr[j]);
			}
		}
	}
	cout << "\nSorted Array: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}


	return a;
	delete[] arr;
}

Student::Student(int valueGrant)
{
	grant = valueGrant;
}

int Student::getStudenGrant()
{
	return grant;
}

void Student::setStudentGrant(int _grant)
{
	grant = _grant;
}

Student::Student(string valueCity)
{
	city = valueCity;
}

string Student::getStudentCity()
{
	cout << "Student lives in " << city << endl;
	return string();
}

Student::Student(string valueName, string valueSchool)
{
	name = valueName;
	school = valueSchool;
}

string Student::getStudentSchool()
{
	cout << "Student " << name << " finished the " << school << " school" << endl << endl;
	return string();
}



Student& Student::operator++()
{
	++studentId;
	return *this;
	// TODO: вставьте здесь оператор return
}

Student& Student::operator--()
{
	--age;
	return *this;
	// TODO: вставьте здесь оператор return
}

Student Student::operator++(int)
{
	/*Student temp;
	temp.studentId = studentId++;
	return temp;*/

	Student student = *this;
	++* this;
	return student;
}

Student Student::operator--(int)
{
	/*Student temp;
	temp.studentId = studentId--;
	return temp;*/

	Student student = *this;
	--* this;
	return student;
}



//template <typename T>
//void Student::compare(Student* a, Student* b)
//{
//	/*const T& max(const T & a, const T & b) {
//		return (a > b) ? a : b;
//	}*/
//
//	T max = array[0];
//	if (a.age > b.age) {
//		cout << "A bigger than b" << endl;
//		return a.age;
//	}
//	else {
//		cout << "B bigger than a" << endl;
//		return b.age;
//	}
//
//}

void Student::outputStudent()
{
	cout << "Name: " << name << "\tSurname: " << surname << "\tScholl: " << school << endl;
}

void Student::studentWriteToFile()
{
	ofstream f("File_student.txt");
	try {
		if (f.is_open()) {
			f << name << " " << surname << " " << school << endl;
		}
		throw "Error of opening file";
	}
	catch (const char* exception) {
		cout << exception << endl;
	}
}

void Student::studentReadFromFile()
{
	ifstream f("File_student.txt");
	try {
		if (f.is_open()) {
			cout << f.rdbuf() << endl;
		}
		throw "Error 303";
	}
	catch (const char* exception) {
		cout << "Cannot open the file. Error: " << exception << endl;
	}
}

Student Student::outputStudent(Student a)
{
	cout << "Student id: " << studentId << "\nAdress: " << adress << "\nCity: " << city << "\nAge: " << age << "\nPhoneNumber:  " << phoneNumber << endl;
	return a;
}

string Student::getStudentInfo(int a)
{
	cout << "Student name: " << name << endl;
	return name;
}

int Student::getStudentInfo(string a)
{
	cout << "Student id: " << studentId << endl << endl;
	return studentId;
}

//int Student::getStudentAge()
//{
//	return age;
//}

void Student::setStudentInfo(string valueAdress, string valueCity, int valueAge, int valueStudentId, int valuePhoneNumber)
{
	adress = valueAdress;
	age = valueAge;
	city = valueCity;
	phoneNumber = valuePhoneNumber;
	studentId = valueStudentId;
}

//Student::Student(Student* _student,Teacher* _teacher, Faculty* _faculty)
//{
//	student = _student;
//	teacher = _teacher;
//	faculty = _faculty;
//}
//
//void Student::passExam()
//{
//	cout << "Student: " << student->name << " is passing exam in this teacher: " << teacher->name << " for this faculty: "<< faculty->facultyName <<endl;
//}

//void Student::studentWantEnterFaculty(Student a, Faculty* b)
//{
//	cout << "Student: " << a.name << " want enter to this faculty: " << b->facultyName << endl;
//}

