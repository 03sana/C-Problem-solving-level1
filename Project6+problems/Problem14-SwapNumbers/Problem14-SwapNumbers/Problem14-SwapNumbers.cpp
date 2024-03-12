// Problem14-SwapNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.

//HW FROM Lesson #20 - Arithmetic Operators
#include <iostream>
using namespace std;

void ReadNumbers(int& Num1, int& Num2) {

	cout << "Please enter first number: ";
	cin >> Num1;
	cout << "Please enter second number: ";
	cin >> Num2;
}

void Swap(int& A, int& B) {

	int Temp;

	Temp = A;
	A = B;
	B = Temp;

}

void PrintNumbers(int Num1, int Num2) {

	cout << "\n Number1: " << Num1 << endl;
	cout << " Number2: " << Num2 << endl;

}


int main()
{
	int Num1, Num2;

	ReadNumbers(Num1, Num2);
	PrintNumbers(Num1, Num2);
	Swap(Num1, Num2);
	PrintNumbers(Num1, Num2);


	//we should pass by reference because the values in the main should be actually swapped

	return 0;

}
//int chicken, steak, Temp1;

//cout << "Please enter first number: ";
//cin >> chicken;
//cout << "Please enter second number: ";
//cin >> steak;

//cout << "Number1\n" << chicken << endl;
//cout << "Number2:\n" << steak << endl;

//Temp = chicken;
//chicken = steak;
//steak = Temp;


//cout << "Number1\n" << chicken << endl;
//cout << "Number2:\n" << steak << endl;
