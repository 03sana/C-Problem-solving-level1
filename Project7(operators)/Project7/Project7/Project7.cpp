// Project7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Lesson #21 - Increment Decrement Operators: ++, --
//Lesson #22 - Postfix vs Prefix : ++A vs A++, --A vs A--
//Session #23 - Assignment Operators
//Lesson #24 - Relational Operators
#include <iostream>
using namespace std;
int main()
{

   //PROGRAM1:Increment Decrement Operators
   //int A = 10, B = 20;
  
   // A++;
   //B--;
   // ++A;
   // --B;
   //cout << "A = " << A << endl;
   //cout << "B = " << B << endl;

    //there is a diffrence between ++A and A++ 

    //PROGRAM2:Postfix vs Prefix

     // int A = 10;
     // int B = A++; //B will take the old value of A, then A will increase by 1

     // cout << "B = " << B << endl;
     // cout << "A = " << A << endl;


     // B = ++A;//A will take the old value of B, then B will increase by 1

     // cout << "B = " << B << endl;
     // cout << "A = " << A << endl;



    //PROGRAM3:Session #23 - Assignment Operators

    //int A = 10, B = 20;

    //A += B; //A = A + B
    //cout << "A = " << A << endl;



    //A -= B; //A = A - B
    //cout << "A = " << A << endl;


    //A *= B; //A = A * B
    //cout << "A = " << A << endl;


    //A /= B; //A = A / B
    //cout << "A = " << A << endl;


    //A %= B; //A = A % B
    //cout << "A = " << A << endl;


    //PROGRAM4: Lesson #24 - Relational Operators

    int A = 10, B = 20;

    cout << (A == B) << endl;
    cout << (A != B) << endl;
    cout << (A > B) << endl;
    cout << (A < B) << endl;
    cout << (A >= B) << endl;
    cout << (A <= B) << endl;





   return 0;

}
