#include <iostream>

int main()
{
	int numOfGrains = 1;
	int thousandGrain = 1024;
	int millionGrain = 1048576;
	int billionGrain = 1073741824;

	for (int currentSquare = 1; currentSquare <= 64; ++currentSquare)
	{
		if (numOfGrains == thousandGrain)
			std::cout << "You need " << currentSquare << " squares to get at least 1000 grains of rice\n";

		if (numOfGrains == millionGrain)
			std::cout << "You need " << currentSquare << " squares to get at least 1000000 grains of rice\n";
	
		if (numOfGrains == billionGrain)
		{
			std::cout << "You need " << currentSquare << " squares to get at least 1000000000 grains of rice\n";
			break;
		}

		numOfGrains *= 2;
	}

}
