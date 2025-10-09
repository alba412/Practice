#include <iostream>
#include <string>
#include "Fan.h"

void Fan::TurnOn()
{
	on_ = true;
	speed_ = kLow;
	std::cout << "�d���I���A��ɐݒ�" << std::endl;
}
void Fan::TurnOff()
{
	on_ = false;
	std::cout << "�d���I�t" << std::endl;
}
void Fan::ChangeSpeed()
{
	if (on_)
	{
		switch (speed_)
		{
		case kLow:
			speed_ = kMedium;
			std::cout << "���ɕύX" << std::endl;
			break;
		case kMedium:
			speed_ = kHigh;
			std::cout << "���ɕύX" << std::endl;
			break;
		case kHigh:
			speed_ = kLow;
			std::cout << "��ɕύX" << std::endl;
			break;
		}
	}
	else
	{
		std::cout << "�d���������Ă��܂���" << std::endl;
	}
	
}