#include <iostream>

/// <summary>
/// �H�ו��̎��
/// </summary>
enum FoodType
{
	/// <summary>
	/// �J���[
	/// </summary>
	kRice,
	/// <summary>
	/// �J���[
	/// </summary>
	kCurry,
	/// <summary>
	/// �I�����C�X
	/// </summary>
	kOmurice
};

/// <summary>
/// �H�ו��̍\����
/// </summary>
struct Food
{
	/// <summary>
	/// �H�ו��̎��
	/// </summary>
	FoodType food_type;
};

/// <summary>
/// �H�ׂ����̏���
/// </summary>
/// <param name="food">�H�ו�</param>
void Eat(Food food)
{
	switch (food.food_type)
	{
	case kRice:
		std::cout << "���т�H�ׂ܂���" << std::endl;
		break;

	case kCurry:
		std::cout << "�J���[��H�ׂ܂���" << std::endl;
		break;

	case kOmurice:
		std::cout << "�I�����C�X��H�ׂ܂���" << std::endl;
		break;
	}

}

/// <summary>
/// �G���g���[�|�C���g
/// </summary>
/// <returns>����I���Ȃ�0</returns>
int main()
{
	//���т�H�ׂ�
	Food rice = { kRice };
	Eat(rice);

	//�J���[��H�ׂ�
	Food curry = { kCurry };
	Eat(curry);

	//�I�����C�X��H�ׂ�
	Food omurice = { kOmurice };
	Eat(omurice);

	return 0;
}