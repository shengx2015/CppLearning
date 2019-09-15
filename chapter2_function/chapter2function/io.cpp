#include <iostream>
#include"name io.h"

int readNumber()
{
	std::cout << "Enter an integer: ";
	int input{ 0 };
	std::cin >> input;
	return input;
}

void writeAnswer(int value)
{
	std::cout << value;
}