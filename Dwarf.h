#pragma once
#include <string>
#include "Character.h"

struct Dwarf : Character
{
    Dwarf(std::string name, int hp, int armor);

    const std::string& getName();
    std::string getStats();

private:
    const std::string name;
};