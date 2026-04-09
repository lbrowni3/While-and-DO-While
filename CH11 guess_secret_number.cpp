// CH11 guess_secret_number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int number;
	int seven = 7;

	cout << "Guess the Number: ";
	cin >> number;

	while (number != seven)
	{
		cout << "Wrong! Try again : ";
		cin >> number;
	}

	cout << "You got it!\n";

	return 0;
}