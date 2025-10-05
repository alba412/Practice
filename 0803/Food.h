#pragma once

class Food
{
public:
	enum FoodType
	{
		kRice,
		kCurry,
		kOmurice,
	};
	
	FoodType food_type_;

	Food(FoodType food_type_);
	
	~Food();

	void BeEaten();
};