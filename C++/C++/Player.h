#pragma once
#include "Stats.h"
class Player
{
public:
	Player(Stats &ThePlayerStats);
	~Player();

	Stats* GetPlayerStats();


private:
	Stats* playerStats;
};