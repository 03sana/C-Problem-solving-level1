// Problem2-AskUserName.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// Problem1-PrintYourName.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;


//His solution

string ReadName() {
	string Name;

	cout << "Please enter your name?  "<<endl;
	getline(cin, Name);
	return Name;
}

void PrintName(string Name) {
	cout << "\n Your Name is: " << Name << endl;
}


int main() {

	PrintName(ReadName());
}


// My solution
//void PrintName() {
//	string name;
//	cout << "Please enter your name: ";
//	cin >> name;
//	cout << "Your name is "<< name<<endl;
//
//}
//-----------------------
//string PrintName(string Name) {
//	return Name;
//}
//int main()
//{
//	string Name;
//	cout << "Please enter your name: ";
//	cin >> Name;
//	cout<< "your name is: "<< PrintName(Name);
//}

