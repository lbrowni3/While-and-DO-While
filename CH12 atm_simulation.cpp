// CH12 atm_simulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int choice;
	int balance = 1000;
	int money;

	do
	{
		cout << "=== ATM MENU ===\n";
		cout << "1. Deposit Money\n";
		cout << "2. Withdraw Money\n";
		cout << "3. Check Balance\n";
		cout << "4. Exit\n";
		cout << "Balance: $" << balance << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Enter amount to deposit: ";
			cin >> money;

			cout << "Deposited: $" << money << endl;
			balance = balance + money;
			
			break;

		case 2:
			cout << "Enter amount to withdraw: ";
			cin >> money;

			if (balance < money)
			{
				cout << "Withdrawal can not be larger than your balance.\n";
				break;
			}
			else
			{
				cout << "Withdrew: $" << money << endl;
				balance = balance - money;
			}
			break;

		case 3:

			cout << "Balance is currently: $" << balance << endl;
			break;

		case 4:

			cout << "Menu Exited.\n";
			break;
			
		default:

			cout << "Invalid Choice. \n";
			break;
		}

		cout << "" << endl;

	} while (choice != 4);

	return 0;
}