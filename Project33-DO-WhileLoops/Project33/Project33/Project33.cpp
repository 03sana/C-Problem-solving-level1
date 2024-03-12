// Project33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int ReadIntNumberInRangeUsingWhile(int From, int To) {
	int Number;
	cout << "Please enter a number between " << From << " and " << To << endl;
	cin >> Number;

	while (Number < From || Number> To) {

		cout << "Wrong Number,";
		cout << "Please enter a number between " << From << " and " << To << endl;
		cin >> Number;
	}
	return Number;
}

int ReadIntNumberInRangeUsingDoWhile(int From, int To) {


	int Number;
	do {
		cout << "Please enter a number between " << From << " and " << To << endl;
		cin >> Number;

	} while (Number < From || Number> To);

	return Number;
}

int main()
{
	cout << "\n The Number is " << ReadIntNumberInRangeUsingWhile(1, 10) << endl;
	cout << "\n The Number is " << ReadIntNumberInRangeUsingDoWhile(1, 10) << endl;
}

