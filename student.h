#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student
{
	private:
		string gradStatus;
	public:
		string name;
		string gpa;
		string gradYear;
		string gradSemester;
		string enrollYear;
		string enrollSemester;

		Student(){}
		Student(string name, string gpa, string gradYear, string gradSemester, 
		string enrollYear)
		{this.name = name; this.gpa = gpa; this.gradYear = gradYear; this.gradSemester = gradSemester; 
		this.enrollYear = enrollYear;}
		
		void setGradStatus();

}

#endif
