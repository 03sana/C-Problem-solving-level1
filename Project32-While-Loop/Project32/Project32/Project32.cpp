// Project32.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson #50 - While Loop

#include <iostream>
using namespace std;


int main()
{

	cout << "\n For loop \n";
	//for loop from 1 to 5

	for (int x = 1; x <=5; x++)
	{
		cout << x << endl;
	}

	cout << "\n While loop \n";

	int x = 1;

	while (x <= 5) {
		cout << x << endl;
		x++;
	}

	cout << "\n";
	cout << "\n";

	//another example

	int Number;
	cout << "Please enter a positive number?";
	cin >> Number;

	while (Number < 0) {

		cout << "wrong Number, plz enter a positive number..\n";
		cin >> Number;
	}

	cout << "\nthe number you entered is " << Number << endl;

	
	return 0;
}

