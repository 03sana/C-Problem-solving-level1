// HW23-Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//homework

//use array structs functions procedures

//

#include <iostream>
#include<string>
using namespace std;

struct strInfo {

	string FirstName;
	string LasttName;
	int Age;
	string Phone;


};

void ReadInfo(strInfo& Info) {



	cout << "Enter your FirstName: " << endl;
	cin >> Info.FirstName;

	cout << "Enter your LasttName: " << endl;
	cin >> Info.LasttName;

	cout << "Enter your Age: " << endl;
	cin >> Info.Age;

	cout << "Enter your Phone: " << endl;
	cin >> Info.Phone;


}

void PrintInfo(strInfo Info) {

	cout << "*************************************\n";
	cout << "FirstName: " << Info.FirstName << endl;
	cout << "LasttName: " << Info.LasttName << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "Phone: " << Info.Phone << endl;
	cout << "*************************************\n";

}


void ReadPersonsInfo(strInfo Persons[2]) {

	ReadInfo(Persons[0]);
	ReadInfo(Persons[1]);


}
void PrintPersonsInfo(strInfo Persons[2]) {
	PrintInfo(Persons[0]);
	PrintInfo(Persons[1]);
}

int main()
{
    strInfo Persons[2];
	ReadPersonsInfo(Persons);
	PrintPersonsInfo(Persons);
}

