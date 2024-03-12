// Problem34-CommissionPerc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int ReadTotalSales() {
    int TotalSales;

    cout << "Please enter a Total Sales? " << endl;
    cin >> TotalSales;

    return TotalSales;
}

float GetComissonPercentage(float TotalSales) {

    if (TotalSales >= 1000000)
        return 0.01;
    else if (TotalSales >= 500000)
        return 0.02;
    else if (TotalSales >= 100000)
        return 0.03;
    else if (TotalSales >= 50000)
        return 0.005;
    else
        return 0.00;

}

float CalculateTotalComisson(float TotalSales) {

    return GetComissonPercentage(TotalSales) * TotalSales;
}

int main()
{
    float TotalSales = ReadTotalSales();

    cout << endl << "Comisson Percentage = " << GetComissonPercentage(TotalSales);
    cout << endl << "Total Comisson = " << CalculateTotalComisson(TotalSales);


  
}

