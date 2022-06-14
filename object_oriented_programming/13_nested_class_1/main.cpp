/*
	Nested Class in C++
	>> Class inside a class is called nested class 
	>> nested classes are declared another enclosing class 
	>> a nested class is a member of class and it follows 
		the same access rights that followed by differenrt member of class
	>> The members of an enclosing class have no other special access to member of 
		nested class. The normal access rules shall be carried out.
	>> If nested class is declared after public access specifiers inside the enclosing 
		class then you must add scope resolution (::) during creating its object inside mian function
*/

#include <iostream>

using namespace std;

class A
{
	private:
		int digit;

	public:
		void setDigit(int n)
		{
			digit = n;
		}

		void showDigit()
		{
			cout << "The digit is " <<digit << endl;
		}

		//declaring nested class
		class B 
		{
			private:
				int num;
			
			public:
				void setData(int n)
				{
					num = n;
				}

				void showData()
				{
					cout << "The number is " << num << endl;
				}
		}; // class B
}; // class A

int main()
{
	A objA;
	objA.setDigit(18);
	objA.showDigit();

	A :: B objB;
	objB.setData(15);
	objB.showData();

	
	return 0;
}