//Lesson #17 - Variables
//Homework 3
//question1

//edited Lesson #18 Homework Solution

#include <iostream>
using namespace std;
int main()
{

	string Name;
	short int Age;
	string City;
	string Country;
	float MonthlySalary;
	//float YearlySalary = MonthlySalary * 12;
	//float YearlySalary;

	unsigned char Gender;
	bool isMarried;


	cout << "*************************************\n"; 

	cout << "Enter your Name: "<< endl;
	cin >> Name;

	cout << "Enter your Age: "<< endl;
	cin >> Age;

	cout << "Enter your City: "<< endl;
	cin >> City;

	cout << "Enter your Country: "<< endl;
	cin >> Country;

	cout << "Enter Monthly Salary: " << endl;
	cin >> MonthlySalary;

	cout << "Enter Gender: " << endl;
	cin >> Gender;

	cout << "are u Married: " << endl;
	cin >> isMarried;




	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "City: " << City << endl;
	cout << "Country: " << Country << endl;
	cout << "Monthly Salary: " << MonthlySalary << endl;
	cout << "Gender: " << Gender << endl;
	cout << "Married: " << isMarried << endl;
	cout << "*************************************\n";



}
