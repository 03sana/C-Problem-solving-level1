// Problem30-FactorialOfN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

int ReadPositiveNumber(string Message) {

	int Number; 

	do {

		cout << Message << endl;
		cin >> Number;


	} while (Number < 0);

	return Number;

}

int Factorial(int N) {

	int F = 1;

	for (int Counter = N; Counter >= 1; Counter--)
	{
		F = F * Counter;
	}
	
	return F;
}
int main()
{
	cout << Factorial(ReadPositiveNumber("Please Enter a Positive Number?")) << endl;

}