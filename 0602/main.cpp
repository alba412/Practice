#include <iostream>
#if defined(_WIN64) || defined(_WIN32)
#include <windows.h>
#endif

static const int kHp = 100;
static const int kDealDamage = 8;

struct Enemy
{
	int hp;
};

void ApplyDamage(int damage, Enemy* enemy)
{
	if (enemy == nullptr)
	{
		return;
	}
	else
	{
		enemy->hp -= damage;
	}
}

int main()
{
#if defined(_WIN64) || defined(_WIN32)
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

	Enemy* enemy = new Enemy();
	enemy->hp = kHp;

	ApplyDamage(kDealDamage, enemy);
	std::cout << kDealDamage << "‚Ìƒ_ƒ[ƒW‚ðŽó‚¯‚½" << std::endl;
	std::cout << "“G‚ÌHP‚Í" << enemy->hp << std::endl;

	delete enemy;
	enemy = nullptr;

	return 0;
}