#include <string>

#ifndef GAMECHARACTER_H
#define GAMECHARACTER_H
class GameCharacter
{
private:
    std::string name;
    int maxHealth;
    int currentHealth;
    int damage;

public:
    GameCharacter(std::string, int, int);
    void takeDamage(int);
    bool checkIfAlive();
    std::string getName();
    int getHealth();
    int getDamage();
};
#endif