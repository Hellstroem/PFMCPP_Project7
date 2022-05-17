#pragma once
#include <string>
#include "Character.h"

struct Dragon : Character
{
    Dragon(std::string name, int hp, int armor);

    void attack(Character& other) override;

    const std::string& getName();
    std::string getStats();

private:
    const std::string name;

};

