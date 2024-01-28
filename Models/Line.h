class Line;
#include "BaseFigure.h"

class Line
{
public:
	Line(std::ifstream& from);
	virtual FigureType GetType();
	virtual void Move(int dx, int dy);
	virtual char* Serialize();

private:
	virtual void Deserialize(std::ifstream& from);
};