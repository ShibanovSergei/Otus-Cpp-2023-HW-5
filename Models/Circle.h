#include "BaseFigure.h"

class Circle
{
public:
	Circle(unsigned cX, unsigned cY, unsigned R) {};
	Circle(std::ifstream& from);
	virtual FigureType GetType();
	virtual void Move(int dx, int dy);
	virtual char* Serialize();

private:
	virtual void Deserialize(std::ifstream& from);
};