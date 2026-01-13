#include <iostream>
#include<string>
#include "Stats.h"
#include "Player.h"
#include "Enemy.h"
#include "CombatFase.h"
#include<vector>
#include<random>
#include <cstdlib>
#include <ctime>
#include "Moves.h"

int main()
{
    CombatFase combat;
    
    Stats thePlayerStats(10, 2, 1, 2);
    //makes a stat block with the stats
    Player thePlayer(thePlayerStats);
    //makes a player variable with the playerstats wich is the one above

    Stats knight(4, 1, 1, 1);
    Stats goblin(3, 1, 1, 2);
    Stats golem(5, 2, 1, 1);

    Enemy enemyGolem{ golem, "Golem" };
    Enemy enemyGoblin{ goblin,"Goblin" };
    Enemy enemyKnight{ knight, "Knight" };

    Moves fireBall("fireball", 2);
    Moves Tackle("tackle", 1);
    enemyKnight.AddMove(Tackle);
    enemyKnight.AddMove(fireBall);
    enemyGolem.AddMove(Tackle);
    enemyGolem.AddMove(fireBall);
    enemyGoblin.AddMove(Tackle);
    enemyGoblin.AddMove(fireBall);

    std::vector<Stats> enemyStats = { knight, goblin, golem };
    std::vector<Enemy*> enemies;
    enemies.push_back(&enemyGolem);
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    int randomIndex = std::rand() % enemies.size();
    Enemy* theEnemy = enemies[randomIndex];
   
    combat.StartCombat(thePlayer, *theEnemy);
    //Stats retrievedStats = *thePlayer.GetPlayerStats();
    //std::cout << retrievedStats.GetAttack();
}