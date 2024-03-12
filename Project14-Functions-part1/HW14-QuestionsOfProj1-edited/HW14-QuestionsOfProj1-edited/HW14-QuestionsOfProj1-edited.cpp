// HW14-QuestionsOfProj1-edited.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

void DisplayMyCardInfo() {

	cout << "*******************\n";
	cout << "Age: 20 \n";
	cout << "City: Syria\n";
	cout << "Name: Sana nassani\n";
	cout << "Country: Aleppo\n";
	cout << "*******************\n";
}

void PrintStars() {
	cout << "************\n";
	cout << "************\n";
	cout << "************\n";
	cout << "************\n";
}
void PrintSentence() {

	cout << "I love Programming!\n\n";
	cout << "I Promise to be the best developer ever!\n\n";
	cout << "I know it will take some time to practice ,but i\nwill achive my goal\n\n";
	cout << "Best Regards,\nSana Nassani.\n";
}
void PrintH() {

	cout << "*   *\n";
	cout << "*   *\n";
	cout << "*****\n";
	cout << "*   *\n";
	cout << "*   *\n";
}
int main()
{
	DisplayMyCardInfo();
	cout << endl;
	PrintStars();
	cout << endl;
	PrintSentence();
	cout << endl;
	PrintH();
}
