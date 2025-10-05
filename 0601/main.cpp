#include <iostream>

enum EmotionType
{
	kNone,
	kWakeing,
	kAngry,
	kSad,
	kHappy,
	kEmotionTypeMax,
};

int main()
{
	std::string messages[static_cast<int>(kEmotionTypeMax)];

	messages[static_cast<int>(kNone)] = "虚無です。";
	messages[static_cast<int>(kWakeing)] = "寝起きです。";
	messages[static_cast<int>(kAngry)] = "憤怒している。";
	messages[static_cast<int>(kSad)] = "悲しみに暮れている。";
	messages[static_cast<int>(kHappy)] = "喜びに打ち震えている。";

	std::cout << messages[static_cast<int>(kNone)] << std::endl;
	std::cout << messages[static_cast<int>(kWakeing)] << std::endl;
	std::cout << messages[static_cast<int>(kAngry)] << std::endl;
	std::cout << messages[static_cast<int>(kSad)] << std::endl;
	std::cout << messages[static_cast<int>(kHappy)] << std::endl;

	return 0;
}