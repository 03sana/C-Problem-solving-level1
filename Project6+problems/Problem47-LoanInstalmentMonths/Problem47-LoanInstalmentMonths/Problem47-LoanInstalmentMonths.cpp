// Problem47-LoanInstalmentMonths.cpp : This file contains the 'main' function. Program execution begins and ends there.

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
float TotalMonths(float LoanAmount, float MonthlyInstallment) {


	return (float)LoanAmount / MonthlyInstallment;
}

int main()
{

	float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
	float MonthlyInstallment = ReadPositiveNumber("Please Enter  Monthly Installment?");


	cout << "\n Total Months to pay = " << TotalMonths(LoanAmount, MonthlyInstallment);
}



/*int LoanAmount, MonthlyInstallment, TotalMonths;

	cout << "Pleas enter loan amount: ";
	cin >> LoanAmount;

	cout << "Pleas enter Monthly Installment: ";
	cin >> MonthlyInstallment;


	TotalMonths = LoanAmount / MonthlyInstallment;

	cout << TotalMonths << " Months";
	return 0;*/