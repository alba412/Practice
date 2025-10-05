#include "Food.h"

int main()
{
	Food rice(Food::kRice);
	rice.BeEaten();

	Food curry(Food::kCurry);
	curry.BeEaten();

	Food omurice(Food::kOmurice);
	omurice.BeEaten();
}