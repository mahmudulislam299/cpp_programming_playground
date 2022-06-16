/*
	Namespace in c++
	1. Namespace is drum or container for identifiers.

	2. Namespace puts the names of its members in a distinct space in such a way that 
	they don't conflict with the names in other namespace or global namespace.
	
	3. Namespace definition does not terminates with a semicolon like in class definition.

	4. Namespaces allow you to group entities under a name. 
		(i.e., you can group classes, objects and functions under a namespace.)
	
	5. The definition of namespace must be done at global scope, or nested inside another namespace.

	6. You can also use an alias name for your namespace name in order to use it easily. for example: namespace MS = MySpace;

*/

/*
	syntax of creating Namespace 
	------------------------------
	namespace NameOfNameSpace 
	{
    declaration of namespace
	}
	-------------------------------
*/


#include <iostream>
using namespace std;

// declaring namespace 
namespace first
{
	int value = 51;
}

namespace second
{
	int value = 12;
}

int main()
{
	cout << first :: value << endl;
	cout << second :: value << endl;
	return 0;
}