#include <iostream>
#include<string>
using namespace std;



struct strInfo {

	string Name;
	int Age;
	string City;
	string Country;
	float MonthlySalary;
	char Gender;
	bool isMarried;

};

void ReadInfo(strInfo &Info) {

	

	cout << "Enter your Name: " << endl;
	cin >> Info.Name;

	cout << "Enter your Age: " << endl;
	cin >> Info.Age;

	cout << "Enter your City: " << endl;
	cin >> Info.City;

	cout << "Enter your Country: " << endl;
	cin >> Info.Country;

	cout << "Enter Monthly Salary: " << endl;
	cin >> Info.MonthlySalary;

	cout << "Enter Gender: " << endl;
	cin >> Info.Gender;

	cout << "are u Married: " << endl;
	cin >> Info.isMarried;
}

void PrintInfo(strInfo Info) {

	cout << "*************************************\n";
	cout << "Name: " << Info.Name << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "City: " << Info.City << endl;
	cout << "Country: " << Info.Country << endl;
	cout << "Monthly Salary: " << Info.MonthlySalary << endl;
	cout << "Gender: " << Info.Gender << endl;
	cout << "Married: " << Info.isMarried << endl;
	cout << "*************************************\n";

}
int main()
{

	strInfo Person1;

	ReadInfo(Person1);
	PrintInfo(Person1);


}
