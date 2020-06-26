#include <iostream>

float convert (float);

int main()
{
	float farenheit;
	float celsius;

std::cout << "Please enter the temperature in Farenheit: ";
std::cin >> farenheit;
celsius = convert(farenheit);
std::cout << "\nHere's the temperature in Celsius: ";
std::cout << celsius << "\n";
return 0;
}

// function to convert farenheit to celsius
float convert(float farenheit)
{
	float celsius;
	celsius = ((farenheit -32) * 5) / 9;
	return celsius;
}