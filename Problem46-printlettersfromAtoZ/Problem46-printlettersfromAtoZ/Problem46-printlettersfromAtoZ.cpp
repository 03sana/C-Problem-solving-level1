// Problem46-printlettersfromAtoZ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void PrintLettersAtoZ() {

	for (int i = 65; i <= 90; i++)
	{
		cout << char(i) << endl;
	}

}




int main()
{

	PrintLettersAtoZ();

	return 0;

	
}

















/*cout << "\n For loop \n";

	for (int i = 65; i <=90; i++)
	{
		cout << char(i) << endl;
	}


	cout << "\n While loop \n";

	int i = 65;

	while (i <= 90) {
		cout << char(i) << endl;
		i++;
	}*/