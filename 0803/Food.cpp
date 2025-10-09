#include <iostream>
#include "Food.h"
#include <string>

namespace
{
	const std::string kRiceText = "ご飯が食べられました";
	const std::string kCurryText = "カレーが食べられました";
	const std::string kOmuriceText = "オムライスが食べられました";
}



Food::Food(FoodType food_type_) : food_type_(food_type_)
{
	std::cout << "Foodのコンストラクタ" << std::endl;
}

Food::~Food()
{
	std::cout << "Foodのデストラクタ" << std::endl;

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