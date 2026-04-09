// CH13 multiplication_pyramid.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int max_number;

    cout << "Enter the highest number on the table: ";
    cin >> max_number;

    for (int current_number = 1; current_number <= max_number; current_number++)
    {
        for (int multiplier = 1; multiplier <= current_number; multiplier++)
        {
            cout << current_number * multiplier << " ";
        }
        cout << "\n";
    }

    return 0;
}

