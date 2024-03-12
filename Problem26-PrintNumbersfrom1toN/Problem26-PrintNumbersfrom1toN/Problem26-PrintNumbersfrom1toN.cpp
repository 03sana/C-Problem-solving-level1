// Problem26-PrintNumbersfrom1toN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Print Numbers from 1 to N

#include <iostream>
#include<string>
using namespace std;

int ReadNumber() {

	int Number;
	cout << "Please enter a number: \n";
	cin >> Number;

	return Number;
}

void PrintRangeFrom1toN_UsingWhile(int N) {


	cout << "Range printed using While Statement:\n" << endl;
	//HIS WAY
	int Counter = 0;

	while (Counter<N) {
		Counter++;
		cout << Counter << endl;
	}


	//MY WAY
	/*int i = 1;
	while (i <= N) {

		cout << i << endl;
		i++;
	}*/
}
void PrintRangeFrom1toN_UsingDoWhile(int N) {
	
	int Counter = 0;

	cout << "Range printed using Do While Statement:\n" << endl;


	do  {
		Counter++;

		cout << Counter << endl;

	} while (Counter < N);

}
void PrintRangeFrom1toN_UsingFor(int N) {

	cout << "Range printed using FOR Statement:\n" << endl;

	for (int Counter = 1; Counter <= N; Counter++)
	{
		cout << Counter << endl;
	}
}

int main()
{
	int N = ReadNumber();

	PrintRangeFrom1toN_UsingWhile(N);
	PrintRangeFrom1toN_UsingDoWhile(N);
	PrintRangeFrom1toN_UsingFor(N);

	return 0;

	//if ur range is known the best is to use for statement 
}
