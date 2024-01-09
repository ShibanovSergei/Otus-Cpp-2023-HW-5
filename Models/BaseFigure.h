#include <fstream>

#include "../Common.h"

#pragma once

class BaseFigure
{
public:
	FigureColor Color;

	virtual FigureType GetType() = 0;
	virtual void Move(int dx, int dy) = 0;
	virtual char* Serialize() = 0;

protected:
	virtual void Deserialize(std::ifstream& from) = 0;
};