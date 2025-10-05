#include <iostream>
#include "CupNoodle.h"

/// <summary>
/// eat���O���
/// </summary>
namespace eat
{
	/// <summary>
	/// �J�b�v�˂̏o���鎞�ԃJ�E���g
	/// </summary>
	const int kCount = 3;

	/// <summary>
	/// �J�b�v�˂����
	/// </summary>
	/// <param name="cup_noodle">�˂̏�Ԃ̎Q��</param>
	/// <returns>�J�b�v�ˍ쐬�����̏ꍇtrue�A�J�b�v�ˍ쐬���Ȃ�false</returns>
	bool MakeCupNoodle(CupNoodle& cup_noodle)
	{
		//�ˏo���Ă��Ȃ�
		if (cup_noodle.noodle_state == kNone)
		{
			//�쐬����
			cup_noodle.count = 0;
			cup_noodle.noodle_state = kCooking;

			//�쐬��
			return false;
		}
		//�쐬��
		else if (cup_noodle.noodle_state == kCooking)
		{
			//�J�E���g�A�b�v
			cup_noodle.count++;

			//�쐬��������
			if (cup_noodle.count >= kCount)
			{
				//�����ɐݒ�
				cup_noodle.noodle_state = kDone;

				//�쐬����
				return true;
			}
		}

		//�쐬�����ȊO�͍쐬����Ԃ�
		return false;
	}
}