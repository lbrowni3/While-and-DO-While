// CH11 guess_random_number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int random = rand() % 10 + 1;

	int number = 0;

	cout << "Welcome to the Number Guessing Game!\n";
	cout << "Guess a number between 1 and 10.\n";

	while (number != random)
	{
		cout << "Enter guess: ";
		cin >> number;

		if (number > random)
		{
			cout << "Too high!\n";
		}
		else if (number < random)
		{
			cout << "Too low!\n";
		}
	}

	cout << "Correct!\n";

	return 0;
}