#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
	private:
		std::string gradStatus;
	public:
		std::string name;
		std::string gpa;
		std::string gradYear;
		std::string gradSemester;
		std::string enrollYear;
		std::string enrollSemester;

		Student(){}
		Student(std::string name, std::string gpa, std::string gradYear, 
			std::string gradSemester, std::string enrollYear, std::string enrollSemester);
		
		
		void setGradStatus(std::string status);
		std::string getGradStatus() { return gradStatus; }

}
;
#endif
