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
	char inputSymb{};
	cout << "Enter one of the following: +, -, *, or /: " << endl;
	cin >> inputSymb;
	return inputSymb;
}


double calculation(double x, double y, char z)
{
	switch (z)
	{
	case '*': return x * y;
		break;
	case '/': return x / y;
		break;
	case '+': return x + y;
		break;
	case '-': return x - y;
	}
}

int main()
{
	double x = { getValue() };
	double y = { getValue() };
	char z = { getMathSymb() };
	double result = {calculation(x, y, z)};

	cout << x << " " << z << " " << y << " is " << result << endl;
	return 0;
}

