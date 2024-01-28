#include "Square.h"

Square::Square(std::ifstream& from)
{
	Deserialize(from);
}

FigureType Square::GetType()
{
	return FigureType::Circle;
}

void Square::Move(int dx, int dy)
{
	// Move circle.
}

char* Square::Serialize()
{
	return (char*)"serialized Circle";
}

void Square::Deserialize(std::ifstream& from)
{
	// Deserialize and set properties.
}
