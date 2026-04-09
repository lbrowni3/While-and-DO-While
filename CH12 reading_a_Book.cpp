// CH12 reading_a_Book.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	string response;

	cout << "Do you want to turn to the next page? (yes/no): ";
	cin >> response;

	while (response == "yes")
	{
		cout << "You moved to the next page.\n";

		cout << "Do you want to turn to the next page? (yes/no): ";
		cin >> response;
	}

	cout << "You closed the book. \n";

	return 0;
}
