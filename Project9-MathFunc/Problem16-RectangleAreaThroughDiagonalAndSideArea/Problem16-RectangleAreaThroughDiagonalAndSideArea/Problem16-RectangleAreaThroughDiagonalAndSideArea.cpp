// Problem16-RectangleAreaThroughDiagonalAndSideArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Problem #16 - Rectangle area Through Diagonal and Side Area


#include <iostream>
#include<cmath>

using namespace std;


void ReadNumbers(float& A, float& D) {

	cout << "Please enter Rectangle sid A ? : ";
	cin >> A;

	cout << "Please enter Rectangle sid B ? : ";
	cin >> D;


}

float RectangleAreaBySideAndDiagonal(float A, float D) {

	float Area = A * sqrt(pow(D, 2) - pow(A, 2));

	return Area;
}


void PrintResult(float Area){

	cout << "\nRectangle Area =  " << Area<<endl;

}

int main()
{

	float A, D;
	ReadNumbers(A, D);
	PrintResult(RectangleAreaBySideAndDiagonal(A, D));

}

