#include "CupNoodle.h"
#include <iostream>

namespace
{
	const std::string kDoneText = "カップ麺が出来た";
	const std::string kCookingText = "カップ麺作成中";
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