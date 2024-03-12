// Project9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson #26 - Math Functions in C++


#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	//square root function
	double x = 64;
	cout << sqrt(x) << endl; //gives 8
	cout << sqrt(50) << endl; //gives 7.07107

	//round function
	cout <<"Round value of 2.4: " << round(2.4) << endl;//gives 2
	cout << "Round value of 2.5: " << round(2.5) << endl;//gives 3
	cout << "Round value of 2.7: " << round(2.7) << endl;//gives 3

	//round plus sqrt
	cout << sqrt(50) << endl; //gives 7.07107
	cout << round(sqrt(50)) << endl; //gives 7.07107


	//u can add the round functions, functions can be treated like variables bec it returns 1 value
	cout << round(2.4) + round(5.6) << endl;//gives8
	cout << round(2.4) / 2 << endl;//gives 1
	cout << round(2.4) + 5 << endl;


	//Power Function
	int x1 = 2;
	int y = 4;

	cout<<"power value: x^y = (2^4): " << pow(x1, y) << endl; //gives 16
	cout<<"power value: x^y = (4^3): "  << pow(4, 3) << endl; //gives 64 //4*4*4*4

	//HINT
	int z = 2;
	//z = z * z;//same
	z = pow(z, 2);//same
	cout << z;


	//Ceil & Floor function
	//diffrent than round, round decides alone
	
	cout<<"Ceiling value of 2.9: " << ceil(2.9) << endl;//gives 3
	cout << "Floor value of 2.9: " << floor(2.9) << endl;// gives 2

	cout<< "Ceiling value of -2.9: " << ceil(-2.9) << endl;//gives -2
	cout << "Floor value of 2.9: " << floor(-2.9) << endl;// gives -3
	

	cout << ceil(2.1) << endl;
	cout << round(2.1) << endl;
	cout << floor(2.1) << endl;

	//ABSOLUTE value function

	cout << "Absolute value of -10: " << abs(-10) << endl;//gives 10
	cout << "Absolute value of 10: " << abs(10) << endl;//gives 10

	return 0;
}
