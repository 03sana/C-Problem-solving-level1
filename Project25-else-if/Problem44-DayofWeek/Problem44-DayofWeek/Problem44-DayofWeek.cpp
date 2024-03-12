// Problem44-DayofWeek.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7 };
int ReadNumberInRange(string Message, int From, int To) {


	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;

	} while (Number<From || Number > To);

	return Number;
}

enDayOfWeek ReadDayOfWeek() {

	return (enDayOfWeek) ReadNumberInRange("Please enter day number Sat = 1, Sun = 2, Mon = 3, Tue = 4, Wed = 5, Thu = 6, Fri = 7",1,7);
}

string  GetDayOfWeek(enDayOfWeek Day) {

	switch (Day) {
	case enDayOfWeek::Sat:
		return "Saturday";
	case enDayOfWeek::Sun:
		return "Sunday";
	case enDayOfWeek::Mon:
		return "Monday";
	case enDayOfWeek::Tue:
		return "Tuesday";
	case enDayOfWeek::Wed:
		return "Wednesday";
	case enDayOfWeek::Thu:
		return "Thursday";
	case enDayOfWeek::Fri:
		return "Friday";

	default:
		return "Not a Valid Day";
	
	}

	
}

int main()
{
	
	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;

}




















//
//
//int Day;
//cout << "enter the day: \n";
//cin >> Day;
//
//
//switch (Day) {
//case 1:
//	cout << "its Sunday";
//	break;
//
//case 2:
//	cout << "its Monday";
//	break;
//
//case 3:
//	cout << "its Tuesday";
//	break;
//
//case 4:
//	cout << "its Wednesday";
//	break;
//
//case 5:
//	cout << "its Thursday";
//	break;
//
//case 6:
//	cout << "its Friday";
//	break;
//
//case 7:
//	cout << "its Saturday";
//	break;
//
//default:
//	cout << "Wrong Day";
//
//}