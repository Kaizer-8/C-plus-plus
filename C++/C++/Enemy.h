#pragma once
#include "Stats.h"
#include <string>
#include "Moves.h"
#include<iostream>
#include<vector>
class Enemy
{
public:
	Enemy(Stats &StatsEnemy, std::string aName);
	~Enemy();
	std::string GetName();
	Stats* GetEnemyStats();
	void AddMove(Moves& aMove);
	void AddMoves(std::vector<Moves*> someMoves);
	std::vector<Moves*> GetMoves();
private:
	Stats* EnemyStats;
	std::string name;
	std::vector<Moves*> moves ;
};

