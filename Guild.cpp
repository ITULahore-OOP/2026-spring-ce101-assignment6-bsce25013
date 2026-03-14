#include "Guild.h"

// Calculates the total power of all guild members
int Guild::calculateTotalGuildPower(){
    int total = 0;

    // Loop through all members and sum their power
    for(int i=0;i<memberCount;i++){
        total = total + roster[i]->getPower();
    }

    return total; // return total guild power
}

// Displays basic information about the guild
void Guild::displayGuildStats(){
     cout << "Guild Name: " << guildName << endl;
     cout << "Total Members: " << memberCount << "/15" << endl;

     // Show total power using the calculate function
     cout << "Total Guild Power: " << calculateTotalGuildPower() << endl;
}

// Overloaded += operator to add a hero to the guild
void Guild::operator+=(Hero* h1){

      // Check if guild has space
      if(memberCount<15){
        roster[memberCount]=h1;
        memberCount++;   // increase member count
      }
      else {
        cout << "Guild is at full capacity!" << endl;
      }
}

// Overloaded << operator to print guild details
ostream& operator<<(ostream& out, const Guild& g){

    out << "Guild: " << g.guildName << endl;
    out << "Members: " << g.memberCount << endl;

    // Display each member's name and power
    for(int i = 0; i < g.memberCount; i++){
        out << "- " << g.roster[i]->getName()
            << " (Power: " << g.roster[i]->getPower() << ")" << endl;
    }

    return out; // return output stream
}