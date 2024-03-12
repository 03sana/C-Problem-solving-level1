// Problem19-CircleAreaThroughDiameter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Problem #19 - Circle Area Through Diameter


#include <iostream>
#include<cmath>

using namespace std;



float ReadDiameter() {

    float D;

    cout << "Please enter radius D ?: \n";
    cin >> D;

    return D;
}

float CircleAreaByDiameter(float D) {

    const float PI = 3.141592653589793238;

    float Area = (PI * pow(D, 2)) / 4;

    return Area;
}
void PrintResult(float Area) {

    cout << "\n Circle Area Through Diameter = " << Area << endl;
}

int main()
{
    PrintResult(CircleAreaByDiameter(ReadDiameter()));
   
    
}

