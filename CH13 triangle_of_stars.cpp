// CH13 triangle_of_stars.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int number;

	cout << "Enter the length/width of the triangle: ";
	cin >> number;

	int row = 1;

	while (row <= number)
	{
		int column = 1;

		while (column <= row)
		{
			cout << "* ";
			column = column + 1;
		}

		cout << endl;
		row = row + 1;

	}

	return 0;

}