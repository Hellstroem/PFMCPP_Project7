#include "Dwarf.h"
#include "Utiliy.h"
Dwarf::Dwarf(std::string name, int hp, int armor) : Character(hp, armor, 5), name(name) 
{
    helpfulItems = makeHelpfulItems(2);
    defensiveItems = makeDefensiveItems(1);
}

const std::string& Dwarf::getName() 
{
    return name;
}

std::string Dwarf::getStats()
{
    
}