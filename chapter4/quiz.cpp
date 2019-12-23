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

string getMathSymb()
{
	string inputSymb;
	cout << "Enter one of the following: \+, \-, \*, or \/: " << endl;
	cin >> inputSymb;
	return inputSymb;
}

double calculation(double x, double y, string z)
{
	switch (string z)
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
	string z = { getMathSymb() };
	double result = calculation(x, y, z);

	cout << x << getMathSymb << y << "is" << result << endl;
	return 0;
}