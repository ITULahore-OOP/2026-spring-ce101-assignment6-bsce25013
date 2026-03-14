#ifndef MAGICALENTITY_H  
#define MAGICALENTITY_H

#include <string>
#include <iostream>
using namespace std;

// Base class representing a magical entity with mana and spell power
class MagicalEntity{
     int manaPool;      // stores the total mana of the entity
     int spellPower;    // stores the spell attack power

public:
   // Constructor to initialize mana and spell power
   MagicalEntity(int m , int sp){
    manaPool = m;
    spellPower = sp;
   }

   // Getter function to return mana pool
   int getMana() const{
    return manaPool;
   }

   // Getter function to return spell power
   int getSpellPower() const{
    return spellPower;
   }
};

#endif