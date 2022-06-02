#include <iostream>
using namespace std;

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