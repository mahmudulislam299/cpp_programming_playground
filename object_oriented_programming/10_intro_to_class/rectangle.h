#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle 
{
	int width;
	int height;

	public:
		Rectangle();
		Rectangle(int , int);
		void setValue(int, int);
		void printValue();
};

#endif