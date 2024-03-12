//Lesson #17 - Variables
//Homework 3
//question1

//edited Lesson #18 Homework Solution
//Lesson #27 - Structures

#include <iostream>
using namespace std;

struct stContact {
	string instagram;
	int phone;
};

struct stAddress {
	string street;
	int postalcode;
	stContact Contact;
};
struct stInfo {
	string Name;
	short int Age;
	string City;
	string Country;
	float MonthlySalary;
	unsigned char Gender;
	bool isMarried;
	stAddress Address;
};
int main()
{

	stInfo Info1;
	cout << "Enter your Name: " << endl;
	cin >>Info1.Name ;

	cout << "Enter your Age: " << endl;
	cin >> Info1.Age;

	cout << "Enter your City: " << endl;
	cin >> Info1.City;

	cout << "Enter your Country: " << endl;
	cin >> Info1.Country;

	cout << "Enter Monthly Salary: " << endl;
	cin >> Info1.MonthlySalary;

	cout << "Enter Gender: " << endl;
	cin >> Info1.Gender;

	cout << "are u Married: " << endl;
	cin >> Info1.isMarried;


	cout << "Whats ur address: " << endl;
	cin >> Info1.Address.street;


	cout << "Whats ur postalcode: " << endl;
	cin >> Info1.Address.postalcode;

	cout << "Whats ur insta: " << endl;
	cin >> Info1.Address.Contact.instagram;

	cout << "Whats ur PhoneNumber: " << endl;
	cin >> Info1.Address.Contact.phone;


	cout << "****************PERSONAL INFO*********************\n";
	cout << "\n";

	cout << "Name: " << Info1.Name << endl;
	cout << "Age: " << Info1.Age<<" years" << endl;
	cout << "City: " << Info1.City << endl;
	cout << "Country: " << Info1.Country << endl;
	cout << "Monthly Salary: " << Info1.MonthlySalary << endl;
	cout << "Gender: " << Info1.Gender << endl;
	cout << "Married: " << Info1.isMarried << endl;
	cout << "\n";

	cout << "****************ADDRESS*********************\n";
	cout << "\n";

	cout << "Street: " << Info1.Address.street << endl;
	cout << "PostalCode: " << Info1.Address.postalcode<< endl;
	cout << "*************************************\n";
	cout << "\n";

	cout << "****************CONTACT*********************\n";
	cout << "Insta: " << Info1.Address.Contact.instagram << endl;
	cout << "Phone: " << Info1.Address.Contact.phone<< endl;
	cout << "*************************************\n";
	cout << "\n";

}
