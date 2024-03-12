// Project18.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include<string>
using namespace std;

int x = 300; //its a gloabal varaiable both can read and modify it
//
void MyFunction1() {
    int x = 500;
    cout << "The value of x inside function is: " << x << endl;
}

int main()
{
    int x = 10;

    cout << "The local value of x inside Main is: " << x << endl;
    MyFunction1();

    ::x++;
    cout << "The global value of x is: " << ::x << endl;

    // ::x means it will skip the x values in the local and it will take the global

    return 0;


}

