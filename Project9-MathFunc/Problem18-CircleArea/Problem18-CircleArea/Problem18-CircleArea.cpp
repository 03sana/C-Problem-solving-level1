// Problem18-CircleArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Problem #18 Circle Area


#include <iostream>
#include<cmath>

using namespace std;

float ReadRadius() {

    float R;
    cout << "Please enter radius R ? : \n";
    cin >> R;

    return R;
}

float CircleArea(float R) {
    const float PI = 3.141592653589793238;


    float Area= PI * pow(R, 2);

    return Area;
}
void PrintResult(float Area) {

    cout << "\n Circle Area = "<< Area;
}
int main()
{
    
    PrintResult(CircleArea(ReadRadius()));
  
  
    
}

