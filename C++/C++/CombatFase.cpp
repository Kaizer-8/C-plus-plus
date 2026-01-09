#include <iostream>
#include <string>
#include "CombatFase.h"
#include "Stats.h"
#include "Player.h"
#include "Enemy.h"
#include "Inventory.h"

void CombatFase::StartCombat(Player& a, Enemy& b) {
	bool combatOngoing = true;
	bool playerTurn = true;
	std::cout << "Combat started!" << std::endl;
	std::cout << "What do you want to do?" << std::endl;
	std::cout << "1. Attack, 2 Defend" << std::endl;
	std::string input;
	std::getline(std::cin, input);
	while (combatOngoing == true)
	{
		if (playerTurn == true)
		{
			if (b.GetEnemyStats()->GetHP() <= 0)
			{
				std::cout << "You killed the enemy" << std::endl;
				combatOngoing = false;
			}
			if (input == "1")
			{
				b.GetEnemyStats()->SetHP(b.GetEnemyStats()->GetHP() - a.GetPlayerStats()->GetAttack());
				std::cout << "You attacked the enemy! Enemy HP is now: ";
				std::cout << b.GetEnemyStats()->GetHP() << std::endl;
				playerTurn = false;
			}
			else if (input == "2")
			{
				std::cout << "You defended!" << std::endl;
				playerTurn = false;
			}
			else
			{
				std::cout << "Please pick a valid option" << std::endl;
			}
		}
	}
	if (playerTurn == false)
	{
		a.GetPlayerStats()->SetHP(a.GetPlayerStats()->GetHP() - b.GetEnemyStats()->GetAttack());
		std::cout << "The enemy attacks and deals: " << std::endl;
		std::cout << a.GetPlayerStats()->GetHP() << " damage!" << std::endl;
	}
}
CombatFase::CombatFase() {

}
CombatFase::~CombatFase() {

}
