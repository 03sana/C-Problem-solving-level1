// Project12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//DataTypeConversion

#include <iostream>
#include<string>


using namespace std;

int main()
{

	//CONVERT FROM DOUBLE TO INTEGER
	int Num1;
	double Num2 = 18.99;

	Num1 = Num2; //Implicit conversion from double to int

	Num1 = (int)Num2; //Explicit Conversion

	Num1 = int(Num2); //Explicit Conversion //function way

	cout << Num1 << endl;

	//it will print 18 and there will be data loss



	//CONVERT STRING TO INT,FLOAT, DOUBLE.

	string str = "123.456";

	//convert string to integer
	int num_int = stoi(str); //stoi:string to integer found in string library

	//convert string to float
	float num_float = stof(str); //stof: string to float


	//convert string to double
	double num_double = stod(str); //stof: string to float
	

	cout << "num_int = " << num_int << endl;
	cout << "num_float = " << num_float << endl;
	cout << "num_double = " << num_double << endl;


	//CONVERT NUMBERS TO STRINGS

	int Num3 = 123;
	double Num4 = 18.99;

	string St1, St2;
	St1 = to_string(Num3);//function to_string give it any number it will know alone its datatype
	St2 = to_string(Num4); 

	cout << St1 << endl;
	cout << St2 << endl;


	return 0;
}
