// Project23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson #41 - Arrays of Structure

#include <iostream>
#include <string>
using namespace std;

struct strInfo {
    string FirstName;
    string LastName;
    int Age;
    string Phone;
};

int main()
{
    strInfo Persons[2];

    Persons[0].FirstName = "Mohammed";
    Persons[0].LastName = " Abu-Hadhoud";
    Persons[0].Age = 44;
    Persons[0].Phone = "03490349039";

    Persons[1].FirstName = "Ali";
    Persons[1].LastName = "Maher";
    Persons[1].Age = 22;
    Persons[1].Phone = "235345";

    cout << Persons[1].FirstName << endl;

}

