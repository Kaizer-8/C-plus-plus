#pragma once
#include<string>
//#include"enemy.h"
class Moves
{
public:
	Moves(std::string aName,int attack);
	~Moves();
	int GetDamage();
	std::string GetName();

private:
	int Damage;
	std::string Name;
};

