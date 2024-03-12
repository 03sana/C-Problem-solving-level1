// Problem23-CircleAreacircleDescribedAroundanArbitraryTriangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Problem #23 - Circle Area circle Described Around an Arbitrary Triangle


#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	float a, b, c, area, P,T;
	const float PI = 3.14;
	cout << "Enter a sides: ";
	cin >> a;
	cout << "Enter b sides: ";
	cin >> b;
	cout << "Enter c sides: ";
	cin >> c;

	P = (a + b + c) / 2;
	T = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));
	T = pow(T,2);

	area = PI * T;

	cout << round(area);
}
