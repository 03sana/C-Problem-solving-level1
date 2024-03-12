// Project31-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson 49 - Nested For Loops.


#include <iostream>
using namespace std;
int main()
{

	//the rows are the outside loop
	for (int i = 1; i <= 10; i++)
	{
		
		//the columns are the inside loop
		for (int j = 1; j <= 10; j++) {

			cout << "*";
		}

		cout << "\n";
	}

	//the rows are the outside loop
	for (int i = 1; i <= 10; i++)
	{

		//the columns are the inside loop
		for (int j = 1; j <= i; j++) {

			cout << "*";
		}

		cout << "\n";
	}

	return 0;

}

