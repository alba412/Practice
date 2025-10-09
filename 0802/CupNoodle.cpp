#include <iostream>
#include <string>
#include "CupNoodle.h"

namespace 
{
	const std::string kCookingText = "–Ëì¬’†";
	const std::string kDoneText = "–Ëì¬Š®—¹";
}

void CupNoodle::Cook()
{
	if (noodle_state_ == kNone)
	{
		noodle_state_ = kCooking;
	}
	else if (noodle_state_ == kCooking)
	{
		count_--;
	}
	if (count_ == 0)
	{
		noodle_state_ = kDone;
		std::cout << kDoneText << std::endl;
	}
	else
	{
		std::cout << kCookingText << std::endl;
	}
}