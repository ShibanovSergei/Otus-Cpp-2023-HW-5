#include <vector>
#include <string>

#include "Document.h"
#include "View.h"

class TFigureController
{
public:
	Document* CreateNewDoc();
	void RepaintViews();
	void AddToCurDoc(BaseFigure* figure);
	void SaveCurDoc(std::string fileName);
	void CloseAllDocs();
	void OpenDoc(std::string fileName);
	void RemoveFromCurDoc(BaseFigure* figure);

	~TFigureController();

private:
	std::vector<Document*> documents;
	Document* curDoc = nullptr;

	std::vector<View*> views;
};