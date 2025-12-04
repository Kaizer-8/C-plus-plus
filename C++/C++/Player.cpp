#include "Player.h"
#include <iostream>
#include <string>
#include "Stats.h"


Player::Player(Stats &ThePlayerStats){
	playerStats = &ThePlayerStats;
}

Player::~Player() {
	
}

Stats* Player::GetPlayerStats()
{
	return playerStats;
}

void Player::PlayerMoves()
{
}

void Player::PlayerInventory()
{
}



