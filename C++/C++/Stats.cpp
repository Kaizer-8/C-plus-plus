#include "Stats.h"
#include <iostream>
#include <string>

Stats::Stats(int aHp, int aDefence, int aMana, int aAttack){
	hp = aHp;
	defence = aDefence;
	mana = aMana;
	attack = aAttack;
	//sets the stats from Stats.h to the variables to aHp enz. 
}

Stats::~Stats() {

}

int Stats::GetHP()
{
	return hp;
}

int Stats::GetDefense()
{
	return defence;
}

int Stats::GetMana()
{
	return mana;
}

int Stats::GetAttack()
{
	return attack;
}

void Stats::SetHP(int someHP)
{
	hp = someHP;
}

void Stats::SetDefense(int someDefense)
{
	defence = someDefense;
}

void Stats::SetMana(int someMana)
{
	mana = someMana;
}

void Stats::SetAttack(int someAttack)
{
	attack = someAttack;
}