// Problem45-MonthOfYear.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Problem44-DayofWeek.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

enum enMonthOfYear { Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, 
	Jun = 6, Jul = 7, Aug = 8, Sep = 9, Oct = 10, 
	Nov = 11, Dec = 12 };

int ReadNumberInRange(string Message, int From, int To) {
	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;

	} while (Number<From || Number > To);

	return Number;

}

enMonthOfYear ReadMonthMonthOfYear() {

	return (enMonthOfYear) ReadNumberInRange("Please enter Month Number [1-12]",1,12);
}

string  GetMonthOfYear(enMonthOfYear Month) {
	switch (Month) {
	case enMonthOfYear::Jan:
		return "January";
	case enMonthOfYear::Feb:
		return "February";
	case enMonthOfYear::Mar:
		return "March";
	case enMonthOfYear::Apr:
		return "April";
	case enMonthOfYear::May:
		return "May";
	case enMonthOfYear::Jun:
		return "June";
	case enMonthOfYear::Jul:
		return "July";
	case enMonthOfYear::Aug:
		return "August";
	case enMonthOfYear::Sep:
		return "September";
	case enMonthOfYear::Oct:
		return "Octobor";
	case enMonthOfYear::Nov:
		return "November";
	case enMonthOfYear::Dec:
		return "December";
	default:
		return "Not a Valid Month";

	}

}
int main()
{

	cout << GetMonthOfYear(ReadMonthMonthOfYear());
}


//
//int Month;
//cout << "enter the day: \n";
//cin >> Month;
//
//
//switch (Month) {
//
//case 1:
//	cout << "January";
//	break;
//
//case 2:
//	cout << "February";
//	break;
//
//case 3:
//	cout << "March";
//	break;
//
//case 4:
//	cout << "April";
//	break;
//
//case 5:
//	cout << "May";
//	break;
//
//case 6:
//	cout << "June";
//	break;
//
//case 7:
//	cout << "July";
//	break;
//
//case 8:
//	cout << "August";
//	break;
//
//case 9:
//	cout << "September";
//	break;
//
//case 10:
//	cout << "Octobor";
//	break;
//
//case 11:
//	cout << "November";
//	break;
//
//case 12:
//	cout << "December";
//	break;
//
//default:
//	cout << "Wrong Month";
//
//}
//
