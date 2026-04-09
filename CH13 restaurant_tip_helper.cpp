// CH13 restaurant_tip_helper.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int bill;
	int tip;
	char choice = 'y';

	do
	{

		do
		{
			cout << "Enter bill amount: $";
			cin >> bill;

			if (bill < 0)
			{
				cout << "Bill amount must be more than 0.\n";
			}
		} while (bill < 0);

		do
		{
			cout << "Enter tip precent (10, 15, or 20): ";
			cin >> tip;

			if (tip != 10 && tip != 15 && tip != 20)
			{
				cout << "Tip precent must be 10, 15, or 20.\n";
			}
		} while (tip != 10 && tip != 15 && tip != 20);

		int tip_amount;
		int total;

		tip_amount = bill * tip / 100;
		total = bill + tip_amount;

		cout << "Tip: $" << tip_amount << endl;
		cout << "Total: $" << total << endl;
		cout << "\n";

		cout << "Calculate another bill? (y/n): ";
		cin >> choice;

	} while (choice == 'y');

	cout << "Goodbye!";

	return 0;

}