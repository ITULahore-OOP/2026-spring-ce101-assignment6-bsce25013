#ifndef WORRIOR_H  
#define WORRIOR_H
#include <string>
using namespace std;
#include <iostream>
#include "Hero.h"



class Warrior:public Hero{
   int armorRating;
public:
//constructor
Warrior(string s ,int h,int b,int a ):Hero(s ,h, b){
     armorRating = a;
}
//getter
int getArmor(){
   return armorRating;
}
int calculateEffectiveHealth();
};




#endif