#include "artStudent.h"
#include "physicsStudent.h"
#include <string>
#include <fstream>
#include <vector>
#include <iostream>

int main()
{
	std::vector<ArtStudent *> artStudents;
	std::vector<PhysicsStudent *> physicsStudents;

	for (int i = 0; i < 4; ++i)
	{
		artStudents.push_back(new ArtStudent);
		physicsStudents.push_back(new PhysicsStudent);
	}
	artStudents[0]->name = "Carol Miller";
	artStudents[1]->name = "Jack Taylor";
	artStudents[2]->name = "Gabriel Volodya";
	artStudents[3]->name = "Charlie Gonzalez";
	artStudents[0]->gpa = "3.2";
	artStudents[1]->gpa = "4.6";
	artStudents[2]->gpa = "3.3";
	artStudents[3]->gpa = "4.0";
	artStudents[0]->gradYear = "2020";
	artStudents[1]->gradYear = "2025";
	artStudents[2]->gradYear = "2019";
	artStudents[3]->gradYear = "2026";
	artStudents[0]->gradSemester = "Spring";
	artStudents[1]->gradSemester = "Spring";
	artStudents[2]->gradSemester = "Spring";
	artStudents[3]->gradSemester = "Spring";
	artStudents[0]->enrollYear = "2016";
	artStudents[1]->enrollYear = "2021";
	artStudents[2]->enrollYear = "2015";
	artStudents[3]->enrollYear = "2022";
	artStudents[0]->enrollSemester = "Fall";
	artStudents[1]->enrollSemester = "Fall";
	artStudents[2]->enrollSemester = "Fall";
	artStudents[3]->enrollSemester = "Fall";
	artStudents[0]->setGradStatus("Graduate");
	artStudents[1]->setGradStatus("Undergraduate");
	artStudents[2]->setGradStatus("Graduate");
	artStudents[3]->setGradStatus("Undergraduate");
	artStudents[0]->setArtEmphasis("Art History");
	artStudents[1]->setArtEmphasis("Art Studio");
	artStudents[2]->setArtEmphasis("Art Education");
	artStudents[3]->setArtEmphasis("Art Education");


	physicsStudents[0]->name = "Brian Anderson";
	physicsStudents[1]->name = "Isabella Redmond";
	physicsStudents[2]->name = "Celine Astride";
	physicsStudents[3]->name = "Iris Blanche";
	physicsStudents[0]->gpa = "4.4";
	physicsStudents[1]->gpa = "4.5";
	physicsStudents[2]->gpa = "3.9";
	physicsStudents[3]->gpa = "3.2";
	physicsStudents[0]->gradYear = "2025";
	physicsStudents[1]->gradYear = "2019";
	physicsStudents[2]->gradYear = "2020";
	physicsStudents[3]->gradYear = "2027";
	physicsStudents[0]->gradSemester = "Spring";
	physicsStudents[1]->gradSemester = "Spring";
	physicsStudents[2]->gradSemester = "Spring";
	physicsStudents[3]->gradSemester = "Spring";
	physicsStudents[0]->enrollYear = "2017";
	physicsStudents[1]->enrollYear = "2011";
	physicsStudents[2]->enrollYear = "2012";
	physicsStudents[3]->enrollYear = "2019";
	physicsStudents[0]->enrollSemester = "Fall";
	physicsStudents[1]->enrollSemester = "Fall";
	physicsStudents[2]->enrollSemester = "Fall";
	physicsStudents[3]->enrollSemester = "Fall";
	physicsStudents[0]->setGradStatus("Undergraduate");
	physicsStudents[1]->setGradStatus("Graduate");
	physicsStudents[2]->setGradStatus("Graduate");
	physicsStudents[3]->setGradStatus("Undergraduate");
	physicsStudents[0]->setConcentration("Earth and Planetary Sciences");
	physicsStudents[1]->setConcentration("Biophysics");
	physicsStudents[2]->setConcentration("Biophysics");
	physicsStudents[3]->setConcentration("Earth and Planetary Sciences");


	artStudents.push_back (new ArtStudent("Joanne Smith", "3.5", "2015", "Spring", "2011", "Fall"));
	physicsStudents.push_back(new PhysicsStudent("George Steel", "3.7", "2028", "Spring", "2020", "Fall"));
	artStudents[4]->setGradStatus("Graduate");
	artStudents[4]->setArtEmphasis("Art History");
	physicsStudents[4]->setGradStatus("Undergraduate");
	physicsStudents[4]->setConcentration("Biophysics");


	std::ofstream out;
	out.open("students.txt");

	if (!out.is_open())
	{
		std::cout << "Error openening students.txt. Data will not be saved." << std::endl;
		std::cout << "Art Students: " << std::endl;
		for (int i = 0; i < artStudents.size(); ++i)
		{
			std::cout << "------------------------------------" << std::endl 
				<< i + 1 << std::endl 
				<< "------------------------------------" << std::endl
				<< "Name: " << artStudents[i]->name << std::endl
				<< "GPA: " << artStudents[i]->gpa << std::endl
				<< "Graduation Year: " << artStudents[i]->gradYear << std::endl
				<< "Graduation Semester: " << artStudents[i]->gradSemester << std::endl
				<< "Enrolled Year: " << artStudents[i]->enrollYear << std::endl
				<< "Enrolled Semester: " << artStudents[i]->enrollSemester << std::endl
				<< "Graduation Status: " << artStudents[i]->getGradStatus() << std::endl
				<< "Art Emphasis: " << artStudents[i]->getArtEmphasis() << std::endl;
		}
		std::cout << "Pysics Students: " << std::endl;
		for (int i = 0; i < physicsStudents.size(); ++i)
		{
			std::cout << "------------------------------------" << std::endl
				<< i + 1 << std::endl 
				<< "------------------------------------" << std::endl
				<< "Name: " << physicsStudents[i]->name << std::endl
				<< "GPA: " << physicsStudents[i]->gpa << std::endl
				<< "Graduation Year: " << physicsStudents[i]->gradYear << std::endl
				<< "Graduation Semester: " << physicsStudents[i]->gradSemester << std::endl
				<< "Enrolled Year: " << physicsStudents[i]->enrollYear << std::endl
				<< "Enrolled Semester: " << physicsStudents[i]->enrollSemester << std::endl
				<< "Graduation Status: " << physicsStudents[i]->getGradStatus() << std::endl
				<< "Concentration: " << physicsStudents[i]->getConcentration() << std::endl;
		}
		return 1;
	}
	else
	{
		out << "Art Students: " << std::endl;
		for (int i = 0; i < artStudents.size(); ++i)
		{
			out << "------------------------------------" << std::endl
				<< i + 1 << std::endl 
				<< "------------------------------------" << std::endl
				<< "Name: " << artStudents[i]->name << std::endl
				<< "GPA: " << artStudents[i]->gpa << std::endl
				<< "Graduation Year: " << artStudents[i]->gradYear << std::endl
				<< "Graduation Semester: " << artStudents[i]->gradSemester << std::endl
				<< "Enrolled Year: " << artStudents[i]->enrollYear << std::endl
				<< "Enrolled Semester: " << artStudents[i]->enrollSemester << std::endl
				<< "Graduation Status: " << artStudents[i]->getGradStatus() << std::endl
				<< "Art Emphasis: " << artStudents[i]->getArtEmphasis() << std::endl;
		}
		out << "Pysics Students: " << std::endl;
		for (int i = 0; i < physicsStudents.size(); ++i)
		{
			out << "------------------------------------" << std::endl 
				<< i + 1 << std::endl
				<< "------------------------------------" << std::endl
				<< "Name: " << physicsStudents[i]->name << std::endl
				<< "GPA: " << physicsStudents[i]->gpa << std::endl
				<< "Graduation Year: " << physicsStudents[i]->gradYear << std::endl
				<< "Graduation Semester: " << physicsStudents[i]->gradSemester << std::endl
				<< "Enrolled Year: " << physicsStudents[i]->enrollYear << std::endl
				<< "Enrolled Semester: " << physicsStudents[i]->enrollSemester << std::endl
				<< "Graduation Status: " << physicsStudents[i]->getGradStatus() << std::endl
				<< "Concentration: " << physicsStudents[i]->getConcentration() << std::endl;
		}
		std::cout << "Successfully wrote data to students.txt." << std::endl;
	}
	
	//free memory
	for (int i = 0; i < 5; ++i)
	{
		delete artStudents[i];
		delete physicsStudents[i];
		
	}
	artStudents.clear();
	physicsStudents.clear();

	return 0;
}
