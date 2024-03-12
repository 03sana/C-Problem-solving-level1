// Project11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//lesson 28 ENUMS

#include <iostream>
using namespace std;

//0 1 2 3
enum Color {Red=100,Green=200,Yellow=300,Blue=400};
enum Direction { North, South, East, West };
enum Week { Sat, Sun, Mon, Tue , Wed, Thu,Fri};
enum Gender{Male,Female};
enum Status{Single,Married};

//by default they are 0,1,2.... but u can put specific values

int main()
{

	Color MyColor;
	Direction MyDirection;
	Week Today;
	Status MyStatus;

	MyColor = Color::Green; 
	MyDirection = Direction::South;
	Today = Week::Wed;
	MyStatus = Status::Single;



	cout << "Color is: " << MyColor << endl;//prints 2
	cout << "Direction is: " << MyDirection << endl;//prints 2
	cout << "Week is: " << Today << endl;//prints 2
	cout << "Status is: " << MyStatus << endl;//prints 2



}

