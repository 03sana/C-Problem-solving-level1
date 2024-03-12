//Lesson #19 - Datatypes Sizes & Ranges

#include <iostream>
using namespace std;

//Lesson #19 - Datatypes Sizes & Ranges
int main()
{
    //Note: by default everything is signed

    int v1; //same as below
    signed int v2;//same

    unsigned int v3;//doubles the size

    short int v4; //
    short v5; //short is enough u dont have to write int

    unsigned short int v6;
    unsigned short v7;

    signed long int v8;
    long int v9;
    long v10;

    unsigned long v11;

    long long int v12;

    unsigned long long v13;

    long double v14;

    signed char v15;
    char v16;

    unsigned char v17;




    /******************************************************/
    double distance = 56E12; //56E12 is equal to 56*10^12
    cout << distance << endl;

    short d = 3434233; //error out of range //returend wrong numb
    cout << d << endl;

    unsigned int a = -10; // error! can only store positive number //it returned the max storage 
    cout << a << endl;

    /********************************************SIZE OF DATA TYPE****************************************************************/
    cout << "The size of bool data type is " << sizeof(bool) << "\n";
    cout << "The size of char data type is " << sizeof(char) << "\n";
    cout << "The size of short int data type is " << sizeof(short int) << "\n";
    cout << "The size of int data type is " << sizeof(int) << "\n";


    cout << "The size of long data type is " << sizeof(long) << "\n";
    cout << "The size of long long data type is " << sizeof(long long) << "\n";

    cout << "The size of float data type is " << sizeof(float) << "\n";
    cout << "The size of float data type is " << sizeof(float) << "\n";

    /************************************************RANGE OF DATATYPE************************************************************/










    return 0;
}
