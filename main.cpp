#include <iostream>
#include "entities.h"
#include "typingPrompt.h"
#include <random>
#include <fstream>

int maxHealth = 50;
int maxPower = 14;
int maxGold = 20;

int main()
{
    std::string word;
    std::ofstream textfile;
    textfile.open("wordsList.txt");
    textfile << "Guru99";
    Entity enemy;
    srand(time(0));
    enemy.health = rand()%maxHealth;
    enemy.power = rand()%maxPower;
    std::cout << enemy.power << std::endl;
    enemy.gold = rand()%maxGold;
    enemyDamage(20,enemy.power);
}
