// Project24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{

	//if statement
	/*int x = 10;

	if (x >= 5 || x <= 8) {
		cout << "The code of if body is executed. " << endl;
	}

	cout << "The code after if body always executed. " << endl;*/

	//if else statement

	int x;
	cout << "Please enter your number? \n";
	cin >> x;

	if (x > 5) {
		cout << "yes, x is greater than 5"<<endl;
	}
	else {
		cout << "no, x is leass than 5"<<endl;
	}

	cout << "The code after if body always executed. " << endl;
}

