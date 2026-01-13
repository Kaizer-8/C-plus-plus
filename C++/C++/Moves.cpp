#include "Moves.h"

Moves::Moves(std::string aName,int someAttack) {
	Damage = someAttack;
	Name = aName;
}

int Moves::GetDamage(){
	return Damage;
}

std::string Moves::GetName() {
	return Name;
}

Moves::~Moves() {

}