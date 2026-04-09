// CH13 budgeted_shopping_cart.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int budget;

	do
	{

		cout << "Enter your budget: ";
		cin >> budget;

		if (budget < 0)
		{
			cout << "Budget can not be less than 0.\n";
		}
	} while (budget < 0);

	int total_spent = 0;
	int item_count = 0;
	int price = 0;

	do
	{
		cout << "Enter item price (0 to checkout): ";
		cin >> price;

		bool price_valid = false;
		while (price_valid == false)
		{
			if (price_valid == 0)
			{
				price_valid = true;
			}
			else
			{
				if (price < 0)
				{
					cout << "Price cannot be negative. Re_enter: ";
					cin >> price;
				}
				else
				{
					int remaining = budget - total_spent;

					if (price > remaining)
					{
						cout << "Over Budget! Remaing is " << remaining << ". Re-enter a smaller price ( or 0 to checkout): ";
						cin >> price;
					}
					else
					{
						price_valid = true;
					}
				}
			}
		}

		if (price > 0)
		{
			total_spent = total_spent + price;
			item_count = item_count + 1;

			int remaining = budget - total_spent;
			cout << "Added. Remaining: " << remaining << "\n";

			if (remaining == 0)
			{
				cout << "You have reached your budget exactly. Enter 0 to checkout.\n";
			}
		}
	} while (price != 0);

	cout << "Items purchased: " << item_count << "\n";
	cout << "Total spent: " << total_spent << "\n";
	cout << "Remaining: " << (budget - total_spent) << "\n";

	return 0;
}