#include <iostream>

/// <summary>
/// �O�̒l�̍��v�l���v�Z
/// </summary>
/// <param name="n1">�l1</param>
/// <param name="n2">�l2</param>
/// <param name="n3">�l3</param>
/// <returns>���v�l</returns>
int Sum(int n1, int n2, int n3);

/// <summary>
/// �O�̒l�̕��ϒl���v�Z
/// </summary>
/// <param name="n1">�l1</param>
/// <param name="n2">�l2</param>
/// <param name="n3">�l3</param>
/// <returns>���ϒl</returns>
float Average(int n1, int n2, int n3);

/// <summary>
/// �G���g���[�|�C���g
/// </summary>
/// <returns>����I���Ȃ�0</returns>
int main() 
{
	//���v�l�̌v�Z
	int sum = Sum(1, 3, 4);
	std::cout << sum << std::endl;

	//���ϒl�̌v�Z
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