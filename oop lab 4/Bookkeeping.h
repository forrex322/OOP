#include <iostream>
#include <string.h>
#include <fstream>
#include <string>

using namespace std;
template <typename Grant>

class Bookkeeping {
private:
	Grant defaultGrant;
	Grant highGrant;
	Grant presidentGrant;
	Grant* array;
	int size;
public:
	Bookkeeping():defaultGrant(0), highGrant(0)
	{
		cout << "Constructor bookkeeping" << endl;
		size = 0;
		array = new Grant[size];
	}

	Bookkeeping(Grant defaultGrant, Grant highGrant, Grant presidentGrant) : Bookkeeping() {
		size = 3;
		array = new Grant[size];
		this->defaultGrant = array[0] = defaultGrant;
		this->highGrant = array[1] = highGrant;
		this->presidentGrant = array[2] = presidentGrant;
	}

	Bookkeeping(Grant defaultGrant) : Bookkeeping() {
		size = 1;
		array = new Grant[size];
		this->defaultGrant = array[0] = defaultGrant;
	}


	~Bookkeeping() {
		delete[] array;
	}

	template <typename Grants>
	Grants sumaOfTwoGrant(Grants defaultGrant, Grants highGrant, Grants presidentGrant) {
		
		defaultGrant += this->defaultGrant;
		highGrant += this->highGrant;
		presidentGrant += this->presidentGrant;

		cout << "Suma of 2 default grants: " << defaultGrant << endl;
		cout << "Suma of 2 high grants: " << highGrant << endl;
		cout << "Suma of 2 president grants: " << presidentGrant << endl;
		return defaultGrant + highGrant + presidentGrant;
	}
	void showGrants() {
		cout << defaultGrant << endl;
		/*cout << "Default grant: " << defaultGrant << endl;
		cout << "High grant: " << highGrant << endl;
		cout << "President grant: " << presidentGrant << endl;*/
	}

	Grant& operator[] (const int index) {
		if (index >= 0 && index < size) {
			return array[index];
		}
	}

	Bookkeeping operator + (Bookkeeping const &student) {
		Bookkeeping temp;
		temp.defaultGrant = this->defaultGrant + student.defaultGrant;
		temp.highGrant = this->highGrant + student.highGrant;
		temp.presidentGrant = this->presidentGrant + student.presidentGrant;
		return temp;
	}
	Bookkeeping operator - (const Bookkeeping& student) {
		Bookkeeping temp;
		temp.defaultGrant = this->defaultGrant - student.defaultGrant;
		temp.highGrant = this->highGrant - student.highGrant;
		temp.presidentGrant = this->presidentGrant - student.presidentGrant;
		return temp;
	}
	Bookkeeping& operator = (const Bookkeeping& student) {
		this->defaultGrant = student.defaultGrant;
		this->highGrant = student.highGrant;
		this->presidentGrant = student.presidentGrant;
		return *this;
	}
	Bookkeeping& operator +=(const Bookkeeping& student) {
		this->defaultGrant += student.defaultGrant;
		this->highGrant += student.highGrant;
		this->presidentGrant += student.presidentGrant;
		return *this;
	}
	Bookkeeping& operator -=(const Bookkeeping& student) {
		this->defaultGrant -= student.defaultGrant;
		this->highGrant -= student.highGrant;
		this->presidentGrant -= student.presidentGrant;
		return *this;
	}
	Bookkeeping& operator *=(const Bookkeeping& student) {
		this->defaultGrant *= student.defaultGrant;
		this->highGrant *= student.highGrant;
		this->presidentGrant *= student.presidentGrant;
		return *this;
	}


};

//template <typename Cord>
//class Point
//{
//	Cord x;
//	Cord y;
//	Cord z;
//	Cord* array;
//	int size;
//public:
//
//	Point() :x(0), y(0)
//	{
//		cout << "Constructor point" << endl;
//		size = 0;
//		array = new Cord[size];
//	}
//	Point(Cord x, Cord y, Cord z) : Point()
//	{
//		size = 3;
//		array = new Cord[size];
//		this->x = array[0] = x;
//		this->y = array[1] = y;
//		this->z = array[2] = z;
//	}
//	~Point()
//	{
//		delete array;
//	}
//	template <typename Points>
//	Points suma_cord(Points x, Points y, Points z)
//	{
//		x += this->x;
//		y += this->y;
//		z += this->z;
//		cout << "Suma x: " << x << endl;
//		cout << "Suma y: " << y << endl;
//		cout << "Suma z: " << z << endl;
//		return x + y + z;
//	}
//	void print_cord()
//	{
//		cout << "X: " << x << endl;
//		cout << "Y: " << y << endl;
//		cout << "Z: " << z << endl;
//	}
//	//template <typename T>
//	Cord& operator[] (const int index)
//	{
//		if (index >= 0 && index < size)
//			return array[index];
//	}
//	Point operator + (const Point& point)
//	{
//		Point temp;
//		temp.x = this->x + point.x;
//		temp.y = this->y + point.y;
//		temp.z = this->z + point.z;
//		return temp;
//	}
//	Point operator - (const Point& point)
//	{
//		Point temp;
//		temp.x = this->x - point.x;
//		temp.y = this->y - point.y;
//		temp.z = this->z - point.z;
//		return temp;
//	}
//	Point& operator = (const Point& point)
//	{
//		this->x = point.x;
//		this->y = point.y;
//		this->z = point.z;
//		return	*this;
//	}
//	Point& operator +=(const Point& point)
//	{
//		this->x += point.x;
//		this->y += point.y;
//		this->z += point.z;
//
//
//		return *this;
//	}
//	Point& operator -=(const Point& point)
//	{
//		this->x -= point.x;
//		this->y -= point.y;
//		this->z -= point.z;
//
//
//		return *this;
//	}
//	Point& operator *=(const Point& point)
//	{
//		this->x *= point.x;
//		this->y *= point.y;
//		this->z *= point.z;
//
//
//		return *this;
//	}
//
//};