#include <iostream>
#include <string>
#include "Fan.h"

void Fan::TurnOn()
{
	on_ = true;
	speed_ = kLow;
	std::cout << "電源オン、弱に設定" << std::endl;
}
void Fan::TurnOff()
{
	on_ = false;
	std::cout << "電源オフ" << std::endl;
}
void Fan::ChangeSpeed()
{
	if (on_)
	{
		switch (speed_)
		{
		case kLow:
			speed_ = kMedium;
			std::cout << "中に変更" << std::endl;
			break;
		case kMedium:
			speed_ = kHigh;
			std::cout << "強に変更" << std::endl;
			break;
		case kHigh:
			speed_ = kLow;
			std::cout << "弱に変更" << std::endl;
			break;
		}
	}
	else
	{
		std::cout << "電源が入っていません" << std::endl;
	}
	
}