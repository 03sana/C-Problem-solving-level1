// Problem22-CircleAreaInIscoscelesTri.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Project21-CircleAreaAlongCircum.cpp : This file contains the 'main' function. Program execution begins and ends there.

//HW FROM Lesson #20 - Arithmetic Operators
#include <iostream>
#include<math.h>
using namespace std;
const float PI = 3.14;

void ReadTriangleData(float &A, float&B) {

	cout << "Please Enter Side A : \n";
	cin >> A;

	cout << "Please Enter Side B : \n";
	cin >> B;
}
float CircleAreaByITriangle(float A, float B) {

	const float PI = 3.141592653589793238;
	float Area = PI * (pow(B,2) / 4 ) * ((2 * A - B) / (2 * A + B));

	return Area;
}
void PrintResult(float Area) {

	cout << "\n Circle Area = " << Area << endl;
}
int main()
{
	float A, B;

	ReadTriangleData(A, B);
	PrintResult(CircleAreaByITriangle(A, B));
	


	return 0;

}
