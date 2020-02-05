#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	int repeats = 100,
		headCount = 0,
		tailCount = 0,
		random = 0;

	srand(time(NULL));

	for (int i = 0; i < repeats; i++)
	{
		random = rand() % 2;

		cout << random;

		if (random == 0)
		{
			headCount++;
		}
		if (random == 1)
		{
			tailCount++;
		}

	}

	cout << endl << "Tails: " << tailCount << endl;
	cout << "Heads: " << headCount << endl;

	system("Pause");
	return 0;
}