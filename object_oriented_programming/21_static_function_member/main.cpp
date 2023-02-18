#include <iostream>

using namespace std;

// To create a static member function we need to use the static keyword 
// while declaring the function. 
// Since static member variables are class properties and not object properties, 
// to access them we need to use the class name instead of the object name.



// Properties of static member functions:
// * A static function can only access other static variables or functions present in the same class
// * Static member functions are called using the class name. 
// 			Syntax- class_name::function_name( )


class Example 
{
	static int Number;
	int n;

	public:
	void set_n()
	{
		n = ++Number;
	}

	void show_n()
	{
		cout<< "value of n = "<< n << endl; 
	}

	static void show_Number()
	{
		cout << "value of Number = " << Number << endl;
	}
};


int Example::Number;

int main()
{
	Example example1, example2;

	example1.set_n();
	example2.set_n();

	example1.show_n();
	example2.show_n();


	Example::show_Number();

	return 0;
}