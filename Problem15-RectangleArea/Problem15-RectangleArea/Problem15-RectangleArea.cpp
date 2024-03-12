// Problem15-RectangleArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

void ReadNumbers(float& A, float& B) {

	cout << "Please Enter rectangle width A ? : \n";
	cin >> A;
	cout << "Please Enter rectangle length B ? : \n";
	cin >> B;
}

float CalculateRectangleArea(float A, float B) {

	return A * B;
}

void PrintResult(float Area) {
	cout << "\n Rectangle Area = : " << Area << endl;

}

int main()
{

	float A, B;
	ReadNumbers(A, B);
	PrintResult(CalculateRectangleArea(A, B));


}
