#include <iostream>

enum EmotionType
{
	kNone,
	kWakeing,
	kAngry,
	kSad,
	kEmotionTypeMax,
};

int main()
{
	std::string messages[static_cast<int>(kEmotionTypeMax)];
}