#include "BaseFigure.h"

class Rectangle
{
public:
	Rectangle(unsigned llx, unsigned lly, unsigned rux, unsigned ruy) {};
	Rectangle(std::ifstream& from);
	virtual FigureType GetType();
	virtual void Move(int dx, int dy);
	virtual char* Serialize();

private:
	virtual void Deserialize(std::ifstream& from);
};