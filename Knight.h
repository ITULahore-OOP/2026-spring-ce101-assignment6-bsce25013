#ifndef KNIGHT_H  
#define KNIGHT_H
#include <string>
using namespace std;
#include <iostream>
#include "Warrior.h"

class Knight:public Warrior{
   int chargeBonus;
public:
//constructor
   Knight(string s ,int h,int b,int a,int c):Warrior(s , h, b, a ){
          chargeBonus=c;
   }
//getter
int getChargeBonus(){
    return chargeBonus;
}
int calculateBurstDamage();
   
};


#endif