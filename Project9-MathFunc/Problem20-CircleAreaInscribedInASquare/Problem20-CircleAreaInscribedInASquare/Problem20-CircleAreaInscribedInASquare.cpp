// Problem20-CircleAreaInscribedInASquare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Problem #20 Circle Area Inscribed in a Square


#include <iostream>
#include<cmath>

using namespace std;

float ReadSquareSide() {
    //A is the square
    float A;

    cout << "Please enter Square Side A: \n";
    cin >> A;
    
    return A;
}

float CircleAreaInscribedInSquare(float A) {
    const float PI = 3.141592653589793238;

    float Area = (PI * (pow(A, 2))) / 4;

    return Area;
}

void PrintResult(float Area)
{
    cout << "\n Circle Area = " << Area;
}


int main()
{
  
    PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));
}

