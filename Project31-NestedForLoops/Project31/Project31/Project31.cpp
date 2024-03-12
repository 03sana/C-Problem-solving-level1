// Project31.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson 49 - Nested For Loops.


#include <iostream>
using namespace std;
int main()
{

	for (int i = 1; i <= 10; i++)
	{
		//i stays same nb and j is the one changing each time
		cout << "i=" << i << endl;


		for (int j = 1; j <= 10; j++) {

			cout << i << " * " << j << " = " << i * j<<endl;
		}

		cout << "-----------------------------\n";
	}

	return 0;

}

