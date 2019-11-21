// AverageSalaries.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float average_salary(int, int*);

int main()
{
	int numofemployees;

	cout << "Number of employees :";
	cin >> numofemployees;

	int* salaries = new int[numofemployees];

	for (int i = 0; i < numofemployees; i++)
	{
		cout << "Salary for employee number " << i + 1 << ":";
		cin >> salaries[i];
	}

	cout << endl << "Average salary :" << average_salary(numofemployees, salaries);

	delete[] salaries;
}


float average_salary(int employees, const int* salary)
{
	float average;
	int sum = 0;

	for (int i = 0; i < employees; i++)
	{
		sum += salary[i];
	}

	average = (float) sum / (float) employees;

	return average;
}