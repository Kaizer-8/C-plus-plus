#include <iostream>
#include "Stats.h"
#include "Player.h"
#include "Enemy.h"


int main()
{

    Stats thePlayerStats(1,1,1,1);
    //makes a stat block with the stats 1,1,1,1
    Player thePlayer(thePlayerStats);
    //makes a player variable with the playerstats wich is the one above

    Stats theEnemyStats(1,1,1,1);
    Enemy theEnemy(theEnemyStats);
    

    //Stats retrievedStats = *thePlayer.GetPlayerStats();
    //std::cout << retrievedStats.GetAttack();
}