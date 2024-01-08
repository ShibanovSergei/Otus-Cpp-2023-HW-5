#include "main.h"
#include "TFigureController.h"

using namespace std;

int main()
{
	cout << "HW 05" << endl;

	TFigureController controller;

	//controller.CreateNewDoc();

	//controller.AddToCurDoc();
	//controller.AddToCurDoc();
	controller.RepaintViews();

	//controller.SaveCurDoc("");

	//controller.CloseAllDocs();
	controller.RepaintViews();

	//controller.ReadDoc("");
	//controller.RemoveFromDoc();
	controller.RepaintViews();

	return 0;
}


