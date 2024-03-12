// Project26-part2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enCountryChoice { Jordan = 1, Tunisia = 2, Algeria = 3, Oman = 4, Egypt = 5, Iraq = 6 };
int main()
{

	cout << "*************************\n";
	cout << "(1) Jordan\n";
	cout << "(2) Tunisia\n";
	cout << "(3) Algeria\n";
	cout << "(4) Oman\n";
	cout << "(5) Egypt\n";
	cout << "(6) Iraq\n";
	cout << "(7) Other\n";
	cout << "*************************\n\n";
	cout << "Your Choice? ";

	int c;
	enCountryChoice Country;

	cin >> c;
	Country = (enCountryChoice)c;




	switch (Country) 
	{
	case enCountryChoice::Jordan:
		cout << "Your country is Jordan\n";
		break;

	case enCountryChoice::Tunisia:
		cout << "Your country is Tunisia\n";
		break;

	case enCountryChoice::Algeria:
		cout << "Your country is Algeria\n";
		break;

	case enCountryChoice::Oman:
		cout << "Your country is Oman\n";
		break;

	case enCountryChoice::Egypt:
		cout << "Your country is Egypt\n";
		break;

	case enCountryChoice::Iraq:
		cout << "Your country is Iraq\n";
		break;

	default: 
		cout << "your country is other\n";
	}

}

