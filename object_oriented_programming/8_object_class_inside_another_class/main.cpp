#include <iostream>

using namespace std;

class Marks
{
	private:
		int rollNumber;
		float percentage;
	
	public:
		//constructor
		Marks()
		{
			rollNumber = 0;
			percentage = 0;
		}

		//input roll number and percentage
		void inputMarks(void)
		{
			cout << "Enter roll number: ";
			cin>>rollNumber;
			cout << "Enter percentage: ";
			cin>> percentage; 
		}

		// print roll number and percentage
		void printMarks(void)
		{
			cout << "Roll Number: "<<rollNumber<<endl;
			cout << "Percentage: " << percentage<<endl;
		}
}; //Marks


class Studends
{
	private:
		Marks marks;
		char name[30];

	public:
		//input name
		void inputStudentDetails()
		{
			cout<<"Enter name: ";
			cin.getline(name,30);
			marks.inputMarks();
		}

		//printg sstudents details
		void printStudent(void)
		{
			//print namespace MyNamespace
			{
				cout << "Name: " << name << endl;
				marks.printMarks();
			}
		}
};


//main code 

int main()
{
	Studends student1;
	student1.inputStudentDetails();
	student1.printStudent();

	return 0;
}