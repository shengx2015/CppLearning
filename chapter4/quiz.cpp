#include <iostream>
#include <string>

using namespace std;

double getValue()
{
	double inputNum{ 0.0 };
	cout << "Enter a double value: " << endl;
	cin >> inputNum;
	return inputNum;
}

char getMathSymb()
{
	char inputSymb;
	cout << "Enter one of the following: +, -, *, or /: " << endl;
	cin >> inputSymb;
	return inputSymb;
}

void calculation(double x, double y, char z)
{
	switch ( z)
	{
	case '*': cout << x * y << endl;
		break;
	case '/': cout << x / y << endl;
		break;
	case '+': cout << x + y << endl;
		break;
	case '-': cout << x - y << endl;
	}
}

int main()
{
	double x = { getValue() };
	double y = { getValue() };
	char z = {getMathSymb()};
	calculation(x, y, z);

	return 0;
}
