
// Problem11-avgPassFail.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Problem8-PassFail.cpp : This file contains the 'main' function. Program execution begins and ends there.



#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2 };

void ReadNumbers(int& Mark1, int& Mark2, int& Mark3) {
	cout << "Please enter first number: ";
	cin >> Mark1;
	cout << "Please enter second number: ";
	cin >> Mark2;
	cout << "Please enter third number: ";
	cin >> Mark3;
}

int SumOf3Marks(int Mark1, int Mark2, int Mark3) {

	return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3) {

	return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

enPassFail CheckAverage(float Average) {

	if (Average >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintReasults(float Average) {

	cout << "\n your avrage is:  " << Average << endl;

	if (CheckAverage(Average) == enPassFail::Pass)
		cout << "\n You Passed" << endl;
	else 
		cout << "\n You Failed" << endl;

}

int main()
{

	int Mark1, Mark2, Mark3;

	ReadNumbers(Mark1, Mark2, Mark3);
	PrintReasults(CalculateAverage(Mark1, Mark2, Mark3));


	return 0;
}
