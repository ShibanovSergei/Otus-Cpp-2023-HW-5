#include "BaseFigure.h"

class Ellipse
{
public:
	Ellipse(std::ifstream& from);
	virtual FigureType GetType();
	virtual void Move(int dx, int dy);
	virtual char* Serialize();

private:
	virtual void Deserialize(std::ifstream& from);
};