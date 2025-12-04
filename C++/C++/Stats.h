#pragma once
class Stats
{
public:
	Stats(int aHp, int aDefence, int aMana, int aAttack );
	~Stats();

	int GetHP();
	int GetDefense();
	int GetMana();
	int GetAttack();

	void SetHP(int someHP);
	void AddHP(int someHP);


private:
	//start the class with these variables.
	int hp;
	int defence;
	int mana;
	int attack;
};

