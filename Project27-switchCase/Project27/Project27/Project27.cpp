// Project27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson #45 - Switch .. Case Statement



#include <iostream>
using namespace std;

int main()
{

	int day = 9;

	switch (day) 
	
	{

	case 1:
		cout << "Sun";
		break;
	case 2:
		cout << "Monday";
		break;

	case 3:
		cout << "Tuesday";
		break;
	case 4:
		cout << "Wednesday";
		break;
	case 5:
		cout << "Thursday";
		break;
	case 6:
		cout << "Friday";
		break;
	case 7:
		cout << "Saturday";
		break;
	default:
		cout << "not a week day!\n";
	}


}

