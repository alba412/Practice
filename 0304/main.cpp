#include <iostream>\

/// <summary>
/// �~�}�ԍ�
/// </summary>
static const int kAmbulanceNum = 119;
/// <summary>
/// �x�@�ԍ�
/// </summary>
static const int kPoliceNum = 110;

/// <summary>
/// �G���g���[�|�C���g
/// </summary>
/// <returns></returns>
int main()
{
	int input_num;
	std::cin >> input_num;

	if (input_num == kAmbulanceNum)
	{
		std::cout << "�~�}�ł��I";
	}
	else if (input_num == kPoliceNum)
	{
		std::cout << "�x�@�ł��I";
	}
	else
	{
		std::cout << "�ԈႢ�d�b�ł��I";
	}

	switch (input_num)
	{
	case kAmbulanceNum:
		std::cout << "�~�}�ł��I";
		break;

	case kPoliceNum:
		std::cout << "�x�@�ł��I";
		break;

	default:
		std::cout << "�ԈႢ�d�b�ł��I";
		break;
	}
	
	return 0;
}