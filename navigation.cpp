    #include "navigation.h"
    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    #include <cmath>

    using namespace std;


        //constructor
        nav::nav(int x, int y){
            //otherwise map must be kept in memory, allows player to move up and down levels
            this->player_position_x = x;
            this->player_position_y = y;

        }
        void nav::map_update(int a[4][4]){
            int i;
            int j;
            //checks if there is a monster?
            //I'm not sure what to do here...
            //Perhaps its time for some help?
            //I think I'll need to see how to implement a coordinate system
            for(i=0;i<4;i++){
                for(j=0;j<4;j++){
                    if(a[i][j]==this->player_position_y){
                        a[i][j]
                    }
                }
            }


        }


        }

        void nav::nav_menu(){
            string direction;
            cout<<"("<<this->player_position_x<<","<<this->player_position_y<<")"<<" is your current position";
            cout<<"\nWhat where would you like to go?";
            cin>>direction;
            this->map_check(direction);
        }
      void nav::map_check(string dir){
            bool valid=false;
            if(dir == "up"){
                //do checking
                if(this->player_position_y == 0){
                    valid=false;
                }
                else{
                    valid = true;
                }
                if(valid)
                    this->playerPositionUpdate(1,true);

            }
            else if(dir == "down"){
                //do checking
                if(this->player_position_y == 3){
                    valid = false;
                }
                else{
                    valid = true;
                }
                if(valid)
                    this->playerPositionUpdate(-1,true);
            }
            else if(dir == "right"){
                //do checking
                if(this->player_position_x == 3){
                    valid = false;
                }
                else{
                    valid = true;
                }
                if(valid)
                    this->playerPositionUpdate(1,false);
            }
            else if(dir == "left"){
                //do checking
                if(this->player_position_x == 0){
                    valid = false;
                }
                else{
                    valid = true;
                }
                if(valid)
                    this->playerPositionUpdate(-1,false);
            }
            else{
                cout<<endl<<"This is not a valid direction";
            }



        }

        //checks if a player can move a given direction
        void nav::blocked(){


        }


        void nav::generateCoordinateSystem(int a[4][4]){
            int i;
            int j;

            srand (time(NULL));
            for(i=0;i<4;i++){
                for(j=0;j<4;j++){
                    a[i][j] = (rand()%2);
                }
            }
            this->treasure_position = 5;
            a[3][3] = this->treasure_position;
             //generates treasure position and value, there is only one treasure!



        }


