// Problem42TaskDurationInSeconds.cpp : This file contains the 'main' function. Program execution begins and ends there.

//HW FROM Lesson #20 - Arithmetic Operators
#include <iostream>
#include <string>

using namespace std;

struct strTaskDuration {

	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};


int ReadPositiveNumber(string Message) {

	int Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

strTaskDuration ReadTaskDuration(){

	strTaskDuration TaskDuration;

	TaskDuration.NumberOfDays = ReadPositiveNumber("Please enter Number Of Days:");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Please enter Number Of Hours:");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please enter Number Of Minutes:");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please enter Number Of Seconds:");

	return TaskDuration;
}

int TaskDurationInSeconds(strTaskDuration TaskDuration){


	int DurationInSeconds = 0;

	DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfSeconds;

	return DurationInSeconds;
}

int main()
{
	cout << "\nTask Duration In Seconds: " << TaskDurationInSeconds(ReadTaskDuration());
	return 0;

}



//double NumberOfDays, NumberOfHours , NumberOfMinutes, NumberOfSeconds, TotalSeconds;

//cout << "Please enter NumberOfDays: ";
//cin >> NumberOfDays;

//cout << "Please enter NumberOfHours: ";
//cin >> NumberOfHours;

//cout << "Please enter NumberOfMinutes: ";
//cin >> NumberOfMinutes;

//cout << "Please enter NumberOfSeconds: ";
//cin >> NumberOfSeconds;

//TotalSeconds = (NumberOfDays * 24 * 60 * 60)+
//	(NumberOfHours * 60 * 60) +
//	(NumberOfMinutes * 60) +
//	NumberOfSeconds;


//cout << "TotalSeconds: " << round(TotalSeconds) << " Seconds\n";

