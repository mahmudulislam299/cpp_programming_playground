#include <iostream>
using namespace std;

class base
{
public:
	int x;

	void show()
	{
		cout << "base" << endl;
	}

};

class derived1: public base
{
public:
	void show()
	{
		cout << "derived 1" << endl;
	}

	void showForderived1()
	{
		cout << "only for derivied 1";
	}

};

class derived2: public base
{
public:
	void show()
	{
		cout << "derived 2" << endl;
	}
};

int main()
{
	base b ;
	b.show();
	
	derived1 d1;
	d1.show();
	d1.showForderived1();

	derived2 d2;
	d2.show();

	base *ptrB1 = &d1;
	ptrB1->show(); 
	// ptrB1->showForderived1(); this is not possible
	base *ptrB2 = new derived2;
	ptrB2->show();

	return 0;
}