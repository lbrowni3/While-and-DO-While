// CH13.5 right_aligned_triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{

	int height;

	cout << "Enter the scale of the triangle: ";
	cin >> height;

	for (int row = 1; row <= height; row++)
	{
		for (int space = 1; space <= height - row; space++)
		{
			cout << " ";
		}
		for (int star = 1; star <= row; star++)
		{
			cout << "*";
		}

		cout << "\n";
	}

	return 0;

}