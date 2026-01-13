#include "CombatFase.h"
#include "Stats.h"
#include "Player.h"
#include "Enemy.h"
#include "Inventory.h"



void CombatFase::StartCombat(Player& a, Enemy& b) {
	if (BattleStart == true)
	{
		std::cout << "Combat started!" << std::endl;
		BattleStart = false;
	}
	if (b.GetEnemyStats()->GetHP() <= 0)
	{
		EndText = false;
		combatOngoing = false;
		EnemyDies(b);
	}
	if (a.GetPlayerStats()->GetHP() <= 0)
	{
		EndText = false;
		combatOngoing = false;
		PlayerLose(a);
	}
	if (EndText == true)
	{
		std::cout << b.GetName() << " " << b.GetEnemyStats()->GetHP() << " hp" << std::endl;
		std::cout << "What do you want to do?" << std::endl;
		std::cout << "1. Attack, 2 Defend" << std::endl;
		std::getline(std::cin, input);
	}
	while (combatOngoing == true)
	{
		//enemy picks an action
		if (playerTurn == true)
		{
			if (input == "1")
			{
				int tempAttack = 0;
				if (EnemyDefending == true)
				{
					tempAttack = a.GetPlayerStats()->GetAttack() / 2;
				}
				else
				{
					tempAttack = a.GetPlayerStats()->GetAttack();
				}
				b.GetEnemyStats()->SetHP(b.GetEnemyStats()->GetHP() - tempAttack);
				std::cout << "You attacked the enemy! Enemy HP is now: ";
				std::cout << b.GetEnemyStats()->GetHP() << std::endl;
				playerTurn = false;
				EnemyTurn(a, b);
			}
			else if (input == "2")
			{
				isDefending = true;
				playerTurn = false;
				EnemyTurn(a,b);
			}
			else
			{
				std::cout << "Please pick a valid option" << std::endl;
				StartCombat(a,b);
			}
		}
	}
}

void CombatFase::EnemyTurn(Player& a, Enemy& b) {
	int tempAttack = 0;
	int randomIndex = std::rand() % b.GetMoves().size();
	Moves* chosenMove = b.GetMoves()[randomIndex];

	if (isDefending == false)
	{
		a.GetPlayerStats()->SetHP(a.GetPlayerStats()->GetHP() - chosenMove->GetDamage());
		std::cout << "The enemy attacks with" << " " << chosenMove->GetName() << " and deals damage : " << chosenMove->GetDamage() << std::endl;
		std::cout << a.GetPlayerStats()->GetHP() << " player hp remaining" << std::endl;
		playerTurn = true;
		StartCombat(a, b);
	}
	else if (isDefending == true)
	{
		a.GetPlayerStats()->SetHP(a.GetPlayerStats()->GetHP() - (chosenMove->GetDamage() -1));
		std::cout << "You defended!"<<" " << chosenMove->GetName() << " amount" << " " << chosenMove->GetDamage() << std::endl;
		std::cout << "you have " << a.GetPlayerStats()->GetHP() << "hp remaining" << std::endl;
		isDefending = false;
		playerTurn = true;
		StartCombat(a, b);
	}
}

void CombatFase::PlayerLose(Player& a) {
	combatOngoing = false;
	std::cout << "You died" << std::endl;
}

void CombatFase::EnemyDies(Enemy& b) {
	combatOngoing = false;
	std::cout << "You killed the enemy" << std::endl;
	
}

CombatFase::CombatFase() {

}
CombatFase::~CombatFase() {

}
