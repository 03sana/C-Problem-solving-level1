// Problem50-ATM-PIN-3TIMES.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string ReadPinCode() {

	string PinCode;
	cout << "Please enter Pin Code \n";
	cin >> PinCode;

	return PinCode;
}


bool Login() { //func returns true or false

	string PinCode;
	int Counter = 3;
	do
	{
		Counter--;
		PinCode = ReadPinCode();

		if (PinCode == "1234") {
			return 1; //this will exit the func and return true
		}
		else {
			
			system("color 4F");//turn screen to red
			cout << "\nWrong PIN,you have "<< Counter << " more tries ";
		}


	} while (Counter>=1 && PinCode != "1234");

	return 0;//when u reach here this means login failed
}

int main()
{
	if (Login()) {
		system("color 2F"); //turn screen to green
		cout << "\nYour Account Balance is " << 7500 << '\n';
	}
	else {
		cout << "\n Your card is blocked call the bank for help \n";
	}

	return 0;
}





















//
//int FailedCounter(int &FailedCount) {
//
//	if (FailedCount == 3) {
//		cout << "locked";
//	}
//
//	return 0;
//}
//int main()
//{
//	
//	int FailedCount = 0;
//	int PIN = 1234;
//	int Balance = 7500;
//	cout << "Please Enter Your PIN: \n";
//	cin >> PIN;
//
//	while (PIN != 1234) {
//		cout << "WRONG PIN!!Try Again..\n\n";
//		FailedCount++;
//
//		if (FailedCount == 3) {
//			cout << "Card Locked\n";
//			return 0;
//		}
//		else {
//			cout << "Please Enter Your PIN: \n";
//			cin >> PIN;
//		}
//	}
//
//	cout << "Your Balance is: " << Balance << endl;
//}
