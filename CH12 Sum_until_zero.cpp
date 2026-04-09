// CH12 Sum_until_zero.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

int main()
{

	int total = 0;
	int number;

	do
	{
		cout << "Enter a number (0 to stop): ";
		cin >> number;
		total = total + number;
		cout << "Current total: " << total << endl;
	} while (number != 0);

	cout << "Thank you." << endl;

		return 0;

}