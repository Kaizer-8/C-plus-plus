#include <iostream>
#include "Stats.h"
#include "Player.h"
#include "Enemy.h"
#include "CombatFase.h"


int main()
{
    CombatFase combat;
    
    Stats thePlayerStats(5,2,1,2);
    //makes a stat block with the stats
    Player thePlayer(thePlayerStats);
    //makes a player variable with the playerstats wich is the one above

    Stats theEnemyStats(5,1,1,1);
    Enemy theEnemy(theEnemyStats);
   
    combat.StartCombat(thePlayer, theEnemy);
    //Stats retrievedStats = *thePlayer.GetPlayerStats();
    //std::cout << retrievedStats.GetAttack();
}