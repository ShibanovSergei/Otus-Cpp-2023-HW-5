#include "Rectangle.h"

Rectangle::Rectangle(std::ifstream& from)
{
	Deserialize(from);
}

FigureType Rectangle::GetType()
{
	return FigureType::Rectangle;
}

void Rectangle::Move(int dx, int dy)
{
	// Move circle.
}

char* Rectangle::Serialize()
{
	return (char*)"serialized Circle";
}

void Rectangle::Deserialize(std::ifstream& from)
{
	// Deserialize and set properties.
}
