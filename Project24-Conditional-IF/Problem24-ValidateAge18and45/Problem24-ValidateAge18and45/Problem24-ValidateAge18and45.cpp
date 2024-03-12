// Problem24-ValidateAge18and45.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int ReadAge() {
	int Age;
	cout << "Please enter your age: \n";
	cin >> Age;
	return Age;
}

bool ValidateNumberInRange(int Number,int From,int To) {

	return (Number >= From && Number <= To);

}

void PrintResult(int Age) {

	if(ValidateNumberInRange(Age,18,45))
		cout <<Age<< " is a Valid age \n";
	else
		cout << Age << " is a InValid age \n";
}

int main()
{
	
	PrintResult(ReadAge());

  
}
