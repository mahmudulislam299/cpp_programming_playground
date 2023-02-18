#include <iostream>

using namespace std;

class A 
{
	public:
		//constructor
		A()
		{
			cout << "class A object created" << endl;
		}

		//destructor
		~A()
		{
			cout << ">>>>class A object deleted" << endl;
		}

		void dosomethingforA()
		{
			B b;
			b.dosomethingforB();
			cout << "I am doing something for A" << endl;
		}

		void dosomethingrandom()
		{
			int number = rand();
			cout << "printing a random number : " << number << endl;
		}

		class B 
		{
			public:
				B()
				{
					cout << "class B object created" << endl;
				}

				~B()
				{
					cout << ">>>>> class B object deleted" << endl;
				}

				void dosomethingforB()
				{
					A a;
					cout << "i am doing something for B" << endl;
					a.dosomethingrandom();
				}

		}; //B


}; //A

int main()
{
	A a;
	a.dosomethingforA();
	return 0;
}