// Problem4-HireDriver-case1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct stInfo {
	int Age;
	bool HasDrivingLicense;
};

stInfo ReadInfo() {

	stInfo Info;

	cout << "Please Enter Your Age? " << endl;
	cin >> Info.Age;

	cout << "Do you have a driver License? " << endl;
	cin >> Info.HasDrivingLicense;

	return Info;
}

bool IsAccepted(stInfo Info) {
	//returns true or false
	return (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info) {

	if (IsAccepted(Info))
		cout << "\n Hired" << endl;
	else 
		cout << "\n Rejected" << endl;


}
int main()
{

	//His Solution

	PrintResult(ReadInfo());

}




//My Solution
/*int age;
bool DriverLicense;
cout << "Please enter your age: \n";
cin >> age;

cout << "Do you have driver license? \n";
cin >> DriverLicense;

if (age >= 18 && DriverLicense == 1) {

	cout << "Hired";
}
else {
	cout << "Rejected";

}*/