// Project21-CircleAreaAlongCircum.cpp : This file contains the 'main' function. Program execution begins and ends there.

//HW FROM Lesson #20 - Arithmetic Operators
#include <iostream>
using namespace std;
int main()
{

	float L,area;
	const float PI = 3.14;

	cout << "Enter L : ";
	cin >> L;


	area = ((L*L)/ (4 * PI));
	cout << "Area of Triangle is: " << area << endl;


	return 0;

}
