#ifndef ARTSTUDENT_H
#define ARTSTUDENT_H
#include "student.h"
#include <string>

class ArtStudent : public Student
{
	private:
		//can be Art Studio, Art History, or Art Education
		std::string artEmphasis;
	public:	
		ArtStudent() : Student(){}
		ArtStudent(std::string name, std::string gpa, std::string gradYear, std::string gradSemester,
			std::string enrollYear, std::string enrollSemester)
			: Student(name, gpa, gradYear, gradSemester, enrollYear, enrollSemester) {}
		
		void setArtEmphasis(std::string emphasis);
		std::string getArtEmphasis() { return artEmphasis; }
};
#endif
