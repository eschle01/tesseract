#include <iostream>

using namespace std;
   // #include "navigation.h"
    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    #include <cmath>

    using namespace std;


class nav: public Point{

    public:
        //nav(int x, int y);
        //int player_position;
        //void nav_menu();
       // void generateEnemy(int a[4]);
      //  void map_update(int a[4][4]);
        void interaction();
        //void playerPositionUpdate(int &change,bool upDown);
};

        nav::nav(int x, int y){
            //otherwise map must be kept in memory, allows player to move up and down levels
//            this->player_position_x = x;
  //          this->player_position_y = y;

        }

        void map_update(int a[4]){
         //fix.



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
        //this may be unnecessary
        void nav::playerPositionUpdate(int &change,bool upDown){
            if(upDown){
                this->player_position_y = this->player_position_y +change;
            }
            else{
                this->player_position_x = this->player_position_x +change;
            }
        }
        //checks if a player can move a given direction



void nav::generateEnemy(int a[4]){
            int i;
            int j;

            //generate map with monsters randomly distributed
            srand (time(NULL));
            for(i=0;i<4;i++){
                    a[i] = (rand()%2);

            }
            this->treasure_position = 5;
            //I'll have to figure something else out for this.
            a[3] = this->treasure_position;
             //generates treasure position and value, there is only one treasure!



        }

void nav::interaction(){

           Point coor[4];
           coor[0].x = 5;
           cout<<coor[0].x;
        }

class Point

{
public:
    char Letter;

    int x;

    int y;

};



int main()

{/*
    Point Coordinates[4] = {'P', -4,  0, 'Q', -3, -2,'L',  5,  1, 'M', 2,  6};
    cout << "Point Coordinates";

    cout << "\n" << Coordinates[0].Letter << "("

         << Coordinates[0].x << ", " << Coordinates[0].y << ");";

    cout /*<< "\n" << Coordinates[1].Letter *///<< "("

   /*      << Coordinates[1].x << ", " << Coordinates[1].y << ");";

    cout /*<< "\n" << Coordinates[2].Letter *///<< "("

    //     << Coordinates[2].x << ", " << Coordinates[2].y << ");";

    /*cout /*<< "\n" << Coordinates[3].Letter*/ //<< "("

      /*   << Coordinates[3].x << ", " << Coordinates[3].y << ");\n";
*/
nav test;
    test.interaction();
	return 0;

}
