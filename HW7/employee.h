#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
class Employee	
{
	private:
		std::string name;
		std::string idNumber;
		std::string department;
		std::string position;
		int yearWorked;

	public:
		Employee(std::string, std::string, std::string, std::string, int); //constructor
		Employee(std::string, std::string);
		Employee();
		std::string getName();
		std::string getIdNumber();
		std::string getDepartment();
		std::string getPosition();
		int getYearsWorked();
};
#endif