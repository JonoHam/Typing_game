#ifndef ENTITIES_H
#include <list>
#include <string>
#define ENTITIES_H

struct Entity {
    int health;
    int power;
    int gold;
    std::list<std::string> inventory;
};

void entityCreation(Entity x);

int enemyDamage(int playerHealth, int enemyPower);

#endif // ENTITIES_H
