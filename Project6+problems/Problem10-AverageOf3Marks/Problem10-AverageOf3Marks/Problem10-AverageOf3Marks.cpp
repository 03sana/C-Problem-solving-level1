// Problem10-AverageOf3Marks.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

void ReadNumbers(int& Mark1, int& Mark2, int& Mark3) {
	cout << "Please enter first number: ";
	cin >> Mark1;
	cout << "Please enter second number: ";
	cin >> Mark2;
	cout << "Please enter third number: ";
	cin >> Mark3;
}

int SumOf3Marks(int Mark1, int Mark2, int Mark3) {

	return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3) {

	return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

void PrintReasults(float Average) {

	cout << "\n The avrage is:  " << Average << endl;
}

int main()
{

	int Mark1 ,Mark2 , Mark3;

	ReadNumbers(Mark1, Mark2, Mark3);
	PrintReasults(CalculateAverage(Mark1, Mark2, Mark3));


	return 0;
}
