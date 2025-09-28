#include <iostream>

static const int kCurretAmount = 0;
static const int kMaxCapacity = 150;
static const int kFillRate = 8;

struct Cup
{
	int current_amount;
	int max_capacity;
	int fill_rate;
};

void Fill(Cup cup)
{
	while (cup.current_amount + cup.fill_rate <= cup.max_capacity)
	{
		cup.current_amount += cup.fill_rate;
		std::cout << "カップに" << cup.current_amount << "ml水が入っています。" << std::endl;
	}
	cup.current_amount = cup.max_capacity;
	std::cout << "カップに" << cup.current_amount << "ml水が入っています。" << std::endl;
}

int main()
{
	Cup cup = { kCurretAmount, kMaxCapacity, kFillRate };
	Fill(cup);

	std::cout << "カップに" << cup.current_amount << "ml水が入っています。" << std::endl;

	return 0;
}