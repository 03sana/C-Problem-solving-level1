// Project10-11-StructsandEnumsEXAMPLE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//EXAMPLE

#include <iostream>
using namespace std;

//always name the enum with en as prefix 
enum enColor{Red,Green,Yellow,Blue};
enum enGender { Male,Female };
enum enMaritalStatus { Single,Married };

//always name the struct with st as prefix 

struct stAddress {

	string StreetName;
	string BuildingNo;
	string POBox;
	string ZipCode;
};

struct stContactInfo {

	string Phone;
	string Email;
	//variable inside struct from type struct
	stAddress Address;
};

struct stPerson {
	string FirstName;
	string LastName;

	//ContactInfo isvariable mn no3 stContactInfo 

	stContactInfo ContactInfo;

	enMaritalStatus MaritalStatus;
	enGender Gender;
	enColor FavouriteColor;


};

int main()
{
	stPerson Person1;

	Person1.FirstName = "Mohammed ";
	Person1.LastName = "Abu-Hadhud";

	Person1.ContactInfo.Email = "xyz@gmail.com";
	Person1.ContactInfo.Phone = "+9666302011";
	Person1.ContactInfo.Address.POBox = "77777";
	Person1.ContactInfo.Address.ZipCode = "222122";
	Person1.ContactInfo.Address.StreetName = "osmangazi";
	Person1.ContactInfo.Address.BuildingNo = "313";

	Person1.Gender = enGender::Male;
	Person1.MaritalStatus = enMaritalStatus::Married;
	Person1.FavouriteColor = enColor::Green;

	cout << Person1.FirstName << endl;
	cout << Person1.LastName << endl;
	cout << Person1.ContactInfo.Email << endl;
	cout << Person1.ContactInfo.Phone << endl;
	cout << Person1.ContactInfo.Address.BuildingNo << endl;

	cout << Person1.Gender << endl;


	return 0;
}


//remember in main u can only put Person u cant use anything else