#include <iostream>
#include "rectangle.h"
using namespace std;


/*
The only difference between defining a member function completely within the class definition or to just include its declaration in the function and define it later outside the class, is that in the first case the function is automatically considered an inline member function by the compiler, while in the second it is a normal (not-inline) class member function. This causes no differences in behavior, but only on possible compiler optimizations.
*/




void learn__Constructior()
{
	Rectangle r, r2(10,15);

	r.setValue(5,10);
	r.printValue();

	r2.printValue();
}

void learn__contructorInitialization()
{
	Rectangle foo(1, 2); // funtional form
	Rectangle bar {3, 4}; //uniform init
	Rectangle qux = {5, 6}; //POD - like

	foo.printValue();
	bar.printValue();
	qux.printValue();
}


int main()
{
	cout << "hello world!\n";

	learn__Constructior();

	learn__contructorInitialization();
	
	learn__contructorInitialization();
	return 0;
}

