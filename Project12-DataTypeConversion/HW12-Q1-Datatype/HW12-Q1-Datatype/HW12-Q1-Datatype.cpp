// Project12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//DataTypeConversion HOMEWORK

#include <iostream>
#include<string>


using namespace std;

int main()
{
	//convert string st1 to double float and int
	string st1 = "43.22";

	double num_double = stod(st1);
	float num_float = stof(st1);
	int num_int = stoi(st1);

	cout << "num_double = " << num_double << endl;
	cout << "num_float = " << num_float << endl;
	cout << "num_int = " << num_int << endl;


	int N1 = 20;

	double N2 = 33.5;
	float N3 = 55.23;

	string St1, St2, St3;

	St1 = to_string(N1);
	St2 = to_string(N2);
	St3 = to_string(N3);


	cout <<"Int to string: " << St1 << endl;
	cout << "double to string: " << St2 << endl;
	cout << "float to string: " << St3 << endl;


	return 0;
}
