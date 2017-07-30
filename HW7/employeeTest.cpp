#include "employee.h"
#include <iostream>	
#include <iomanip>	
using namespace std;

const int arraySize = 3;

int main()
{
	Employee listEmployee[arraySize];
	listEmployee[0] = Employee("Jenny Jacobs",	"JJ8990", "Accounting",		"President", 	15);
	listEmployee[1] = Employee("Myron Smith",	"MS7571", "IT",				"Programmer", 	5);
	listEmployee[2] = Employee("Chris Raines",	"CR6873", "Manufacturing",	"Engineer", 	30);

	for (int i = 0; i < arraySize; ++i)
	{
		cout << listEmployee[i].getName() << "\t";
		cout << listEmployee[i].getIdNumber() << "\t";
		cout << listEmployee[i].getDepartment() << "\t";
		cout << listEmployee[i].getPosition() << "\t";
		cout << listEmployee[i].getYearsWorked() << "\n";
	}
	system("PAUSE");
	return 0;
}