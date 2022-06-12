#include <iostream>

using namespace std;

class Accumulator
{
	private:
		int value;
	public:
		Accumulator(int value)
		{
			this->value = value;
		}

		Accumulator& add(int n)
		{
			value+=n;
			return *this;
		}

		Accumulator& mult(int n)
		{
			value*=n;
			return *this;
		}

		int get()
		{
			return value;
		}
};

int main()
{
	Accumulator acc(10);

	acc.add(5).add(6).mult(7);
	//left to right
	//10+5=15
	//15+6=21
	//21*7=147

	cout<< acc.get(); //147
	return 0;
}