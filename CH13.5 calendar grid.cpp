// CH13.5 calendar grid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int weeks = 5;
	int days_week = 7;
	int days_month;

	int day_one = 1;

	cout << "Enter how many days are in the month: ";
	cin >> days_month;

	for (int row = 1; row <= weeks; row++)
	{
		for (int column = 1; column <= days_week; column++)
		{
			if (day_one <= days_month)
			{
				cout << day_one << "\t";
				day_one++;
			}
			else
			{
				cout << "\t";
			}
		}
		cout << "\n";
	}

	return 0;

}