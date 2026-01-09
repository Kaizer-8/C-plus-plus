#pragma once
#include <iostream>
#include <string>
#include "Stats.h"
#include "Player.h"
#include "Enemy.h"
class CombatFase
{
public:
	CombatFase();
	~CombatFase();

	void StartCombat(Player& a, Enemy& b);
	int SetHP(int someHP);
private:
};

class Startcombat
{
};

