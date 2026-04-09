// CH12 home_light_control_system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int choice;
	int light_on = 0;

	do
	{
		cout << "\n=== Light Switch Menu ===\n";
		cout << "1. Turn ON the Light\n";
		cout << "2. Turn OFF the Light\n";
		cout << "3. Show Light Status\n";
		cout << "4. Exit\n";
		cout << "Enter your choice (1-4): ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			if (light_on == 0)
			{
				cout << "Light is now ON. \n";
				light_on = 1;
			}
			else
			{
				cout << "Light is already ON";
			}
			break;

		case 2:
			if (light_on == 1)
			{
				cout << "Light is now OFF. \n";
				light_on = 0;
			}
			else
			{
				cout << "Light is already OFF";
			}
			break;

		case 3:
			if (light_on == 1)
			{
				cout << "Light is ON.\n";
			}
			if (light_on == 0)
			{
				cout << "Light is OFF. \n";
			}
			break;

		case 4:
			cout << "Exited Menu.\n";
			break;

		default:
			cout << "Invalid choice.\n";
			break;

		}

		cout << "" << endl;

	} while (choice != 4);

	return 0;

}