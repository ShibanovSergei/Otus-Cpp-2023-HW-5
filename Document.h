#include <list>
#include <string>

#include "Models/BaseFigure.h"

class Document 
{
public:
	void ReadFromFile(std::string fileName);
	void WriteToFile(std::string fileName);
	void AddFigure(BaseFigure* figure);
	void RemoveFigure(BaseFigure* figure);
	void ~Document();

private:
	std::list<BaseFigure*> _figures;
};