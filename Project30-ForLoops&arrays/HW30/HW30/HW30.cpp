// HW23-Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//homework

//use array structs functions procedures

//Lesson #48 - For Loop & Arrays--HOMEWORK

//his solution
#include <iostream>
#include <string>

using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};


void ReadInfo(strInfo& Info)
{

    cout << "Please enter FirstName?\n";
    cin >> Info.FirstName;

    cout << "Please enter LastName?\n";
    cin >> Info.LastName;

    cout << "Please enter Age?\n";
    cin >> Info.Age;

    cout << "Please enter Phone?\n";
    cin >> Info.Phone;
    cout << "\n\n";


}

void PrintInfo(strInfo Info)
{

    cout << "\n**********************************\n";

    cout << "FirstName: " << Info.FirstName << endl;
    cout << "LastName: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone: " << Info.Phone << endl;

    cout << "**********************************\n\n";


}



void ReadPersonsInfo(strInfo Persons[100], int& NumberOfPersons)
{

    cout << "How many persons?\n";
    cin >> NumberOfPersons;

    for (int i = 0; i <= NumberOfPersons - 1; i++)
    {

        cout << "Please Enter Person's " << i + 1 << " Info: \n";
        ReadInfo(Persons[i]);


    }
}


void PrintPersonsInfo(strInfo Persons[100], int NumberOfPersons)
{


    for (int i = 0; i <= NumberOfPersons - 1; i++)
    {
        cout << "Person's " << i + 1 << " Info: \n";
        PrintInfo(Persons[i]);
    }


}



int main()
{

    strInfo Persons[100];
    int NumberOfPersons = 1;

    ReadPersonsInfo(Persons, NumberOfPersons);
    PrintPersonsInfo(Persons, NumberOfPersons);

    return 0;
}

//hw my code
//
//#include <iostream>
//#include<string>
//using namespace std;
//
//struct strInfo {
//
//	string FirstName;
//	string LasttName;
//	int Age;
//	string Phone;
//
//
//};
//
//void ReadInfo(strInfo& Info) {
//
//
//
//	cout << "Enter your FirstName: " << endl;
//	cin >> Info.FirstName;
//
//	cout << "Enter your LasttName: " << endl;
//	cin >> Info.LasttName;
//
//	cout << "Enter your Age: " << endl;
//	cin >> Info.Age;
//
//	cout << "Enter your Phone: " << endl;
//	cin >> Info.Phone;
//
//
//}
//
//void PrintInfo(strInfo Info) {
//
//	cout << "*************************************\n";
//	cout << "FirstName: " << Info.FirstName << endl;
//	cout << "LasttName: " << Info.LasttName << endl;
//	cout << "Age: " << Info.Age << endl;
//	cout << "Phone: " << Info.Phone << endl;
//	cout << "*************************************\n";
//
//}
//
//
//void ReadPersonsInfo(strInfo Persons[100],int &length) {
//
//	
//	cout << "How Many Numbers do you want to enter? 1 to 100?\n";
//	cin >> length;
//
//	for (int i = 0; i <= length - 1; i++)
//	{
//		cout << "please enter peron's " << i + 1 << " info\n";
//
//		ReadInfo(Persons[i]);
//	}
//
//
//}
//void PrintPersonsInfo(strInfo Persons[100],int length) {
//
//	
//	for (int i = 0; i <= length - 1; i++)
//	{
//		cout << "Person's " << i + 1 << " info\n";
//
//		PrintInfo(Persons[i]);
//	}
//}
//
//int main()
//{
//	strInfo Persons[100];
//	int length;
//	ReadPersonsInfo(Persons,length);
//	PrintPersonsInfo(Persons,length);
//}

