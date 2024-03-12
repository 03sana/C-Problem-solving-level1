// Project3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    /***************DISPLAYING VARIABLES********************/


    int MyAge = 45;
    cout << MyAge << endl;
    cout << "My age is " << MyAge << "years old"<<endl;

    MyAge = 27;
    cout << MyAge << endl;
    cout << endl;


   /***************OTHER TYPES OF VARIABLES********************/

    int myNumber = 52;
    float myFloatNumber = 7.84;
    double myDoubleNumber = 21.89822;
    char myLetter = 'M';
    string myText = "Mohammed";
    bool Myboolean = true;

    cout << myNumber << endl;
    cout << myFloatNumber << endl;
    cout << myDoubleNumber << endl;
    cout << myLetter << endl;
    cout << myText << endl;
    cout << Myboolean << endl;
    
    cout << endl;

    /****************PRINT SINGLE QUOTE*******************/

    char myLetter2 = '\'';
    cout << myLetter2 << endl;

    cout << endl;

    /****************DECLARE MANY VARIABLES*******************/

    int x = 4;
    int y = 10;
    int sum = x + y;
    cout << sum;
    cout << endl;

    int x1 = 4, y1=10, sum1=x+y;
    cout << sum1;
    cout << endl;

    int x2 = 4;
    int y2 = 10;
    cout << x + y;
    cout << endl;


    int x3 = 2, y3 = 4, z=50;
    cout << x3+y3+z;
    cout << endl;

    char char1 = 'A', char2='B',char3='C';

    cout << char1 << char2 << char3 << " reversed is " << char3 << char2 << char1 << endl;

    /******************NAMING VARIABLES**************************/

    short int age = 10, Age = 50;
    int My Age;//wrong
    int My - Age;//wrong


    int My_Age;
    int _Age;

    string 5Name; //wrong
    string Name5;

    string @Name;//wrong
    string Amount#; //wrong


    string sales& amount;//wrong

    int for;//wrong

    int string;//wrong

    /**********Constants****************/

    const int MinutesPerHour = 60;
   // MinutesPerHour = 10; YOU CANNOT CHANGE ITS VALUE

    cout << MinutesPerHour << endl;
    
    return 0;
}
