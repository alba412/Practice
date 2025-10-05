#include <iostream>
#include <string>]
#include "OddEven.h"

/// <summary>
/// 奇数かを確認する
/// </summary>
bool IsOdd(int number)
{
	return number % 2 != 0;
}

/// <summary>
/// 偶数かを確認する
/// </summary>
bool IsEven(int number)
{
	return number % 2 == 0;
}