// CH13.5 checkerboard_pattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int size;

	cout << "Enter the size of the checkerboard pattern: ";
	cin >> size;

	for (int row = 1; row <= size; row++)
	{
		for (int column = 1; column <= size; column++)
		{
			if ((row + column) % 2 == 0)
			{
				cout << "#";
			}
			else
			{
				cout << ".";
			}
		}

		cout << "\n";
	}

	return 0;

}
