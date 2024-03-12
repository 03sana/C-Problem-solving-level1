// Problem9-SumOf3Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//HW FROM Lesson #20 - Arithmetic Operators
#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3) {
	cout << "Please enter first number: ";
	cin >> Num1;
	cout << "Please enter second number: ";
	cin >> Num2;
	cout << "Please enter third number: ";
	cin >> Num3;
}

int SumOf3Numbers(int Num1, int Num2, int Num3) {

	return Num1 + Num2 + Num3;
}

void PrintReasults(int Total) {
	 
	cout << "The total sum of numbers is:  " << Total << endl;
}

int main()
{

	int Num1, Num2, Num3;

	ReadNumbers(Num1, Num2, Num3);
	PrintReasults(SumOf3Numbers(Num1, Num2, Num3));


	return 0;
}
