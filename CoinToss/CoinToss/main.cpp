#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
START:

	system("CLS");

	//For bonus points, replace this magic number with
	//a user defined input using a cin

	int repeats = 100,
		headCount = 0,
		tailCount = 0,
		random = 0;


	char cont = ' ';


	srand(time(NULL));

	for (int i = 0; i < repeats; i++)
	{
		random = rand() % 2;
		
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

	cout << "Would you like to go again? (y/n)" << endl;
	cin >> cont;

	if (cont == 'y' || cont == 'Y')
		goto START;
	else
		return 0;

	system("Pause");
	return 0;
}