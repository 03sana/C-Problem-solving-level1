// Project17-TriangleArea.cpp : This file contains the 'main' function. Program execution begins and ends there.

//HW FROM Lesson #20 - Arithmetic Operators
#include <iostream>
using namespace std;

void ReadNumbers(float& A, float& H) {

	cout << "Please enter triangle base A? : \n";
	cin >> A;
	cout << "Please enter triangle height H? : \n";
	cin >> H;

}
float TriangleArea(float A, float H) {

	float Area = (A / 2) * H;

	return Area;
}

void PrintResult(float Area) {

	cout << "Area of Triangle is: " << Area << endl;
}
int main()
{
	float A, H;

	ReadNumbers(A, H);
	PrintResult(TriangleArea(A, H));


	return 0;

}
