// Problem32-forloop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

	int Num, M,P=1;

	cout << "enter a number\n";
	cin >> Num;

	cout << "enter a power\n";
	cin >> M;


	if (M == 0) {

		cout << P;

	}
	else if (M > 0) {

		for (int i = 0; i < M ; i++)
		{

			P = P * Num;
		}

		cout << P;
	}
	

}