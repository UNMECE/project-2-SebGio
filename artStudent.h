#ifndef ARTSTUDENT_H
#define ARTSTUDENT_H
#include "student.h"
#include <string>

class ArtStudent : Student
{
	private:
		//can be Art Studio, Art History, or Art Education
		string artEmphasis;
	public:	
		ArtStudent() : Student(){}
		ArtStudent(string name, string gpa, string gradYear, string gradSemester, 
		string enrollYear) 
		: Student(string name, string gpa, string gradYear, string gradSemester, 
		string enrollYear)
		
		void setArtEmphasis();
}

#endif
