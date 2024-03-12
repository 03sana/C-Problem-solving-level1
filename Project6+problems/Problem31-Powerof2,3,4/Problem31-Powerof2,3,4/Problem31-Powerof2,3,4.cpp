// Problem31-Powerof2,3,4.cpp : This file contains the 'main' function. Program execution begins and ends there.

//HW FROM Lesson #20 - Arithmetic Operators
#include <iostream>
#include<string>
using namespace std;

int ReadNumber() {
	int Number;
	cout << "Please enter a number? \n";
	cin >> Number;

	return Number;
}

void PowerOf2_3_4(int Number) {

	int a, b, c;

	a = Number * Number;
	b = Number * Number * Number;
	c = Number * Number * Number * Number;


	cout << a << " " << b << " " << c << endl;


}




int main() {


	PowerOf2_3_4(ReadNumber());

	return 0;
}