#include <iostream>
using namespace std;

/**************************************************************/

class Base
{
public:
	~Base()
	{
		cout << "base1 class destroyed" << endl;
		cout << "not full object deleted.. only base object deletedd" << endl;
	}
};

class Derived: public Base
{
public:
	~Derived()
	{
		cout << "Derived1 class destroyed" << endl;
	}
};

/*************************************/

class Base2
{
public:
	virtual ~Base2() // <--------------------- for this virtual entire object will be deleted
	{
		cout << "base2 class destroyed" << endl;
		cout << "for the virtual destructor full object deleted" << endl;
	}
};

class Derived2: public Base2
{
public:
	~Derived2()
	{
		cout << "Derived2 class destroyed" << endl;
	}
};

/********************************************************************/




int main()
{
	Base *b1 = new Derived;
	delete b1;

	cout << endl << endl;

	Base2 *b2 = new Derived2;
	delete b2;
}