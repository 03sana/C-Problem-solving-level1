// Problem23-CircleAreacircleDescribedAroundanArbitraryTriangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;


void ReadTriangleData(float& A, float& B, float& C) {
	cout << "Enter a sides: ";
	cin >> A;
	cout << "Enter b sides: ";
	cin >> B;
	cout << "Enter c sides: ";
	cin >> B;
}

float CircleAreaByATriangle(float& A, float& B, float& C) {
	const float PI = 3.141592653589793238;

	float  P;

	P = (A + B + C) / 2;

	float  T;
	T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));


	float Area = PI * pow(T, 2);

	return Area;
}

void PrintResult(float Area) {

	cout << "\n Circle Area = " << endl;
}


int main()
{
	float A, B, C;
	ReadTriangleData(A, B, C);
	PrintResult(CircleAreaByATriangle(A, B, C));
	
}
