#include <iostream>
#include <windows.h>
#include "StudentsClass.h"
#include "PointStudent.h"
#include "List.h"
#include <string>
#include <algorithm>

using namespace std;

int n = 1000;
int first = 1;
int i = 0;
int k = 1;
int l = 1;
int* deleteStd = new int[n];
Student* student = new Student[n];

void menu()
{
	cout << "----------*----------" << endl;
	cout << "1. Add student into list" << endl;
	cout << "2. See the list student  " << endl;
	cout << "3. Delete student" << endl;
	cout << "4. Exit" << endl;
	cout << "----------*----------" << endl;
}

void inputListStudent()
{
	if (first == 1)
	{
		for (int j = 1; j <= i; j++)
		{
			student[j].inputStudent();
		}
	}
	else
	{
		for (int j = i; j <= i; j++)
		{
			student[j].inputStudent();
		}
	}
	first++;
}

void outputListStudent()
{
	for (int j = 1; j <= i; j++)
	{
		if (j == deleteStd[l]);
		else
		{
			cout << "Student " << j << endl;
			student[j].outputStudent();
			cout << endl;
		}
	}
	l = 1;
}

void deleteStudent()
{
	cout << "You deleted Student. Please review list student" << endl;
}

void Home()
{
	int n;
	menu();
	cout << "You choose number you want: ";
	cin >> n;
	switch (n)
	{
		case 1:
		{
			system("cls");
			int howManyStd;
			cout << "How many input student: ";
			cin >> howManyStd;
			i = i + howManyStd;
			inputListStudent();
			system("cls");
			Home();
			break;
		}
		case 2:
		{
			system("cls");
			outputListStudent();
			cout << "-----------" << endl;
			cout << "You continue (1 continue or 2 exit)" << endl;
			int continues;
			cin >> continues;
			if (continues == 1)
			{
				system("cls");
				Home();
			}
			else
			{
				break;
			}
			break;
		}
		case 3:
		{
			system("cls");
			cout << "Input number delete: ";
			cin >> deleteStd[k];
			sort(deleteStd, deleteStd + k);
			k++;
			deleteStudent();
			cout << "-----------" << endl;
			outputListStudent();
			cout << "-----------" << endl;
			cout << "You continue (1 continue or 2 exit)" << endl;
			int continues;
			cin >> continues;
			if (continues == 1)
			{
				system("cls");
				Home();
			}
			else
			{
				break;
			}
			break;
		}
		case 4:
		{
			break;
		}
	}
}