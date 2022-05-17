#pragma once
#include <string>
#include "Character.h"

struct Paladin : Character
{

    Paladin(std::string name, int hp, int armor);

    const std::string& getName();
    std::string getStats();

private:
    const std::string name;
};