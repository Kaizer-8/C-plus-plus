#pragma once
#include "Stats.h"
class Player
{
public:
	Player(Stats ThePlayerStats);
	~Player();

	int PlayerStats();
	void PlayerMoves();
	void PlayerInventory();

private:
	Stats playerStats;
};

