#include "StudentsClass.h"
#include "PointStudent.h"
#include <iostream>
#include <string>
using namespace std;

void Student::inputStudent()
{
	cin.ignore();
	cout << "Input full name student: ";
	getline(cin, fullName);
	cout << "Input Number student: ";
	getline(cin, numberStudent);
	cout << "Input sex student: ";
	getline(cin, sex);
	cout << "Input day born: ";
	getline(cin, dayBorn);
	thePointOfStudent.inputPoint();
}

void Student::outputStudent()
{
	cout << "Full name: " << fullName << endl;
	cout << "Number student: " << numberStudent << endl;
	cout << "Sex student: " << sex << endl;
	cout << "Day born: " << dayBorn << endl;
	thePointOfStudent.outputPoint();
}