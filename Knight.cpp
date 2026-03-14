#include "Knight.h"
#include "Hero.h"
int Knight::calculateBurstDamage(){

    // Add base power (from Hero) and the knight's charge bonus
    int sum = getPower() + chargeBonus;

    // Return the total burst damage
    return sum;
}