// Problem40-ServiceFeeAndSalesTax.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
//

//HW FROM Lesson #20 - Arithmetic Operators
#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message) {

	float Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

float TotalBillAfterServiceAndTax(float TotalBill) {

		TotalBill = TotalBill * 1.1; //adds 10% by *1.1 //servicefee
		TotalBill = TotalBill * 1.16;//adds 16% on totalbill 

		return TotalBill;
}

int main()
{
	float TotalBill = ReadPositiveNumber("Please Enter Total Bill?");

	cout << endl;

	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Bill After Service Fee and Sales Tax = " << TotalBillAfterServiceAndTax(TotalBill) << endl;

}








//float BillValue, TotalBill;
//
//	cout << "Please enter BillValue: ";
//	cin >> BillValue;
//
//
//	TotalBill = BillValue * 1.1; //adds 10% by *1.1 //servicefee
//	TotalBill = TotalBill * 1.16;//adds 16% on totalbill 
//
//	/* 
//
//if u want to add 10% to a number there are two ways: 
//Number = Number + (Number *10%)
//or
//
//Number = Number * 1.10
//
//*/
//	
//
//
//	cout << "TotalBill is: " << TotalBill << endl;
//
//
//	return 0;