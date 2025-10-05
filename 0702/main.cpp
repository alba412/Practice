#include "CupNoodle.h"
#include <iostream>

namespace
{
	const std::string kDoneText = "�J�b�v�˂��o����";
	const std::string kCookingText = "�J�b�v�ˍ쐬��";
}

int main()
{
	eat::CupNoodle cup_noodle = { eat::kNone };
	while (true)
	{
		bool is_done = eat::MakeCupNoodle(cup_noodle);
		if (is_done)
		{
			std::cout << kDoneText << std::endl;
			break;
		}
		else
		{
			std::cout << kCookingText << std::endl;

		}
	}
}