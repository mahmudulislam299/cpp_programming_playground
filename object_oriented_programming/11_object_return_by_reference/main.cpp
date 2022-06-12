#include <iostream>

using namespace std;


class CtrTest 
{

	public:
		CtrTest() 
		{
			cout << "Ctr default:" << endl;
		}

		CtrTest(const CtrTest&) 
		{
			cout << "Cp Ctr" << endl;
		}
};

class Wrap 
{
		CtrTest test;
		
	
	public:
		const CtrTest& ret_ref() 
		{ cout << "ret_ref()" << endl; 
			return test; 
		}

		const CtrTest* ret_ptr() 
		{ 
			cout << "ret_ptr()" << endl; 
			return &test; 
		}
		
		const CtrTest ret_val() 
		{ 
			cout << "ret_val()" << endl; 
			return test; 
		}
};

int main() 
{
	Wrap w;

	 cout << endl;

	cout << "phase 1" << endl <<endl;
	const CtrTest test1 = w.ret_ref();

	cout << "phase 2" << endl <<endl;
	const CtrTest& test2 = w.ret_ref();

	cout << "phase 3" << endl <<endl;
	const CtrTest* test3 = w.ret_ptr();

	cout << "phase 4" << endl <<endl;
	const CtrTest test4 = w.ret_val();

	return 0;
}