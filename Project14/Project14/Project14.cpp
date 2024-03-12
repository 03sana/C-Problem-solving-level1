// Project14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson #32 - Functions Part 1

#include <iostream>
#include<string>
using namespace std;

void myFunction() {

	cout << "this is my first function, it got executed " << endl;
}

void myFunction2() {

	cout << "this is my second function, it got executed " << endl;
}

int main() 
{
	myFunction(); //calling the func // u can call it as many times as u want
	myFunction2();
}

