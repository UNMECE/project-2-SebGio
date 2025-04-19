#include "physicsStudent.h"
#include <iostream>

void PhysicsStudent::setConcentration(std::string concentration)
{
	if (concentration == "Biophysics" || concentration == "Earth and Planetary Sciences")
	{
		this->concentration = concentration;
	}
	else
	{
		std::cout << "Error: Concentration can only be Biophysics or Earth and Planetary Sciences." << std::endl;
	}
}