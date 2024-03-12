// Project19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson #37 - Function Parameters - By-Val vs By-Ref

#include <iostream>
using namespace std;

//by reference 
////& brings the address of the variable it doesnt make a copy
void MyFunctionByReference(int &Num1) {

	Num1 = 7000;
	cout << "number insided function became= " << Num1 << endl;
}

//void MyFunctionByValue(int Num1) {
//
//	Num1 = 7000;
//	cout << "number insided function became= " << Num1 << endl;
//}

int main()
{
	int Num1;

	Num1 = 1000;

	MyFunctionByReference(Num1);

	//MyFunctionByValue(Num1);

	cout << "number after calling the function became= " << Num1 << endl;
	cout << &Num1 << endl;
}

