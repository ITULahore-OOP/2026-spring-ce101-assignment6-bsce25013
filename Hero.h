#ifndef HERO_H
#define HERO_H
#include <string>
using namespace std;
#include <iostream>
class Hero{

    string heroName;
    int health;
    int basePower;
public:
    Hero(string s ,int h,int b){
        heroName=s;
        health=h;
        basePower=b;
    }
    ~Hero(){
        std::cout<<"Hero Destructor called "<<std::endl;
    }
    string getName()const;
    int getHealth()const;
    int getPower();
    void takeDamage(int a);
    bool operator>(Hero h);
    int operator+(Hero f);
};


#endif