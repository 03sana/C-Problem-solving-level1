// Problem22-CircleAreaInscribedInIsoscelesTriangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>

using namespace std;

int main()
{

    float a,b, area;
    const float PI = 3.14;
    cout << "enter a: ";
    cin >> a;

    cout << "enter b: ";
    cin >> b;

    area = PI * (pow(b, 2)) / 4 * ((2 * a - b) / (2 * a + b));
    cout << floor(area);
}
