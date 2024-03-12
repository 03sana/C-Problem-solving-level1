// HW21-Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson #39 - Arrays

#include <iostream>
using namespace std;

int main()
{
    float Grades[3];

    cout << "please enter grade1? \n";
    cin >> Grades[0];

    cout << "please enter grade2? \n";
    cin >> Grades[1];


    cout << "please enter grade3? \n";
    cin >> Grades[2];

    cout << "****************************\n";
    float Avg =(Grades[0] + Grades[1] + Grades[2] )/ 3;

    cout << "the average of grades is: " << Avg << endl;

}

