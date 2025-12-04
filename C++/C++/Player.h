#pragma once
#include "Stats.h"
class Player
{
public:
	Player(Stats &ThePlayerStats);
	~Player();

	Stats* GetPlayerStats();
	void PlayerMoves();
	void PlayerInventory();

private:
	Stats* playerStats;
};