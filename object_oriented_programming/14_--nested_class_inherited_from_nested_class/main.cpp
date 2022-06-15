/*
	issue with the code
*/

#include <iostream>

using namespace std;

class A
{
	public:
		class B
		{
			public:
				// constructor
				B(int i) : data(i) 
				{
					cout << "inner parent constructor called" << endl;
				}
				int data;
		}; //B
}; // A


// now class C will be inherted from class A
class C : public A
{
	public:
	class D : public A :: B
	{

	}; // D
}; //C

C::D::D() :B(0) { }

int main()
{
	// C::D obj(10);
	return 0;
}