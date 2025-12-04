#include "Enemy.h"
#include "Stats.h"
#include<iostream>
#include <string>

Enemy::Enemy(Stats &TheEnemyStats) {
	EnemyStats = &TheEnemyStats;
	//makes the reference TheEnemyStats = EnemyStats
}

Enemy::~Enemy() {

}

Stats* Enemy::GetEnemyStats()
{
	return EnemyStats;
}