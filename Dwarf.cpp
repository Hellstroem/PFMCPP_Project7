#include "Dwarf.h"
#include "Utility.h"

Dwarf::Dwarf(std::string name, int hp, int armor) : Character(hp, armor, 4), name(name) 
{
    helpfulItems = makeHelpfulItems(1);
    defensiveItems = makeDefensiveItems(3);
}

const std::string& Dwarf::getName() 
{
    return name;
}

std::string Dwarf::getStats()
{
    return getCharacterStats(this);    
}
