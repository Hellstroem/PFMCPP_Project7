#include "DragonSlayer.h"
#include "AttackItem.h"
#include "Dragon.h"
#include "Utility.h"

DragonSlayer::DragonSlayer(std::string name, int hp, int armor) : Character(hp, armor, 4), name(name) 
{
    helpfulItems = makeHelpfulItems(4);
    defensiveItems = makeDefensiveItems(0);
}

const std::string& DragonSlayer::getName()
{
    return name;
}


void DragonSlayer::attack(Character& other)
{
    std::cout << name << " is attacking " << other.getName() << " !!" << std::endl;
    if( auto* dragon = dynamic_cast<Dragon*>(&other) )
    {
        if( dragon->getHP() > 0)
        {
            attackItem->use(this);
            attackItem.reset();
        }
        //DragonSlayers get a 10x boost when attacking dragons, from their attack item.
        //so they should USE their attack item before attacking the dragon... 
        //note: they should only use the item if the dragon's hitpoints are > 0...
        //note: items are single-use only, so you need to reset it after use.  
        //look in the Character class for how the other item types are reset after use.
        while( dragon->getHP() > 0 )
        {
            
            dragon->takeDamage(attackDamage);
        }
    }
        
    Character::attack(other);
        
}

std::string DragonSlayer::getStats()
{
    return getCharacterStats(this); 
}
