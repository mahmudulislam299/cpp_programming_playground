// notes on oveerride
/* 
	override keyword serves two puposes:
		1. It shows the reader of the code that "thsi is virtual method, that is overriding a 
		virtual method of the Base class"

		2. The compiler also know that its and override, so it can "check" that you are not altering /
			adding  new methods that you think are override
*/

#include <iostream>

using namespace std;

class Base
{
	public:
		virtual int foo(float x) = 0;
}; // Base

class Derived1 : public Base
{
	public:
	int foo(float x) override
	{
		cout << " output float same as Base" << endl;
	}
}; // Derived1

// this class foo function will show error
// foo funcion input parameter int x 
// but base class foo function input parameter float x
// uncomment the class to show the result

// class Derived2 : public Base
// {
// 	public:
// 		int foo(int x) override // this function will show error
// 		{
// 			cout << "out int not same as Base" << endl;
// 		}
// }; // Derived2

int main()
{
	Derived1 d1;
	d1.foo(12);

	return 0;
}