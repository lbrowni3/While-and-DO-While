// CH12 Password_entry.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int password;

	do
	{
		cout << "Enter the secret code: ";
		cin >> password;

	} while (password != 1234);

	cout << "Correct! \n";

	return 0;

}