#include "artStudent.h"
#include <iostream>

void ArtStudent::setArtEmphasis(std::string emphasis)
{
	if (emphasis == "Art Studio" || emphasis == "Art History" || emphasis == "Art Education")
	{
		artEmphasis = emphasis;
	}
	else
	{
		std::cout << "Error: Art Emphasis can only be Art Studio, Art History, or Art Education." << std::endl;
	}
}