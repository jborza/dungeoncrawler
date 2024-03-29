#include "gameCharacter.h"
#include <iostream>

void GameCharacter::getName()
{
    std::cout << "Name: " << name << std::endl;
}

void GameCharacter::takeDamage(int damage)
{
    currentHealth -= damage;
}

bool GameCharacter::checkIfAlive()
{
    return currentHealth > 0;
}

int GameCharacter::getHealth()
{
    return currentHealth;
}

int GameCharacter::getDamage()
{
    return damage;
}

GameCharacter::GameCharacter(std::string name, int maxHealth, int damage)
{
    this->name = name;
    this->maxHealth = maxHealth;
    this->currentHealth = maxHealth;
    this->damage = damage;
}