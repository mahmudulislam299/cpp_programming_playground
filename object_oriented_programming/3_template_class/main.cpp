#include <iostream>
using namespace std;

template <class T>
class Mypair 
{
		T values[2];
	public:
		// Mypair(T first , T second): values[0](first), values[1](second)
		// {

		// }
		Mypair(T first, T second)
		{
			values[0] = first;
			values[1] = second;
			cout << "values are " << values[0] << " " << values[1] << endl;
		}

};

int main()
{
	Mypair<int> myIntObject(10, 20);
	Mypair<float> myFloatObject(11.5, 20.5);
}