#include "main.h"
#include "TFigureController.h"
#include "Models/BaseFigure.h"
#include "Models/Circle.h"
#include "Models/Ellipse.h"
#include "Models/Line.h"
#include "Models/Rectangle.h"
#include "Models/Square.h"

using namespace std;

int main()
{
	cout << "HW 05" << endl;

	TFigureController controller;

	controller.CreateNewDoc();

	controller.AddToCurDoc((BaseFigure*)new Circle(10, 10, 5));
	controller.AddToCurDoc((BaseFigure*)new Rectangle(40,40, 100, 100));
	controller.RepaintViews();

	controller.SaveCurDoc("fileName");

	controller.CloseAllDocs();
	controller.RepaintViews();

	controller.OpenDoc("fileName");

	BaseFigure* figure = nullptr;	
	// figure = ...  - User select figure for delete.
	controller.RemoveFromCurDoc(figure);
	controller.RepaintViews();

	return 0;
}


