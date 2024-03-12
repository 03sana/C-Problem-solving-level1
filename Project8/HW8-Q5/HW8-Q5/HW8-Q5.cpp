// HW8-Q5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson #25 - Logical Operators


#include <iostream>
using namespace std;
int main()
{
	bool A, B, C, D, E, F, G;

	A = (5 > 6 && 7 == 7) || (1||0);
	cout << A << endl;

	B = !(5>6 && 7==7) || (1||0);
	cout << B << endl;

	C = !(5 > 6 && 7 == 7) || !(1 || 0);
	cout << C << endl;

	D = !(5 > 6 || 7 == 7) && !(1 || 0);
	cout << D << endl;

	//f t = f                    //t f = f   
	E = ((5 > 6 && 7 <= 8 ) || (8>1  && 4<=3 )) && 1;
	cout << E << endl;

	     //f f = f                //t f = t 
	F = ((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3)) || 1;
	cout << F << endl;
}
