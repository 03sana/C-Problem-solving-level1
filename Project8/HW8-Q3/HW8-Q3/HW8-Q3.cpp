// HW8-Q3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson #25 - Logical Operators


#include <iostream>
using namespace std;
int main()
{
	bool A, B, C, D, E, F, G;

	A = 1 && 1;
	cout << A << endl;

	B = 1 && 0;
	cout << B << endl;

	C = 0 || 1;
	cout << C << endl;

	D = 0 || 0;
	cout << D << endl;


	E = !0;
	cout << E << endl;


	F = !(1||0);
	cout << F << endl;
}
