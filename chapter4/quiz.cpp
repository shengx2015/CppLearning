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

<<<<<<< HEAD
char getMathSymb()
{
	char inputSymb;
	cout << "Enter one of the following: +, -, *, or /: " << endl;
=======
string getMathSymb()
{
	string inputSymb;
	cout << "Enter one of the following: \+, \-, \*, or \/: " << endl;
>>>>>>> 8fc8fbbd3a1ddfc9d2d31870a222cbfe1e8aed95
	cin >> inputSymb;
	return inputSymb;
}

<<<<<<< HEAD
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
=======
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
>>>>>>> 8fc8fbbd3a1ddfc9d2d31870a222cbfe1e8aed95
	}
}

int main()
{
	double x = { getValue() };
	double y = { getValue() };
<<<<<<< HEAD
	char z = {getMathSymb()};
	calculation(x, y, z);

	return 0;
}
=======
	string z = { getMathSymb() };
	double result = calculation(x, y, z);

	cout << x << getMathSymb << y << "is" << result << endl;
	return 0;
}
>>>>>>> 8fc8fbbd3a1ddfc9d2d31870a222cbfe1e8aed95
