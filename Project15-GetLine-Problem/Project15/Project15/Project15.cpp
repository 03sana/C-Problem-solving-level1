// Project15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson #33 - Solving the getline() Problem

#include <iostream>
#include<string>
using namespace std;

int main()
{
	int Number;
	string Name;
	string Country;

	cout << "Please enter Employee Number?\n";
	cin >> Number;

	cout << "Please enter Employee Name?\n";
	cin.ignore(1, '\n');//to solve this we will put
	getline(cin, Name);//dont press enter getline(cin, Name);

}
