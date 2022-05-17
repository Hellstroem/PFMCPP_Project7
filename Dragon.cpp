#include "Dragon.h"
#include "Utility.h"
#include "DragonSlayer.h"

Dragon::Dragon(std::string name, int hp, int armor) : Character(hp, armor, 5), name(name) {}

void Dragon::attack(Character &other)
{
    std::cout << name << " is attacking " << other.getName() << "!!!" << std::endl;
    if( auto* slayer = dynamic_cast<DragonSlayer*>(&other) )
    {
        //dragons can't attack dragon slayers
        slayer->defend();
    }
    else
    {
        Character::attack(other);
    }
}

const std::string& Dragon::getName()
{
    return name;
}
std::string Dragon::getStats()
{
    return getCharacterStats(this);    
}
