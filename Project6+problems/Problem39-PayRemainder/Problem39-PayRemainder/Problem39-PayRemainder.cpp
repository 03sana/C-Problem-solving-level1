// Problem39-PayRemainder.cpp : This file contains the 'main' function. Program execution begins and ends there.
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


float CalculateRemainder(float TotalBill, float TotalCashPaid) {

	return TotalCashPaid - TotalBill;
}



int main()
{

	float TotalBill = ReadPositiveNumber("Please enter Total Bill? ");
	float TotalCashPaid = ReadPositiveNumber("Please enter Total Cash Paid? ");

	cout << endl;

	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Cash Paid = " << TotalCashPaid << endl;

	cout << "*************************\n";
	cout << "Remainder = " << CalculateRemainder(TotalBill,TotalCashPaid) << endl;

	return 0;

}
//float TotalBill,CashPaid,Remainder;

//cout << "Please enter TotalBill: ";
//cin >> TotalBill;

//cout << "Please enter CashPaid: ";
//cin >> CashPaid;


//Remainder = CashPaid - TotalBill;
//

//cout << "Remainder is: " << Remainder << endl;
//