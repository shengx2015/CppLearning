#include <iostream>
#include "constants.h"

using namespace std;
using namespace constants;

double fallDistance(int time)
{
	return gravity*time*time/2.0;
}

void height(double h)
{
	double h_current {0};
	int time {1};
	h_current = h - fallDistance(time);
	while(h_current > 0)
	{
		cout << "At " << time << " seconds, the ball is at height: " << h_current << endl;
		h_current = h_current - fallDistance(time);;
		time++;
	}

	cout << "At " << time << " seconds, the ball is on the ground." << endl;
}

int main()
{
	double input {0};
	cout << "Enter the height of the tower in meters: " << endl;
	cin >> input;

	height(input);

	return 0;
}