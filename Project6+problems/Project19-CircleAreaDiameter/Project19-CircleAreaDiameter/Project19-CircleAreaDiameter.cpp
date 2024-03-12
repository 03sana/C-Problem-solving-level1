// Project19-CircleAreaDiameter.cpp : This file contains the 'main' function. Program execution begins and ends there.

//HW FROM Lesson #20 - Arithmetic Operators
#include <iostream>
using namespace std;
int main()
{

	float d,area;
	const float PI = 3.14;

	cout << "Enter a : ";
	cin >> d;
	

	area = (PI*d*d)/4;
	cout << "Area of Triangle is: " << area << endl;


	return 0;

}
