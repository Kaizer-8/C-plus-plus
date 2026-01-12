#pragma once
#include<string>
class Moves
{
public:
	Moves(std::string aName,int attack);
	int GetDamage();
	std::string GetName();

private:
	int Damage;
	std::string Name;
};

