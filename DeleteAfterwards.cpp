#include <iostream>

int main()
{
	int input;
	std::cout << "Pick a number between 1 and 10!: ";
	std::cin >> input;

	if (input >= 5)
	{
		if (input == 6)
		{
			std::cout << "\nYou picked 6.\n";
			return 0;
		}
		if (input == 7)
		{
			std::cout << "\nYou picked 7.\n";
			return 0;
		}
		if (input == 8)
		{
			std::cout << "\nYou picked 8.\n";
			return 0;
		}
		if (input == 9)
		{
			std::cout << "\nYou picked 9.\n";
			return 0;
		}
		if (input == 10)
		{
			std::cout << "\nYou picked 10.\n";
			return 0;
		}
	}
	else
		std::cout << "\nYou picked 5 or less\n";

	return 0;
}