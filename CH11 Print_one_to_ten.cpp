// CH11 Print_one_to_ten.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int number;

	cout << "Enter a number: ";
	cin >> number;

	int counter = 1;

	while (counter <= number)
	{
		cout << counter << endl;
		counter = counter + 1;
	}

	return 0;
}

