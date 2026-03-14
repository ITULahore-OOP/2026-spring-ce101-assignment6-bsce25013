#include <iostream>
#include "Hero.h"
#include "Warrior.h"
#include "Knight.h"
#include "Spellblade.h"
#include "Guild.h"

using namespace std;

int main() {

    string guildName;
    cout << "Enter Guild Name: ";
    cin >> guildName;

    Guild g1(guildName);

    Hero* roster[15];
    int memberCount = 0;

    int choice;

    do {
        cout << "1. Warrior\n";
        cout << "2. Knight\n";
        cout << "3. Spellblade\n";
        cout << "4. Add Hero to Guild\n";
        cout << "5. Display Guild Stats\n";
        cout << "6. Calculate Guild Power\n";
        cout << "0. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        if(choice == 1) {

            if(memberCount >= 15){
                cout << "Hero storage full!\n";
                continue;
            }

            string name;
            int health, power, armor;

            cout << "Enter name: ";
            cin >> name;
            cout << "Enter health: ";
            cin >> health;
            cout << "Enter base power: ";
            cin >> power;
            cout << "Enter armor rating: ";
            cin >> armor;

            roster[memberCount] = new Warrior(name, health, power, armor);
            memberCount++;

            cout << "Warrior created!\n";
        }

        else if(choice == 2) {

            if(memberCount >= 15){
                cout << "Hero storage full!\n";
                continue;
            }

            string name;
            int health, power, armor, charge;

            cout << "Enter name: ";
            cin >> name;
            cout << "Enter health: ";
            cin >> health;
            cout << "Enter base power: ";
            cin >> power;
            cout << "Enter armor rating: ";
            cin >> armor;
            cout << "Enter charge bonus: ";
            cin >> charge;

            roster[memberCount] = new Knight(name, health, power, armor, charge);
            memberCount++;

            cout << "Knight created!\n";
        }

        else if(choice == 3) {

            if(memberCount >= 15){
                cout << "Hero storage full!\n";
                continue;
            }

            string name;
            int health, power, armor, mana, spell;

            cout << "Enter name: ";
            cin >> name;
            cout << "Enter health: ";
            cin >> health;
            cout << "Enter base power: ";
            cin >> power;
            cout << "Enter armor rating: ";
            cin >> armor;
            cout << "Enter mana pool: ";
            cin >> mana;
            cout << "Enter spell power: ";
            cin >> spell;

            roster[memberCount] = new Spellblade(name, health, power, armor, mana, spell);
            memberCount++;

            cout << "Spellblade created!\n";
        }

        else if(choice == 4) {

            if(memberCount == 0){
                cout << "No heroes available!\n";
                continue;
            }

            cout << "Available Heroes:\n";
            for(int i = 0; i < memberCount; i++){
                cout << i << " - " << roster[i]->getName() << endl;
            }

            int index;
            cout << "Enter hero index: ";
            cin >> index;

            if(index >= 0 && index < memberCount){
                g1 += roster[index];
                cout << "Hero added to guild!\n";
            }
            else{
                cout << "Invalid index!\n";
            }
        }

        else if(choice == 5) {
            g1.displayGuildStats();
        }

        else if(choice == 6) {
            cout << "Total Guild Power: "
                 << g1.calculateTotalGuildPower()
                 << endl;
        }

    } while(choice != 0);


    // Free memory
    for(int i = 0; i < memberCount; i++){
        delete roster[i];
    }

    return 0;
}