#include "Warrior.h"
#include "Hero.h"
int Warrior::calculateEffectiveHealth(){
    // Add base health and armor bonus (armorRating * 2)
    int Effective_Health = getHealth() + (armorRating * 2);
    // Return the calculated effective health
    return Effective_Health;
}