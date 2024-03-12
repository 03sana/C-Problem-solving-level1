// Problem5-HireDriverCase2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct stInfo {
	int Age;
	bool HasDrivingLicense;
	bool HasRecommmendation;
};

stInfo ReadInfo() {

	stInfo Info;

	cout << "Please Enter Your Age? " << endl;
	cin >> Info.Age;

	cout << "Do you have a driver License? " << endl;
	cin >> Info.HasDrivingLicense;

	cout << "Do you have a driver License? " << endl;
	cin >> Info.HasRecommmendation;

	return Info;
}

bool IsAccepted(stInfo Info) {
	//returns true or false
	//return (Info.Age > 21 && Info.HasDrivingLicense);

	if (Info.HasRecommmendation) {
		return true;
	}
	else {
		return(Info.Age > 21 && Info.HasDrivingLicense);
	}
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