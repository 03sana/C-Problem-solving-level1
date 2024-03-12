// Project13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson #31 - Strings


#include <iostream>
#include <string>

using namespace std;
int main()
{
    string Mystring = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "the length of the MyString is: " << Mystring.length() << endl;

    cout << Mystring[2] << endl;

   string S1 = "10", S2 = "20";
   //string S1 = "AB", S2 = "CD"; //this gives ERROR cause u should pass number for the stoi it cant be letters


    string S3 = S1 + S2;
    cout << S3 << endl;//will print 1020

   int Sum = stoi(S1) + stoi(S2);
    cout << Sum << endl;//will print 30


    //READ STRING WITH SPACES
    string FullName;

   // cin >> FullName; doesnt work it will read only firstName

    getline(cin, FullName); //use getline to read the full name
    cout << FullName << endl;

    return 0;

}
