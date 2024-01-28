#include "Ellipse.h"

Ellipse::Ellipse(std::ifstream& from)
{
	Deserialize(from);
}

FigureType Ellipse::GetType()
{
	return FigureType::Ellipse;
}

void Ellipse::Move(int dx, int dy)
{
	// Move circle.
}

char* Ellipse::Serialize()
{
	return (char*)"serialized Circle";
}

void Ellipse::Deserialize(std::ifstream& from)
{
	// Deserialize and set properties.
}
