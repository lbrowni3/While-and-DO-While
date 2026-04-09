// CH13 multiplication_table.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int number;

	cout << "Enter a number to create a multiplication table: ";
	cin >> number;

	int row = 1;

	while (row <= number)
	{
		int column = 1;

		while (column <= number)
		{
			cout << row * column << "\t";
			column = column + 1;
		}

		cout << endl;
		row = row + 1;

	}

	return 0;

}