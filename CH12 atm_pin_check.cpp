// CH12 atm_pin_check.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
  
	int pin;

	cout << "Enter your pin: ";
	cin >> pin;

	while (pin != 1234)
	{
		cout << "Incorrect. Try again: ";
		cin >> pin;
	}

	cout << "Access Granted" << endl;

	return 0;

}
