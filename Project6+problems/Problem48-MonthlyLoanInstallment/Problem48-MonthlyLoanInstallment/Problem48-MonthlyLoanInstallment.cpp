// Problem48-MonthlyLoanInstallment.cpp : This file contains the 'main' function. Program execution begins and ends there.

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

float MonthlyInstallment(float LoanAmount, float HowManyMonths) {


	return (float)LoanAmount / HowManyMonths;
}

int main()
{

	float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
	float HowManyMonths = ReadPositiveNumber("How many months you need to pay?");


	cout << "\n Monthly Installment = " << MonthlyInstallment(LoanAmount, HowManyMonths);
	cout << endl;
}

/*int LoanAmount, HowManyMonths, MonthlyInstallment;

cout << "Pleas enter loan amount: ";
cin >> LoanAmount;

cout << "How many months you need: ";
cin >> HowManyMonths;


MonthlyInstallment = LoanAmount / HowManyMonths;

cout << MonthlyInstallment << " Dollar";
return 0;*/