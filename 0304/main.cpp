#include <iostream>\

/// <summary>
/// ‹~‹}”Ô†
/// </summary>
static const int kAmbulanceNum = 119;
/// <summary>
/// Œx@”Ô†
/// </summary>
static const int kPoliceNum = 110;

/// <summary>
/// ƒGƒ“ƒgƒŠ[ƒ|ƒCƒ“ƒg
/// </summary>
/// <returns></returns>
int main()
{
	int input_num;
	std::cin >> input_num;

	if (input_num == kAmbulanceNum)
	{
		std::cout << "‹~‹}‚Å‚·I";
	}
	else if (input_num == kPoliceNum)
	{
		std::cout << "Œx@‚Å‚·I";
	}
	else
	{
		std::cout << "ŠÔˆá‚¢“d˜b‚Å‚·I";
	}

	switch (input_num)
	{
	case kAmbulanceNum:
		std::cout << "‹~‹}‚Å‚·I";
		break;

	case kPoliceNum:
		std::cout << "Œx@‚Å‚·I";
		break;

	default:
		std::cout << "ŠÔˆá‚¢“d˜b‚Å‚·I";
		break;
	}
	
	return 0;
}