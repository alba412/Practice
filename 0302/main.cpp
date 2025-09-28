#include <iostream>

int main()
{
	int index = 0;
	while (index <= 100)
	{
		if (index % 2 == 0)
		{
			std::cout << index << std::endl;
		}
		index++;
	}

	index = 0;
	do
	{
		if (index % 2 == 0)
		{
			std::cout << index << std::endl;
		}
		index++;
	} while (index <= 100);

	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			std::cout << i << std::endl;
		}
	}

	return 0;
}