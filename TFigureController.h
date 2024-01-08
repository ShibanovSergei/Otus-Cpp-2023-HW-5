#include <vector>
#include <string>

#include "Document.h"
#include "View.h"

class TFigureController
{
public:
	Document* CreateNewDoc();
	void RepaintViews();
	//void ChangeCurDoc(Document *doc);

	~TFigureController();

private:
	std::vector<Document*> documents;
	Document* curDoc = nullptr;

	std::vector<View*> views;
};