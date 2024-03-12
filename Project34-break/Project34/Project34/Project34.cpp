// Project34.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	////example 1
	//for (int i = 1; i <=10; i++)
	//{
	//	//condition to break

	//	if (i == 3) {
	//		break;
	//	}

	//	cout << i << endl;

	//}

	//HOMEWORK

	int arr[10] = { 10,20,44,55,33,22,99,88,99,100 };
	int SearchFor = 20;
	for (int i = 0; i <= 10; i++)
	{
		cout << "we are at iterration " << i+1 << endl;

		if (SearchFor == arr[i]) {

			cout << endl << SearchFor << " found at position " << i << endl;
			break;
		}

	}


}

