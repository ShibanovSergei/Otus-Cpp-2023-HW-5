#include <fstream>

#include "Models\BaseFigure.h"
#include "Models\Circle.h"
#include "Document.h"

void Document::AddFigure(BaseFigure* figure)
{
	_figures.push_back(figure);
}

void Document::RemoveFigure(BaseFigure* figure)
{
	for (auto fig = _figures.begin(); fig != _figures.end(); fig++)
	{
		if (*fig == figure)
		{
			delete *fig;
			_figures.erase(fig);

			break;
		}
	}
}

void Document::WriteToFile(std::string fileName)
{
	// TO DO: wrapper for working with a file (according to RAII).
	std::ofstream outFile(fileName, std::ios::binary);

	if (outFile.is_open())
	{
		// write title (some general information).

		for(auto figure: _figures)
		{
			outFile << (short)figure->GetType() << figure->Serialize() << std::endl;
		}		
	}

	outFile.close();
}

void Document::ReadFromFile(std::string fileName)
{
	// TO DO: wrapper for working with a file (according to RAII).

	std::ifstream fromFile(fileName, std::ios::binary);
	if (fromFile.is_open())
	{
		// read title (some general information).
		FigureType type;
		while (!fromFile.eof())
		{
			fromFile.read((char*)&type, sizeof(type));

			switch (type)
			{
			case FigureType::Circle:
				//auto v = new Circle(fromFile);
				//_figures.push_back((BaseFigure*)v);
				break;
			}
		}
	}
	fromFile.close();

	//ifstream is("1.bin", ios::binary);

	//int size3, size4;

	//string third;
	//string fourth;

	//is.read((char*)&size3, sizeof(int));

	//char buffer1[size3];
	//is.read(buffer1, size3);

	//is.read((char*)&size4, sizeof(int));

	//char buffer2[size4];
	//is.read(buffer2, size4);

	//is.close();

	//third = string(buffer1);
	//fourth = string(buffer2);

	//cout << size1 << " " << size2 << " " << size3 << " " << size4 << " " << endl;

	//cout << third << " " << fourth << endl;

}