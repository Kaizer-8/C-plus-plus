#include "Player.h"
#include <iostream>
#include <string>
#include "Stats.h"


Player::Player(Stats &ThePlayerStats){
	playerStats = &ThePlayerStats;
}
//Player thePlayer(thePlayerStats); gets made in main and gets put to playerstats and get returned.
Player::~Player() {
	
}

Stats* Player::GetPlayerStats()
{
	return playerStats;
}




