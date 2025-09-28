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
		std::cout << "�J�b�v��" << cup.current_amount << "ml���������Ă��܂��B" << std::endl;
	}
	cup.current_amount = cup.max_capacity;
	std::cout << "�J�b�v��" << cup.current_amount << "ml���������Ă��܂��B" << std::endl;
}

int main()
{
	Cup cup = { kCurretAmount, kMaxCapacity, kFillRate };
	Fill(cup);

	std::cout << "�J�b�v��" << cup.current_amount << "ml���������Ă��܂��B" << std::endl;

	return 0;
}