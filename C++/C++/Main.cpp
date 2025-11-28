#include <iostream>
#include "Stats.h"
#include "Player.h"


int main()
{
    std::cout << "Hello World!\n";
    Stats thePlayerStats(1,1,1,1);
    Player ThePlayer(thePlayerStats);
}

