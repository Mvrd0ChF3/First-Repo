#include <iostream>

int main()
{
	int year = 2016;
	std::cout << "The year " << ++year << " passes.\n";
	std::cout << "The year " << ++year << " passes.\n";
	std::cout << "The year " << ++year << " passes.\n";

	std::cout << "\nIt is now " << year << ".";
	std::cout << " Have the Chicago Cubs won the World Series yet?\n";

	std::cout << "\nThe year " << year++ << " passes.\n";
	std::cout << "The year " << year++ << " passes.\n";
	std::cout << "The year " << year++ << " passes.\n";

	std::cout << "\nSurely the Cubs have won the World Series by now.\n";
	return 0;
}