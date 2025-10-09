#include <iostream>
#include "Food.h"
#include <string>

namespace
{
	const std::string kRiceText = "���т��H�ׂ��܂���";
	const std::string kCurryText = "�J���[���H�ׂ��܂���";
	const std::string kOmuriceText = "�I�����C�X���H�ׂ��܂���";
}



Food::Food(FoodType food_type_) : food_type_(food_type_)
{
	std::cout << "Food�̃R���X�g���N�^" << std::endl;
}

Food::~Food()
{
	std::cout << "Food�̃f�X�g���N�^" << std::endl;

}

void Food::BeEaten()
{
	switch (food_type_)
	{
	case kRice:
		std::cout << kRiceText << std::endl;
		break;
	case kCurry:
		std::cout << kCurryText << std::endl;
		break;
	case kOmurice:
		std::cout << kOmuriceText << std::endl;
		break;
	}
}