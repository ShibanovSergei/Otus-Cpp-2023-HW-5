#include "TFigureController.h"

TFigureController::~TFigureController()
{
	for (auto doc : documents)
		delete doc;
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

