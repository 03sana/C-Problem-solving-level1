// HW7-Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson #24 - Relational Operators

#include <iostream>
using namespace std;
int main()
{
    int A , B ;

    cout << "Please enter the first number A?\n";
    cin >> A;

    cout << "Please enter the first number B?\n";
    cin >> B;

    cout << A << "="<< B << " is " << (A == B)<< endl;
    cout << A << "!=" << B << " is " << (A != B)<< endl;
    cout << A << ">" << B << " is " << (A > B) << endl;
    cout << A << "<" << B << " is " << (A < B) << endl;
    cout << A << ">=" << B << " is " << (A >= B) << endl;
    cout << A << "<=" << B << " is " << (A <= B) << endl;

    return 0;
}
