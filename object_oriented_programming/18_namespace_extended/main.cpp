// Important notes 
/*
1. You need to use scope resolution (::) when you are defining functions that are declared 
	inside any namespace.

2. You need not to use scope resolution (::) when calling functions that are declared 
	inside any namespace. Make sure you have used using namespace name_of_namespace; before calling 
	namespace's functions or identifiers. *** using namespace MySpace; ***

3. You need to add an extra scope resolution (::) when you define the functions 
	of class which are inside any namespace. for example: void MySpace :: Dummy :: func2() is used 
	in the below example to define func2 function of Dummy class. Dummy class was declared inside MySpace 
	namespace. So, 2 scope resolution (::) operators are used here.

*/


// important notes for *** using directective ***
/*
1. using keyword allows you to import an entire namespace into your program with a global scope.
2. using directive can be used to import a namespace into another namespace or into any program.

Example--->>

/// File saved in "File1.h"

namespace MySpace
{
 int num1, num2;
 class DummyClass
 { 
  ///... some code ...
 };
}


/// Use of using directive 

/// include File1.h to use MySpace namespace

#include "File1.h"
namespace MyNewSpace
{
 /// importing MySpace namespace with the help of using directive
 
 using namespace MySpace;
 int num3, num4;
 DummyClass D1;
}


*/

// Myspace is declared here
namespace Myspace
{
	int num1;
	int func1();
}

#include<iostream>
using namespace std;

// agian mynamespace is declare here
namespace Myspace
{
	class Dummy
	{
		public:
			void func2();
	};
}

int Myspace :: func1()
{
	cout << "hellow this is func1" << endl;
	return 10;
}

void Myspace :: Dummy :: func2()
{
	cout<< "thsis Dummy class's func2" << endl;
}


using namespace Myspace; // for using this we need not use scope resolution

int main()
{
	num1 = 255;
	func1();
	Dummy obj;
	obj.func2();
	return 0;
}


