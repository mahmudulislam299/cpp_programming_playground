/* use data members of one class into another class using object
	- this can be done 3 ways
	1. using friend class 
	2. using inheritance
	3. declare object of class to another class
*/

#include <iostream>
using namespace std;

// #define FRIEND_CLASS
// #define INHERITANCE
#define PUBLIC


#if defined FRIEND_CLASS

// Making retest a friend of test

class Retest;

class Test 
{
	int a, b, c ;
	public:
		void showTime()
		{
			cout << "hello world" << endl;
		}

		friend class Retest; //declaring the class friend gives the friend class access to ALL the members of the class 
}; //Test

class Retest
{
	int a1, b1, c1;
	Test t;

	public:
		void restime()
		{
			// since Retest is a friend of test, you can access private members. 
			// Although reverse does not stand true
			t.a = 10;
			t.b = 11;
			t.c = 12;
			cout << "bye world" << endl;
		}
}; // Restest

#elif defined INHERITANCE

// Via inheritance

class Test
{
	protected:
		int a, b, c ; // need to Make the variables a,b,c protected or public for this
	
	public:
		void showTime()
		{
			cout << "hello world" << endl;
		}
}; // Test

class Retest: private Test
{
	int a1, b1, c1;

	public:
		void restime()
		{
			this->a = 10;
			this->b = 11;
			this->c = 12;
			cout << "bye world" << endl;
		}
}; // Retest


#elif defined PUBLIC

class Test
{
	public:
		int a, b, c ;
		void showTime()
		{
			cout << "hello world" << endl;
		}
}; //Test

class Retest
{	
	int a1, b1, c1;
	Test t;
	public:
		void restime()
		{
			t.a = 10; 
			t.b = 11;
			t.c = 12;
			cout << "bye world" << endl;
		}
}; // Retest

#endif

int main()
{
	Test t;
	Retest t1; 
	t1.restime();
	return 0;
}
