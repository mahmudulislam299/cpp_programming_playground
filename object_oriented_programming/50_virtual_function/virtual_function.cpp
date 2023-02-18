/*
 ### Virtual Function
  - Virtual Function means function existing in class but cant be used 
	- Program that apprears to be calling a function of one class my in reality 
		be calling a function of different class.

 ### Late Binding:

	- compiler defer the decision until the program is running.
	- And at runtime when it come to know which class is pointed by PTR, then appropriate function would be called.
	-	This is called **Dynamic Binding / Late Binding**
*/

#include <iostream>
using namespace std;
/***********************************************/
class base 
{
public:
	int x;

	void show()
	{
		cout << "base" << endl;
	}
};

class derived1 : public base
{
public:
	void show()
	{
		cout << "derived1" << endl;
	}
};

class derived2 : public base
{
public: 
	void show()
	{
		cout << "derived2" << endl;
	}
};

/************************************************************************/

/*
	all person given Bun.
	-> boys are given brown Bun.
	-> girls are given pink Bun.

	here is the concept of dynamic binding

*/


class Person
{
public:
	virtual void give()
	{
		cout <<"Bun"<<endl;
	}
};

class Boy : public Person
{
public:
	void give()
	{
		cout << "Brown Bun" << endl;
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
};


int main()
{
	/****************************************************************************/
	base b ;
	b.show();

	derived1 d1;
	d1.show();

	derived2 d2;
	d2.show();

	base *ptrB1;
	ptrB1 = &d1;
	ptrB1->show();

	base *ptrB2;
	ptrB2 = new derived2;
	ptrB2->show();


	/*******************************************************************/

	Boy b1;
	Girl g1;
	Person p1;

	Person *ptr = NULL ;

	ptr = &p1;
	ptr->give();

	ptr = &b1;
	ptr->give();
	// ptr->hello(); //this is not possible

	ptr = &g1;
	ptr->give();

	return 0;
}
