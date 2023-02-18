#include "rectangle.h"
#include <iostream>
using namespace std;

Rectangle :: Rectangle()
{

}

// Rectangle :: Rectangle(int w, int h)
// {
// 	width = w;
// 	height = h;
// }

Rectangle :: Rectangle(int w, int h) : width(w),height(h)
{
	cout << "member initialized differently\n";
}


void Rectangle :: setValue(int w, int h)
{
	width = w;
	height = h;
}

void Rectangle :: printValue()
{
	cout << "print value:\n";
	cout << "height is " << width << "  height is " << height << endl;
}