// Project20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct strInfo {

	string FirstName;
	string LastName;
	int Age;
	string Phone;
};
//ReadInfo takes variable from type Info, it shld be by ref, other it doesnt work
//if u didnt put by ref it will only change inside the procedure but
//we want it to change in main 
//ur procedure should only do 1 thing 

void ReadInfo(strInfo &Info) {

	cout << "Please enter your FirstName?\n";
	cin >> Info.FirstName;

	cout << "Please enter your LastName?\n";
	cin >> Info.LastName;

	cout << "Please enter your Age?\n";
	cin >> Info.Age;

	cout << "Please enter your Phone?\n";
	cin >> Info.Phone;
}

//takes variable by value bec i will not modify the info inside this func
//this functions job is to take the structure info and print it as it is

void PrintInfo(strInfo Info) {

	cout << "\n****************************\n";

	cout << "FirstName: " << Info.FirstName << endl;
	cout << "LastName: " << Info.LastName << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "Phone: " << Info.Phone << endl;

	cout << "\n****************************\n";

}

int main()
{
	//defined structure person1 and sent it empty for readinfo
	//so readinfo bec its by ref it will read and fill it
	//so now after it finished it returns filled out so i sent it to printing
	strInfo Person1Info;
	ReadInfo(Person1Info);
	PrintInfo(Person1Info);

	//to add another person u only have to add the same 3 lines
	strInfo Person2Info;
	ReadInfo(Person2Info);
	PrintInfo(Person2Info);


}
