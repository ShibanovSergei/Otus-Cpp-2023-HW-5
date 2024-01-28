#include "TFigureController.h"

TFigureController::~TFigureController()
{
	CloseAllDocs();
}

Document* TFigureController::CreateNewDoc()
{
	auto doc = new Document();
	documents.push_back(doc);
	if (curDoc == nullptr)
		curDoc = doc;

	return doc;
}

void TFigureController::RepaintViews()
{
}

void TFigureController::AddToCurDoc(BaseFigure* figure)
{
	curDoc->AddFigure(figure);
}

void TFigureController::SaveCurDoc(std::string fileName)
{
	curDoc->WriteToFile(fileName);
}

void TFigureController::CloseAllDocs()
{
	for (auto doc : documents)
		delete doc;

	documents.clear();
}

void TFigureController::OpenDoc(std::string fileName)
{
	auto openedDoc = new Document();
	openedDoc->ReadFromFile(fileName);
	documents.push_back(openedDoc);
}

void TFigureController::RemoveFromCurDoc(BaseFigure* figure)
{
	if (figure != nullptr)
	{
		curDoc->RemoveFigure(figure);
	}
}