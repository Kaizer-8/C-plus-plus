#include <iostream>
#include <string>
#include "CombatFase.h"
#include "Stats.h"
#include "Player.h"
#include "Enemy.h"
#include "Inventory.h"

void CombatFase::StartCombat(Player& a, Enemy& b) {
    std::cout << a.GetPlayerStats()->GetHP() << std::endl;
	std::cout << b.GetEnemyStats()->GetHP() << std::endl;
}


CombatFase::CombatFase() {

}
CombatFase::~CombatFase() {

}
