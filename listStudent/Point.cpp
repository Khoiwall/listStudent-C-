#include "PointStudent.h"
#include <iostream>

using namespace std;

void Point::inputPoint()
{
	cout << "Input point math: ";
	cin >> pointMath;
	cout << "Input point physical: ";
	cin >> pointPhysical;
	cout << "Input point chemycal: ";
	cin >> pointChemycal;
}

void Point::outputPoint()
{
	cout << "Point math: " << pointMath << endl;
	cout << "Point physical: " << pointPhysical << endl;
	cout << "Point Chemycal: " << pointChemycal << endl;
	cout << "Point medium: " << (pointMath + pointChemycal + pointPhysical) / 3;
}