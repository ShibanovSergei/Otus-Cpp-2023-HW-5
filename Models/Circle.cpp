#include "Circle.h"

Circle::Circle(std::ifstream& from)
{	
	Deserialize(from);
}

FigureType Circle::GetType()
{
	return FigureType::Circle;
}

void Circle::Move(int dx, int dy)
{
	// Move circle.
}

char* Circle::Serialize()
{
	return (char*)"serialized Circle";
}

void Circle::Deserialize(std::ifstream& from)
{
	// Deserialize and set properties.
}
