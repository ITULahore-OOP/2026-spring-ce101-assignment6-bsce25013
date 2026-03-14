#include "Spellblade.h"

int Spellblade::calculateHybridDamage(){

        // Add base physical power (from Warrior) and spell power (from MagicalEntity)
        int total = getPower() + getSpellPower();

        // Return the combined damage
        return total;
}