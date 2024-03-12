// Problem7-HalfNumber.cpp 
//HW FROM Lesson #20 - Arithmetic Operators
#include <iostream>
#include <string>

using namespace std;


int ReadNumber() {

	int Num;

	cout << "Please enter a numnber? " << endl;
	cin >> Num;

	return Num;
}
float CalculateHalfNumber(int Num) {

	return (float)Num / 2;

}
void PrintResults(int Num) {

	string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));

	cout << endl << Result << endl;
}

int main()
{


	PrintResults(ReadNumber());
	

	return 0;
   
}
