#include "Paladin.h"

Paladin::Paladin(std::string name, int hp, int armor) : Character(hp, armor, 5), name(name) {}

const std::string& Paladin::getName() 
{
    return name;
}

std::string Paladin::getStats()
{
    
}