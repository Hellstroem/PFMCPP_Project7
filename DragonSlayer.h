#pragma once
#include <string>
#include "Character.h"

struct DragonSlayer : Character
{
    DragonSlayer(std::string name, int hp, int armor);

    const std::string& getName();
    std::string getStats();

    void attack(Character& other) override;
private:
    const std::string name;
};