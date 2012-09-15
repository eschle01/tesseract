    #include "navigation.h"
    #include <iostream>
    #include <cstdlib>

    using namespace std;



        int nav::coordinate_system[4][4];

        int nav::player_position_x;
        int nav::player_position_y;

        void nav::nav_menu(){
            string direction;
            cout<<"("<<player_position_x<<","<<player_position_y<<")"<<" is your current position";
            cout<<"\nWhat where would you like to go?";
            cin>>direction;
            if(direction == "up"){
                this->map_check();
            }
            else if(direction == "down"){
                this->map_check();
            }
            else if(direction == "right"){
                this->map_check();
            }
            else if(direction == "left"){
                this->map_check();
            }
            else{
                cout<<endl<<"This is not a valid direction";
            }
        }
        void nav::map_check(){
                if(coordinate_system[1][1]==1 ){

                }



        }
        int nav::enemy_position;

        int nav::treasure_position;

