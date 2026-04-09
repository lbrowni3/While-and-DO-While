
#include <iostream>
using namespace std;

int main()
{

	int counter = 0;
	int totalsum = 0;

	while (counter <= 5)
	{
		totalsum = totalsum + counter;
		counter = counter + 1;

			cout << "Sum = " << totalsum << endl;
	}

	return 0;
}