#include <iostream>

#include "Window_mgr.h"
#include "Screen.h"

using std::cout; using std::endl;

int main(){

	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).setCharAtCursor('#').display(cout);
	cout << endl;
	myScreen.display(cout);
	cout << endl;

	return 0;
}


