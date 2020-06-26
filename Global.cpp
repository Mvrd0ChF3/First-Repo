#include <iostream>

void convert();

float farenheit;
float celsius;

int main()
{

	std::cout << "Please enter the temperature in Farenheit: ";
	std::cin >> farenheit;;
	convert();
	std::cout << "\nHere's the temperature in Celsius: ";
	std::cout << celsius << "\n";
	return 0;
}

// function to convert farenheit to celsius
void convert()
{
	celsius = ((farenheit -32) * 5) / 9;
}