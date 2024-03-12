// Problem49-ATM-PIN.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include <string>

using namespace std;

string ReadPinCode(){

	string PinCode;
	cout << "Please enter Pin Code \n";
	cin >> PinCode;

	return PinCode;
}


bool Login() { //func returns true or false

	string PinCode;

	do
	{
		PinCode = ReadPinCode();

		if (PinCode == "1234") {
			return 1; //this will exit the func and return true
		}
		else {
			cout << "\nWrong PIN\n";
			system("color 4F");//turn screen to red
		}


	} while (PinCode != "1234");
	return 0;
}

int main()
{
	if (Login()) {
		system("color 2F"); //turn screen to green
		cout << "\nYour Account Balance is " << 7500 << '\n';
	};

	return 0;
}






/*int balance = 7500;
	int pin;

	cout << "Please enter your PIN CODE: \n";
	cin >> pin;

	if (pin==1234) {
		cout << "your balance is " << balance<<endl;
	}
	else {
		cout << "Wrong PIN\n";
	}*/