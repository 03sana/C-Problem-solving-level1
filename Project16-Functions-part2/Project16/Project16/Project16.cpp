// Project16.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson #34 - Functions Part II - Functions vs Procedures


#include <iostream>
#include<string>

using namespace std;

void myFunction() {
    cout << "this is my first function, it got executed" << endl;
}

string myFunction2() {

    return "this is my first returning value function , this is the value.";
}

int myFunction3() {

    int x = 10;
    int y = 20;

    return x * y;
}
float myFunction4() {

    float x = 10.5;
    float y = 20.3;

    return x * y;
}

int main()
{
   

    myFunction();
    cout << myFunction2() << endl;

    int Result;
    Result = myFunction3() + 50;
    cout << Result<<endl;


    float Result2;
    Result2 = ceil(myFunction4());
    cout << Result2<<endl;
}

