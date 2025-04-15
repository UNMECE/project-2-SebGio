#ifndef PHYSICSSTUDENT_H
#define PHYSICSSTUDENT_H
#include <string>
#include "student.h"

class PhysicsStudent : Student
{
	private:
		//can be Biophysics or Earth and Planetary Sciences
		string concentration;
	public:	
		PhysicsStudent() : Student(){}
		PhysicsStudent(string name, string gpa, string gradYear, string gradSemester,
		string enrollYear)
		: Student(string name, string gpa, string gradYear, string gradSemester,
		string enrollYear)
	
		void setConcentration();
}

#endif
