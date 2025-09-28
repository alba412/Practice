#include <iostream>

/// <summary>
/// 食べ物の種類
/// </summary>
enum FoodType
{
	/// <summary>
	/// カレー
	/// </summary>
	kRice,
	/// <summary>
	/// カレー
	/// </summary>
	kCurry,
	/// <summary>
	/// オムライス
	/// </summary>
	kOmurice
};

/// <summary>
/// 食べ物の構造体
/// </summary>
struct Food
{
	/// <summary>
	/// 食べ物の種類
	/// </summary>
	FoodType food_type;
};

/// <summary>
/// 食べた時の処理
/// </summary>
/// <param name="food">食べ物</param>
void Eat(Food food)
{
	switch (food.food_type)
	{
	case kRice:
		std::cout << "ご飯を食べました" << std::endl;
		break;

	case kCurry:
		std::cout << "カレーを食べました" << std::endl;
		break;

	case kOmurice:
		std::cout << "オムライスを食べました" << std::endl;
		break;
	}

}

/// <summary>
/// エントリーポイント
/// </summary>
/// <returns>正常終了なら0</returns>
int main()
{
	//ご飯を食べる
	Food rice = { kRice };
	Eat(rice);

	//カレーを食べる
	Food curry = { kCurry };
	Eat(curry);

	//オムライスを食べる
	Food omurice = { kOmurice };
	Eat(omurice);

	return 0;
}