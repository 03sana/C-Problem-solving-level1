// Problem36-SimpleCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

float ReadNumber(string Message) {

	float Number = 0;
	cout << Message << endl;
	cin >> Number;

	return Number;
}

enOperationType ReadOpType() {
	char OT = '+'; //initial value

	cout << "Please enter Operation Type (+ , - , * , / )?"<<endl;
	cin >> OT;

	return(enOperationType)OT;
}
float Calculate(float Number1, float Number2, enOperationType OpType) {

	switch (OpType) {
	case enOperationType::Add:
			return Number1 + Number2;
	case enOperationType::Subtract:
		return Number1 - Number2;

	case enOperationType::Multiply:
		return Number1 * Number2;

	case enOperationType::Divide:
		return Number1 / Number2;

	default:
		return Number1 + Number2;
	}
}

int main()
{
	float Number1 = ReadNumber("Please enter the first number? ");
	float Number2 = ReadNumber("Please enter the second number? ");

	enOperationType OpType = ReadOpType();

	cout << endl << "Result = " << Calculate(Number1, Number2, OpType) << endl;
}


//int Number1, Number2;
//char OperationType;

//cout << "Enter Number1: \n";
//cin >> Number1;


//cout << "Enter Number2: \n";
//cin >> Number2;

//cout << "Enter operation type: \n";
//cin >> OperationType;


//switch (OperationType) {

//case '+':
//	cout << Number1 + Number2;
//	break;

//case '-':
//	cout << Number1 - Number2;
//	break;

//case '*':
//	cout << Number1 * Number2;
//	break;

//case '/':
//	cout << Number1 / Number2;
//	break;

//default:
//	cout << "wrong operator";
//}