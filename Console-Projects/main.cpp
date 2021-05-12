#include <iostream>
#include <cmath>    //needed for pow function
#include <stdlib.h>	//needed for exit function
using namespace std;

int main(int argc, char** argv) 
{
	double area;
	int num;
	const float pi = 3.14159; 									
	
	cout << "Geometry Calculator" << endl << endl;
	cout << "1. Calculate the Area of a Circle." << endl << endl;
	cout << "2. Calculate the Area of a Rectangle." << endl << endl;
	cout << "3. Calculate the Area of a Triangle." << endl << endl;
	cout << "4. Quit." << endl << endl;
	cout << "Enter your choice (1-4) without period." << endl;
	
	cin >> num; 
	
	if(num == 1)
	{
		int r;
		
			cout << "Enter the radius for the circle." << endl;
			cin >> r;
			
			if (r < 0)			
			{
				cout << "The radius cannot be negative" << endl;
						
			exit(1); 												//used to exit when radius is negative, area would continue to show since r is squared.
			return 1;												//necessary for function to work
			}
			
			area = pi * pow(r,2);
			
			if (r > 0)
			{
				cout << "The Area of the Circle is: " << area << endl;			
			}	
	}
				
	else if (num == 2)
	{
		int length_rec;
		int width_rec;
				
		cout << "Enter the length of the rectangle." << endl;
			cin >> length_rec;
			
			if (length_rec < 0)
			{
				cout << "length cannot be negative." << endl;
				
			exit(1);
			return 1;
			}
			
		cout << "Enter the width of the rectangle." << endl;
			cin >> width_rec;
			
			if (width_rec < 0)
			{
				cout << "Width cannot be negative." << endl;
				
			exit(1);
			return 1;
			}
			
			area = length_rec * width_rec;
			
			if (area < 0)
			{
				cout << "The area cannot be negative." << endl;
				
				exit(1);
				return 1;
			}
			
			else
			{
				cout << "The area of the rectangle is: " << area << endl;
			}	
	}
	
	else if (num == 3)
	{
		int base_tri;
		int height_tri;
		
		cout << "Enter the length of the triangles base: " << endl;
			cin >> base_tri;
			
			if (base_tri < 0)
			{
				cout << "Base cannot be negative." << endl;
				
			exit(1);
			return 1;
			}
			
		cout << "Enter the height of the triangle." << endl;
			cin >> height_tri;
			
			if (height_tri < 0)
			{
				cout << "Height cannot be negative." << endl;
				
			exit(1);
			return 1;
			}
			
			area = base_tri * height_tri * .5;
			
			if (area < 0)
			{
				cout << "Area cannot be negative...";
				
			exit(1);
			return 1;
			}
			
			else
			{	
				cout << "The area of the triangle is: " << area << endl;
			}
	}
	
	else if (num == 4)
	{
		cout << "Press Enter to quit" << endl;
	}		
	
	else
	{
		cout << "Invalid entry, please restart program and enter a number between (1-4)" << endl;
	}
	
	return 0;
}
