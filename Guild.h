#ifndef GUILD_H  
#define GUILD_H
#include <string>
using namespace std;
#include <iostream>
#include "Hero.h"


class Guild{
     string guildName;
     Hero* roster[15];
     int memberCount;
    public:
    //Constructor
     Guild(string name){
        guildName=name;
        memberCount=0;
     }
     //Destructor
   ~Guild(){
   //  for(int i = 0; i < memberCount; i++){
   //      delete roster[i];  // safe
   //  }
     cout << "The guild " << guildName << " has been disbanded!"<<endl; 
}
     int calculateTotalGuildPower();
     void displayGuildStats();
     void operator+=(Hero*);
     friend ostream& operator<<(ostream& out, const Guild& g);
};





#endif