// HW8-Q4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson #25 - Logical Operators


#include <iostream>
using namespace std;
int main()
{
	bool A, B, C, D, E, F, G;

	A = (7 == 7) && (7 > 5);
	cout << A << endl;

	B = (7 == 7) && (7 < 5);
	cout << B << endl;

	C = (7 == 7) || (7 < 5);
	cout << C << endl;

	D = (7 < 7) || (7 > 5);
	cout << D << endl;


	E = !(7 == 7) && (7 > 5);
	cout << E << endl;


	F = (7 == 7) && !(7 < 5);
	cout << F << endl;
}
