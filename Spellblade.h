#ifndef SPELLBLADE_H  
#define SPELLBLADE_H

#include <string>
#include <iostream>
using namespace std;

#include "Warrior.h"
#include "MagicalEntity.h"

// Spellblade class inherits abilities from both Warrior and MagicalEntity
class Spellblade : public Warrior , public MagicalEntity{

public:

// Constructor initializes both base classes (Warrior and MagicalEntity)
Spellblade(string s,int h,int b,int a,int m,int sp)
: Warrior(s,h,b,a), MagicalEntity(m,sp)
{

}

// Function to calculate combined damage from physical and magical powers
int calculateHybridDamage();

};

#endif