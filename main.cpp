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
	artStudents[2]->name = "Brian Anderson";
	artStudents[3]->name = "Jenna Gonzalez";

	PhysicsStudents[0]->name = "Gabriel Volodya";
	PhysicsStudents[1]->name = "Isabella Redomond";
	PhysicsStudents[2]->name = "";
	PhysicsStudents[3]->name = "";

	artStudents.pushback (new ArtStudent("Joanne Smith", "3.5", "2015", "2011", "Fall"));
	physicsStudents.push_back(new PhysiscsStudent("George Steel", "3.7", "2028", "2020", "Fall"))
	artStudents[4]->setGradStatus("Graduate");
	artStudents[4]->setArtEmphasis("Art History");
	physicsStudents[4]->setGradStatus("Undergrad");
	physicsStudents[4]->setConcentration("Biophysics");


	std::ifstream in;
	in.open("students.txt", std::ios::in);

	if (!in.is_open())
	{
			std::cout << "Error openening students.txt. Data will not be saved." << std::endl;
		return 1;
	}




}
