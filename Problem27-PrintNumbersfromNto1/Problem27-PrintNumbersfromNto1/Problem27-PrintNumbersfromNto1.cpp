// Problem27-PrintNumbersfromNto1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include<string>
using namespace std;


#include <iostream>
#include<string>
using namespace std;

int ReadNumber() {

	int Number;
	cout << "Please enter a number: \n";
	cin >> Number;

	return Number;
}

void PrintRangeFromNto1_UsingWhile(int N) {

	//MY WAY
	//int i = Number;
	//
	//	while (i >= 1) {
	//		cout << i << endl;
	//		i--;
	
	//HIS WAY

	int Counter = N + 1;

	cout << "Range printed using While Statement:\n" << endl;

	while (Counter > 1) {
		Counter--;
		cout << Counter << endl;
	}

}
void PrintRangeFromNto1_UsingDoWhile(int N) {

	int Counter = N+1;

	cout << "Range printed using Do While Statement:\n" << endl;


	do {
		Counter--;

		cout << Counter << endl;

	} while (Counter > 1);

}
void PrintRangeFromNto1_UsingFor(int N) {

	//MY WAY
	//
	//for (int i = N; i >= 1; i--)
	//{
	//	cout << i << endl;
	//}

	//HIS WAY

	cout << "Range printed using FOR Statement:\n" << endl;

	for (int Counter = N; Counter >= 1; Counter--)
	{
		cout << Counter << endl;
	}
}

int main()
{
	int N = ReadNumber();

	PrintRangeFromNto1_UsingWhile(N);
	PrintRangeFromNto1_UsingDoWhile(N);
	PrintRangeFromNto1_UsingFor(N);

	return 0;

	//if ur range is known the best is to use for statement 
}

