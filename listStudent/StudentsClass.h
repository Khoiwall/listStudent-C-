#pragma once
#include <string>
#include "PointStudent.h"
using namespace std;

class Student
{
private:
	string fullName;
	string sex;
	string numberStudent;
	string dayBorn;
	Point thePointOfStudent;
public:
	void inputStudent();
	void outputStudent();
};
