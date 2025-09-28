#include <iostream>

/// <summary>
/// エントリーポイント
/// </summary>
/// <returns>正常終了なら0を返す</returns>
int main()
{
	//変数宣言
	int num = 0;
	//加算
	num += 10;
	std::cout << num << std::endl;
	//減算
	num -= 2;
	std::cout << num << std::endl;
	//乗算
	num *= 6;
	std::cout << num << std::endl;
	//除算
	num /= 3;
	std::cout << num << std::endl;

	return 0;
}