#include "Stats.h"
#include <iostream>
#include <string>

Stats::Stats(int aHp, int aDefence, int aMana, int aAttack) {
	hp = aHp;
	defence = aDefence;
	mana = aMana;
	attack = aAttack;
}

Stats::~Stats() {

}
