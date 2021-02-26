#include "typingPrompt.h"
#include "entities.h"
#include <random>
#include <iostream>
#include <chrono>

void entityCreation(Entity x) {
    int maxHealth = 50;
    int maxPower = 14;
    int maxGold = 20;
    srand(time(0));
    x.health = rand()%maxHealth;
    x.power = rand()%maxPower;
    x.gold = rand()%maxGold;
}

int enemyDamage(int playerHealth, int enemyPower) {
    auto start = std::chrono::system_clock::now();
    prompt(wordGeneration(enemyPower));
    auto end = std::chrono::system_clock::now();
    return playerHealth;
}
