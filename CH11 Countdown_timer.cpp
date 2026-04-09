// CH11 Countdown_timer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int countdown;

	cout << "Enter a number: ";
	cin >> countdown;

	while (countdown >= 1)
	{
		cout << countdown << " ";
		countdown = countdown - 1;
		
	}

	return 0;
}