// Project10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


struct stAddress {
    string Street1;
    string POBOX;
};
struct stOwner {
    string FullName;
    string Phone;
    stAddress Address;
};

struct Car {

    string Brand;
    string Model;
    int Year;
    stOwner Owner;
};

int main()
{
    Car MyCar1,MyCar2;

    MyCar1.Brand = "BMW";
    MyCar1.Model = "X5";
    MyCar1.Year = 2000;


    MyCar1.Owner.FullName = "Mohammed Abu-Hadhoud";
    MyCar1.Owner.Phone = "043586943";

    MyCar1.Owner.Address.POBOX ="sehitkamil";

    //cin >> MyCar1.Year;

    MyCar2.Brand = "Ford";
    MyCar2.Model = "Mustang";
    MyCar2.Year = 2022;

    cout<< MyCar1.Brand <<" " << MyCar1.Model << " " << MyCar1.Year << "\n";
    cout << MyCar1.Owner.FullName<<endl;
    cout << MyCar1.Owner.Phone << endl;

    cout << MyCar1.Owner.Address.POBOX << endl;


    cout << MyCar2.Brand << " " << MyCar2.Model << " " << MyCar2.Year << "\n";

    return 0;
}
