#include "Line.h"

Line::Line(std::ifstream& from)
{
	Deserialize(from);
}

FigureType Line::GetType()
{
	return FigureType::Line;
}

void Line::Move(int dx, int dy)
{
	// Move circle.
}

char* Line::Serialize()
{
	return (char*)"serialized Circle";
}

void Line::Deserialize(std::ifstream& from)
{
	// Deserialize and set properties.
}
