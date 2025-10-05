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

	messages[static_cast<int>(kNone)] = "�����ł��B";
	messages[static_cast<int>(kWakeing)] = "�Q�N���ł��B";
	messages[static_cast<int>(kAngry)] = "���{���Ă���B";
	messages[static_cast<int>(kSad)] = "�߂��݂ɕ��Ă���B";
	messages[static_cast<int>(kHappy)] = "��тɑł��k���Ă���B";

	std::cout << messages[static_cast<int>(kNone)] << std::endl;
	std::cout << messages[static_cast<int>(kWakeing)] << std::endl;
	std::cout << messages[static_cast<int>(kAngry)] << std::endl;
	std::cout << messages[static_cast<int>(kSad)] << std::endl;
	std::cout << messages[static_cast<int>(kHappy)] << std::endl;

	return 0;
}