// CH11 Candies_check.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int total_candies = 3;
    int candies_eaten = 0;

    while (candies_eaten < total_candies)
    {
        candies_eaten = candies_eaten + 1;
        cout << "candies_eaten =  " << candies_eaten << endl;
    }

    cout << "All candies eaten! Total = " << candies_eaten << endl;
    return 0;
}