#include <iostream>

/// <summary>
/// 三つの値の合計値を計算
/// </summary>
/// <param name="n1">値1</param>
/// <param name="n2">値2</param>
/// <param name="n3">値3</param>
/// <returns>合計値</returns>
int Sum(int n1, int n2, int n3);

/// <summary>
/// 三つの値の平均値を計算
/// </summary>
/// <param name="n1">値1</param>
/// <param name="n2">値2</param>
/// <param name="n3">値3</param>
/// <returns>平均値</returns>
float Average(int n1, int n2, int n3);

/// <summary>
/// エントリーポイント
/// </summary>
/// <returns>正常終了なら0</returns>
int main() 
{
	//合計値の計算
	int sum = Sum(1, 3, 4);
	std::cout << sum << std::endl;

	//平均値の計算
	float average = Average(1, 3, 4);
	std::cout << average << std::endl;

	return 0;
}

int Sum(int n1, int n2, int n3)
{
	int result = n1 + n2 + n3;
	return result;
}

float Average(int n1, int n2, int n3)
{
	float result = (n1 + n2 + n3) / 3.0f;
	return result;
}