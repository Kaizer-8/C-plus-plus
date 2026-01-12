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

	void EnemyTurn(Player& a, Enemy& b);
	void StartCombat(Player& a, Enemy& b);
	void PlayerLose(Player& a);
	void EnemyDies(Enemy& b);

	int SetHP(int someHP);
private:
	bool BattleStart = true;
	bool combatOngoing = true;
	bool playerTurn = true;
	bool EndText = true;
	bool isDefending = false;
	bool EnemyDefending = false;
	std::string input;
};


