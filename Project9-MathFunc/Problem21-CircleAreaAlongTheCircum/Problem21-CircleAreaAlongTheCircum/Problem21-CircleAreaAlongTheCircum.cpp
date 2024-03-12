// Problem21-CircleAreaAlongTheCircum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Problem #21 - Circle Area Along the Circumference


#include <iostream>
#include<cmath>

using namespace std;

float ReadCircumference() {
    float L;
    cout << "Please enter Circumference L ? : \n";
    cin >> L;
    return L;
}
float CalcAreaByCircumference(float L) {
    const float PI = 3.141592653589793238;

    float Area = (pow(L, 2)) / (4 * PI);

    return Area;
}
void PrintResult(float Area) {

    cout << "\n Circle Area " << Area << endl;
}

int main()
{
    
    PrintResult(CalcAreaByCircumference(ReadCircumference()));


}
