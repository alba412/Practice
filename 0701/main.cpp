#include <iostream>
#include "OddEven.h"

static const int kTestNumber = 2;

int main()
{
	bool is_even = IsEven(kTestNumber);
	std::cout << "is_even =" << is_even << std::endl;

	bool is_odd = IsEven(kTestNumber);
	std::cout << "is_odd =" << is_odd << std::endl;

	return 0;
}