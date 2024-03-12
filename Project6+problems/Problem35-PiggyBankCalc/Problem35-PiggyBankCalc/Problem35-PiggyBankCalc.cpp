// Problem35-PiggyBankCalc.cpp : This file contains the 'main' function. Program execution begins and ends there.

//HW FROM Lesson #20 - Arithmetic Operators
#include <iostream>
using namespace std;





struct stPiggyBankContent {

	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent() {

	stPiggyBankContent PiggyBankContent;

	cout << "Please enter a Total Pennies? " << endl;
	cin >> PiggyBankContent.Pennies;

	cout << "Please enter a Total Nickels? " << endl;
	cin >> PiggyBankContent.Nickels;

	cout << "Please enter a Total Dimes? " << endl;
	cin >> PiggyBankContent.Dimes;
	
	cout << "Please enter a Total Quarters? " << endl;
	cin >> PiggyBankContent.Quarters;

	cout << "Please enter a Total Dollars? " << endl;
	cin >> PiggyBankContent.Dollars;

	return PiggyBankContent;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBankContent) {

	int TotalPennies = 0;
	TotalPennies = PiggyBankContent.Pennies * 1 +
		PiggyBankContent.Nickels * 5 +
		PiggyBankContent.Dimes * 10 +
		PiggyBankContent.Quarters * 25 +
		PiggyBankContent.Dollars * 100;

	return TotalPennies;
}


int main()
{
	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContent());


	cout << "Total Pennies = " << TotalPennies << endl;
	cout << "Total Dollars = " << (float)TotalPennies / 100 << endl;


	return 0;

}





























//float Penny=1, Nickel=5, Dime=10, Quarter=25,Dollar=100;

//cout << "Please enter a Penny: ";
//cin >> Penny;

//cout << "Please enter a Nickel: ";
//cin >> Nickel;

//cout << "Please enter a Dime: ";
//cin >> Dime;

//cout << "Please enter a Quarter: ";
//cin >> Quarter;

//cout << "Please enter a Dollar: ";
//cin >> Dollar;


//float Totalpennies,TotalDollars;
//Totalpennies= Penny*1 + Nickel*5 + Dime*10 + Quarter * 25 + Dollar * 100;

//TotalDollars = Totalpennies / 100;

//cout << "Total Pennies is: " << Totalpennies << "Pennies" << endl;
//cout << "Total Dollars is: " << TotalDollars << "Dollars" << endl;
