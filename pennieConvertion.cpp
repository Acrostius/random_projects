#include <iostream>

class Money
{
public:
	Money();
	~Money();

	double coinValue = 0;
	char coinType = '0';
	double currentYen = 0, currentEuro = 0, currentPound = 0, currentKroner = 0, currentYuan = 0;

	void printCurrencies()
	{
		std::cout << " - y for yen.\n"
			<< " - e for euro.\n"
			<< " - p for pounds.\n"
			<< " - k for kroner.\n"
			<< " - c for yuan.\n";
	}

private:

};

Money::Money()
{
}

Money::~Money()
{
}

int main()
{
	Money money;
	money.coinValue = 0;
	money.coinType = '0';
	money.currentYen = 0.0074, money.currentEuro = 1.04, money.currentPound = 1.21, money.currentKroner = 0.1,
	money.currentYuan = 0.15;

	std::cout << "Please enter the amount of money followed by a currency type:\n";
	money.printCurrencies();
	std::cout << "e.g. 10e will convert 10 euros to dollars.\n\n";
	std::cout << ":";
	std::cin >> money.coinValue >> money.coinType;

	switch (money.coinType)
	{
	case 'y':
		std::cout << money.coinValue << " yen converted to dollars is $" << money.coinValue * money.currentYen;
		break;
	case 'e':
		std::cout << money.coinValue << " euro converted to dollars is $" << money.coinValue * money.currentEuro;
		break;
	case 'p':
		std::cout << money.coinValue << " pound converted to dollars is $" << money.coinValue * money.currentPound;
		break;
	case 'k':
		std::cout << money.coinValue << " kroner converted to dollars is $" << money.coinValue * money.currentKroner;
		break;
	case 'c':
		std::cout << money.coinValue << " yuan converted to dollars is $" << money.coinValue * money.currentYuan;
		break;
	default:
		std::cout << "You typed a currency type that isn't supported. Restart app and try again.\n";
		break;
	}
	
}
