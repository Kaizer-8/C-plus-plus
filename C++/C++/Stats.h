#pragma once
class Stats
{
public:
	Stats(int aHp, int aDefence, int aMana, int aAttack );
	~Stats();
private:
	int hp;
	int defence;
	int mana;
	int attack;
};

