#include <iostream>
#include <cmath>

double CalculateLength(int x1, int y1, int x2, int y2)
{
	return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main()
{
	std::cout << CalculateLength(-1, 2, 3, 5);
}




