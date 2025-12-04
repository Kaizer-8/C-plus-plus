#pragma once
#include "Stats.h"
class Enemy
{
public:
	Enemy(Stats &StatsEnemy);
	~Enemy();

	Stats* GetEnemyStats();
private:
	Stats* EnemyStats;
};

