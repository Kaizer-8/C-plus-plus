#include "Enemy.h"
#include "Stats.h"

Enemy::Enemy(Stats &TheEnemyStats, std::string aName) {
	name = aName;
	EnemyStats = &TheEnemyStats;
	//makes the reference TheEnemyStats = EnemyStats
}

Enemy::~Enemy() {

}

Stats* Enemy::GetEnemyStats()
{
	return EnemyStats;
}

void Enemy::AddMove(Moves& aMove) {
	moves.push_back(&aMove);
}
//void Enemy::AddMoves(std::vector<Moves*> someMoves) {
//	moves.insert(moves.end(), someMoves.begin(), someMoves.end());
//}
std::vector<Moves*> Enemy::GetMoves() {
	return moves;
}

std::string Enemy::GetName() {
	return name;
}