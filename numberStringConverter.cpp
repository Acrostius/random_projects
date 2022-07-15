#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> numbers = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

void checkInput(std::string numberx);

int main()
{
	std::string num = "0";
	while (true)
	{
		std::cin >> num;

		checkInput(num);
		std::cout << '\n';
	}
}


void checkInput(std::string numberx)
{
	if (numberx == "zero")
		std::cout << 0 << '\n';
	else if (numberx == "one")
		std::cout << 1 << '\n';
	else if (numberx == "two")
		std::cout << 2 << '\n';
	else if (numberx == "three")
		std::cout << 3 << '\n';
	else if (numberx == "four")
		std::cout << 4 << '\n';
	else if (numberx == "five")
		std::cout << 5 << '\n';
	else if (numberx == "six")
		std::cout << 6 << '\n';
	else if (numberx == "seven")
		std::cout << 7 << '\n';
	else if (numberx == "eight")
		std::cout << 8 << '\n';
	else if (numberx == "nine")
		std::cout << 9 << '\n';

	if (numberx == "0")
		std::cout << numbers[0] << '\n';
	else if (numberx == "1")
		std::cout << numbers[1] << '\n';
	else if (numberx == "2")
		std::cout << numbers[2] << '\n';
	else if (numberx == "3")
		std::cout << numbers[3] << '\n';
	else if (numberx == "4")
		std::cout << numbers[4] << '\n';
	else if (numberx == "5")
		std::cout << numbers[5] << '\n';
	else if (numberx == "6")
		std::cout << numbers[6] << '\n';
	else if (numberx == "7")
		std::cout << numbers[7] << '\n';
	else if (numberx == "8")
		std::cout << numbers[8] << '\n';
	else if (numberx == "9")
		std::cout << numbers[numbers.size() - 1] << '\n';
}
