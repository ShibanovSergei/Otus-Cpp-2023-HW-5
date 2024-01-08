#include <list>

#include "Models\BaseFigure.h"
#include <string>

class Document 
{
public:
	void ReadFromFile(std::string fileName);
	void WriteToFile(std::string fileName);
	void AddFigure(BaseFigure* figure);
	void RemoveFigure(BaseFigure* figure);

private:
	std::list<BaseFigure*> _figures;
};