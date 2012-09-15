   // #include "navigation.h"
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


        void map_update(int a[4][4]){



        }

        void nav::nav_menu(){
            string direction;
            cout<<"("<<this->player_position_x<<","<<this->player_position_y<<")"<<" is your current position";
            cout<<"\nWhat where would you like to go?";
            cin>>direction;
            this->map_check(direction);
        }
        void nav::map_check(string dir){

            if(dir == "up"){

            }
            else if(dir == "down"){

            }
            else if(dir == "right"){

            }
            else if(dir == "left"){

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



int main(){

    nav Navi;
    //nav *ptr;


    Navi.generateCoordinateSystem(Navi.coordinate_system);
     int i;
     int j;
     for(i=0;i<4;i++){
                for(j=0;j<4;j++){
                    cout<<endl<<Navi.coordinate_system[i][j]<<" equals "<<i<<","<<j;
                }
            }

    return 0;
}
