// Project20-CircleAreaInSquare.cpp : This file contains the 'main' function. Program execution begins and ends there.


//HW FROM Lesson #20 - Arithmetic Operators
#include <iostream>
using namespace std;
int main()
{

	float A, area;
	const float PI = 3.14;

	cout << "Enter a : ";
	cin >> A;


	area = (PI*(A*A)) / 4; 
	cout << "Area of Triangle is: " << area << endl;


	return 0;

}
