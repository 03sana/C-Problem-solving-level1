// Project22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson #40 - Arrays with Functions

#include <iostream>
using namespace std;

//we cant define array by referene it will give error
//array of reference is not allowed,bec array is by default sent by ref
//so no need to send it as ref this is opposite of structs
void ReadArrayData(int x[3]) {

	cout << "Please enter number1?\n";
	cin >> x[0];

	cout << "Please enter number2?\n";
	cin >> x[1];

	cout << "Please enter number3?\n";
	cin >> x[2];
}

void PrintArrayData(int x[3]) {
	cout << "****************\n";

	cout << x[0] << endl;
	cout << x[1] << endl;
	cout << x[2] << endl;

}
int main()
{
	int x[3];

	ReadArrayData(x); //send name of the array only //this sends the address of the data as if its sent by ref
	PrintArrayData(x);

	return 0;
}

