// CH12 Positive_numbers_only.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int number;

	do
	{
		cout << "Enter a positive number: ";
		cin >> number;

	} while ( number % 2 != 0);

	cout << "Thank you! \n";

	return 0;

}