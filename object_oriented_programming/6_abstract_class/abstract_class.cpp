/*
	### Abstract Class
	 - abstract class  is used when we never want to instantiate object of BASE class

	 - in abstract class object of parent class does not exist


	this is a pure virtual function >>>
	virtual void give() = 0 ; 
	- to make abstract class make virtual function

*/

#include <iostream>
using namespace std;


/*
	all person given Bun.
	-> boys are given brown Bun.
	-> girls are given pink Bun.

	here is the concept of dynamic binding

*/


class Person // now this is abstract class bcoz of pure virtual function
{
public:
	virtual void give() = 0 ; //this is a pure virtual function

	void give2()
	{
		cout <<"Bun2"<<endl;
	}
};

class Boy : public Person
{
public:
	void give()
	{
		cout << "Brown Bun" << endl;
	}

	void give2()
	{
		cout << "Brown Bun2" << endl;
	}
	
	void hello()
	{
		cout << "this is boy" << endl;
	}
};

class Girl : public Person
{
public:
	void give()
	{
		cout << "pink Bun" << endl;
	}

	void give2()
	{
		cout << "pink Bun2" << endl;
	}
};


int main()
{
	Boy b1;
	Girl g1;
	// Person p1; this is not possible bcoz Person is abstract class

	Person *ptr = NULL ;

	ptr = &b1;
	ptr->give();
	ptr->give2();
	// ptr->hello(); //this is not possible bcoz base class ptr can not call derived class function

	ptr = &g1;
	ptr->give();
	ptr->give2();

	return 0;
}
