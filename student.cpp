#include "student.h"
#include <iostream>

Student::Student(std::string name, std::string gpa, std::string gradYear, 
	std::string gradSemester, std::string enrollYear, std::string enrollSemester)
{
	this->name = name; 
	this->gpa = gpa; 
	this->gradYear = gradYear; 
	this->gradSemester = gradSemester;
	this->enrollYear = enrollYear; 
	this->enrollSemester = enrollSemester;
}

void Student::setGradStatus(std::string status)
{
	if (status == "Graduate" || status == "Undergraduate")
	{
		gradStatus = status;
	}
	else
	{
		std::cout << "Error: Graduation Status can only be Graduate or Undergraduate." << std::endl;
	}
}