// Problem32-PowerOfM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
using namespace std;


int ReadNumber() {
	int Number;
	cout << "Please enter a number? \n";
	cin >> Number;

	return Number;
}

int ReadPower() {
	int Number;
	cout << "Please enter the Power? \n";
	cin >> Number;

	return Number;
}

int PowerOfM(int Number, int M) {

	if (M == 0) {

		//Any number powered to zero gives 1
		return 1;
	}

	int P = 1;

	for (int i = 1; i <= M; i++)
	{
		P = P * Number;
	}
	return P;

}
int main()
{
	
	cout << endl << "Result = " << PowerOfM(ReadNumber(), ReadPower());

}
