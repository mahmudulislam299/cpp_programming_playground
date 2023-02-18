#include <iostream>
using namespace std;


// Static Member Variables
// Variables classified as static are also a part of C. 
// suppose in a function there are 2 variables, one is a normal variable and 
// the other one is a static variable. 
// The normal variable is created when the function is called and its scope is limited. 
// While the static variable is created once and destroyed at the end of the program. 
// These variables have a lifetime throughout the program.

class Dummy 
{
	public:
		static int n;
		int a;
		Dummy()
		{
			n++;
			cout << "value of n: "<< n  << " value of a: "<< endl;
		}

		Dummy(int input)
		{
			a = input;
			cout << "value of n: "<< n  << " value of a: "<< endl;
		}
};

int Dummy::n=0;


int main()
{
	Dummy a;
	Dummy b[2];

	Dummy *c;
	c = new Dummy;
	delete c;
	Dummy d(5);
	return 0;
}