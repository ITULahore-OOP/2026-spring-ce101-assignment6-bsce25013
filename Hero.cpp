#include "Hero.h"


// Returns the name of the hero
string Hero::getName() const{
     return heroName;
}

// Returns the current health of the hero
int Hero::getHealth() const{
     return health;
}

// Returns the base attack power of the hero
int Hero::getPower(){
     return basePower;
}

// Reduces hero health when damage is taken
void Hero::takeDamage(int damage){
     health = health - damage;

     // Ensure health does not go below zero
     if(health < 0){
        health = 0;
     }
}

// Overloaded '>' operator to compare heroes based on base power
bool Hero::operator>(Hero h1){
    if(this->basePower > h1.basePower){
        return true;
    }
    else{
        return false;
    }
}

// Overloaded '+' operator to add health of two heroes
int Hero::operator+(Hero h1){
      return this->health + h1.health;
}