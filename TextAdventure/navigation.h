
//This will be the .h file
#ifndef GAMEMODE_H
#define GAMEMODE_H

#include <iostream>
#include <string>
using namespace std;
class nav{

    public:
        // Level1();//constructor
        //~Level1();//destructor
        int coordinate_system[4][4];
        int player_position;
        void nav_menu();
        void nav::map_check();
        int enemy_position;
        int treasure_position;
        int player_position_x;
        int player_position_y;

};

#endif
