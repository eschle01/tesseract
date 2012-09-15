
//This will be the .h file
#ifndef GAMEMODE_H
#define GAMEMODE_H

    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    #include <cmath>

    using namespace std;


class nav{

    public:
        int coordinate_system[4][4];
        int player_position;
        void nav_menu();
        void map_check(string dir);
        void generateCoordinateSystem(int a[4][4]);
        void blocked();//checks if a player can move a given direction
        int enemy_position;
        int treasure_position;
        int player_position_x;
        int player_position_y;
        void map_update(int a[4][4]);
};

#endif
