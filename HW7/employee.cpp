#include "employee.h"
#include <iostream>	
#include <iomanip>	
using namespace std; 

Employee::Employee(string eName, string eIdNumber, string eDepartment, string ePosition, int eYearWorked)
{
	name = eName;
	idNumber = eIdNumber;
	department = eDepartment;
	position = ePosition;
	yearWorked = eYearWorked;
}

Employee::Employee(string eName, string eIdNumber)
{
	name = eName;
	idNumber = eIdNumber;
	department = "";
	position = "";
	yearWorked = 0;
}

Employee::Employee()
{
	name = "";
	idNumber = "";
	department = "";
	position = "";
	yearWorked = 0;
}

string Employee::getName()
{
	return name;
}

string Employee::getIdNumber()
{
	return idNumber;
}

string Employee::getDepartment()
{
	return department;
}

string Employee::getPosition()
{
	return position;
}

int Employee::getYearsWorked()
{
	return yearWorked;
}