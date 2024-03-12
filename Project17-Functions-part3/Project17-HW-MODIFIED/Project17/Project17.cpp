// HW16-Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Project16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson #34 - Functions Part II - Functions vs Procedures


#include <iostream>
#include<string>

using namespace std;

void MySumProcedure() {

	int Number1, Number2;
	cout << "Please enter Number1? \n";
	cin >> Number1;
	cout << "Please enter Number2? \n";
	cin >> Number2;

	cout << "****************\n";

	cout << Number1 + Number2 << endl;
}

int MySumFunction(int Number1, int Number2) {

	return Number1 + Number2;
}


int main()
{
	//MySumProcedure();

	int Number1, Number2;
	cin >> Number1;
	cin >> Number2;
	cout << MySumFunction(Number1, Number2) << endl;

	cout << "the function: \n";
	cout << MySumFunction(10, 20) << endl;
	cout << MySumFunction(5, 7) << endl;
	cout << MySumFunction(3, 4) << endl;



	return 0;
}

