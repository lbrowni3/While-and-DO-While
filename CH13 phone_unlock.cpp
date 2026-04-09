// CH13 phone_unlock.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int pin;
	char choice = 'y';

	do
	{
		cout << "Phone locked. Enter 4-digit PIN. \n";
		cin >> pin;

		while (pin != 4321)
		{
			cout << "Incorrect. Try again. \n";
			cin >> pin;
		}

		if (pin == 4321)
		{
			cout << "Unlocked!\n";
			cout << "Lock phone and try again? (y/n): ";
			cin >> choice;
		}

	} while (choice == 'y');

	cout << "Goodbye! \n";

	return 0;

}
