#ifndef PHYSICSSTUDENT_H
#define PHYSICSSTUDENT_H
#include <string>
#include "student.h"

class PhysicsStudent : public Student
{
	private:
		//can be Biophysics or Earth and Planetary Sciences
		std::string concentration;
	public:	
		PhysicsStudent() : Student(){}
		PhysicsStudent(std::string name, std::string gpa, std::string gradYear, std::string gradSemester,
			std::string enrollYear, std::string enrollSemester)
			: Student( name, gpa, gradYear, gradSemester, enrollYear, enrollSemester) {}
	
		void setConcentration(std::string concentration);
		std::string getConcentration() { return concentration; }
};
#endif
