#include <iostream>
#include "CupNoodle.h"

/// <summary>
/// eat名前空間
/// </summary>
namespace eat
{
	/// <summary>
	/// カップ麺の出来る時間カウント
	/// </summary>
	const int kCount = 3;

	/// <summary>
	/// カップ麺を作る
	/// </summary>
	/// <param name="cup_noodle">麺の状態の参照</param>
	/// <returns>カップ麺作成完了の場合true、カップ麺作成中ならfalse</returns>
	bool MakeCupNoodle(CupNoodle& cup_noodle)
	{
		//麺出来ていない
		if (cup_noodle.noodle_state == kNone)
		{
			//作成中へ
			cup_noodle.count = 0;
			cup_noodle.noodle_state = kCooking;

			//作成中
			return false;
		}
		//作成中
		else if (cup_noodle.noodle_state == kCooking)
		{
			//カウントアップ
			cup_noodle.count++;

			//作成完了した
			if (cup_noodle.count >= kCount)
			{
				//完了に設定
				cup_noodle.noodle_state = kDone;

				//作成完了
				return true;
			}
		}

		//作成完了以外は作成中を返す
		return false;
	}
}