//program to run a Rock Paper Scissors match

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{

	srand(time(0));

	string player;
	string computer;
	int length;
	char choice = 'y';


	do
	{

		do
		{
			cout << "Enter an ODD match length: ";
			cin >> length;

			if (length % 2 != 1)
			{
				cout << "Please input an ODD number.\n";
			}
		} while (length % 2 != 1);

		int user_wins = 0;
		int computer_wins = 0;
		int wins_needed = length + 1 / 2;

		do
		{
			cout << "" << endl;
			cout << "Enter rock, paper, or scissors: " << endl;
			cin >> player;

			int random = rand() % 3;

			if (random == 0)
			{
				computer = "rock";
			}
			else if (random == 1)
			{
				computer = "paper";
			}
			else
			{
				computer = "scissors";
			}

			cout << "" << endl;
			cout << "You picked: " << player << endl;
			cout << "Computer picked: " << computer << endl;

			if (player == computer)
			{
				cout << "Tie" << endl;
				cout << "\n";
				cout << "Score: \n";
				cout << "You: " << user_wins << "\t Computer: " << computer_wins << endl;
			}
			if (player == "rock")
			{
				if (computer == "scissors")
				{
					cout << "You Win!" << endl;
					user_wins = user_wins + 1;
					cout << "\n";
					cout << "Score: \n";
					cout << "You: " << user_wins << "\t Computer: " << computer_wins << endl;
				}
				else if (computer == "paper")
				{
					cout << "You Lose." << endl;
					computer_wins = computer_wins + 1;
					cout << "\n";
					cout << "Score: \n";
					cout << "You: " << user_wins << "\t Computer: " << computer_wins << endl;
				}
			}
			if (player == "paper")
			{
				if (computer == "rock")
				{
					cout << "You Win!" << endl;
					user_wins = user_wins + 1;
					cout << "\n";
					cout << "Score: \n";
					cout << "You: " << user_wins << "\t Computer: " << computer_wins << endl;
				}
				else if (computer == "scissors")
				{
					cout << "You Lose." << endl;
					computer_wins = computer_wins + 1;
					cout << "\n";
					cout << "Score: \n";
					cout << "You: " << user_wins << "\t Computer: " << computer_wins << endl;
				}
			}
			if (player == "scissors")
			{
				if (computer == "paper")
				{
					cout << "You Win!" << endl;
					user_wins = user_wins + 1;
					cout << "\n";
					cout << "Score: \n";
					cout << "You: " << user_wins << "\t Computer: " << computer_wins << endl;
				}
				else if (computer == "rock")
				{
					cout << "You Lose." << endl;
					computer_wins = computer_wins + 1;
					cout << "\n";
					cout << "Score: \n";
					cout << "You: " << user_wins << "\t Computer: " << computer_wins << endl;
				}
			}
		} while (user_wins < wins_needed && computer_wins < wins_needed);

		if (user_wins > computer_wins)
		{
			cout << "You beat the computer!\n";
		}
		else
		{
			cout << "The computer beat you.\n";
		}

		cout << "Play again? (y/n): ";
		cin >> choice;

	} while (choice == 'y');

	cout << "Goodbye!\n";

	return 0;
}
