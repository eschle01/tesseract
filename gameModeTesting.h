//This will be the .h file
#ifndef GAMEMODE_H
#define GAMEMODE_H

#include <iostream>
#include <string>
using namespace std;
class Level{

    public:
       // Level1();//constructor
        //~Level1();//destructor
        string start_location[2];
        string start_weapon[2];
        int first_action;
        string current_weapon;
        string current_health;
        void Level1_Map();
        void Level1_controller();
        void Level1_bats_killed();
        void at_cave_entrance();
        int bats_fight();
        int traversing_Map();

};
/*
class Level2{

  public:
        string start_location[2];
        string start_weapon[2];
        int first_action;
        //void Level2_Map();


};*/
#endif
