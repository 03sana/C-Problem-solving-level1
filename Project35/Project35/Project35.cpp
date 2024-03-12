// Project35.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	//example 1
	//for (int i = 1; i <= 5; i++) {
	//	//condition to continue

	//	if (i == 3) {
	//		continue;
	//	}

	//	cout << i << endl;
	//}

	//homework

	int num = 0;
	int sum = 0;


	for (int i = 1; i <= 5; i++)
	{
		cout << "enter a number: ";
		cin >> num;


		if (num > 50) {
			cout << "the number is greater than 50 and wont be calculated\n";
			continue;
		}
		sum = sum + num;
	}

	cout << "the sum is : " << sum << endl;


}

