
//This will be the .cpp file
#include <string>
#include <iostream>
//#include "gameMode.h"
//^only for project file
#include <cstdlib>
#include "gameModeTesting.h"
#include <ctime>


using namespace std;

/*
class Level{

    public:
        string start_location[2];
        string start_weapon[2];
        int first_action;
        void Level1_Map();
        int Level1_controller();

};*/

void Level::Level1_Map(){

    /*
        Below is for single element boxes

    */
    //This makes the map for the level

    //Making box primitives for the map box
    string line_h_Map = string(8, '-');
    string white_space_Map = string(6,' ');
    string line_v_Map = "|"+ white_space_Map+  "|";
    //Making box primitives for the Entrance box
    string line_h_Entrance_Top = string(6, '-');
    string white_space_Entrance = string(12,' ');
    string line_v_Entrance = "|"+ white_space_Entrance+  "|";
    string line_h_Entrance_Bottum = string(14, '-');

    //Making box primitives for the general box with and without at top
    string line_h = string(14, '-');
    string white_space = string(12,' ');
    string line_v = "|"+ white_space+  "|";
    //Making standard boxes with no text
    string box = line_h +"\n" + line_v + "\n" + line_v + "\n" + line_v + "\n" + line_h;
    string box_noTop = "\n" + line_v + "\n" + line_v + "\n" + line_v + "\n" + line_h;
    //box with text prototype, change the word text below to the desired text.
    string box_with_text = line_h +"\n" + line_v + "\n" + "|" +"\t   " +"text"+"\t\t  "+"|" +"\n" + line_v + "\n" + line_h;
    //finished boxes, ready for custom use -- Map and Entrance boxes to our map
    string box_Map = line_h_Map +"\n" + line_v_Map + "\n" + "|" +" Map  " + "|" +"\n" + line_v_Map + "\n" + line_h_Map;
    string box_Entrance =  line_h_Entrance_Top +"\n" + line_v_Entrance + "\n" + "|" +"  Entrance  " + "|" +"\n" + line_v_Entrance + "\n" + line_h_Entrance_Bottum;
    //string box_And =  "\n" + line_v + "\n" + "|" +"\t   " +"And"+"\t\t  "+"|" +"\n" + line_v + "\n" + line_h;
    //string box_Welcome ="\n" + line_v + "\n" + "|" +"\t   " +"Welcome"+"\t  "+"|" +"\n" + line_v + "\n" + line_h;
    //^These are here just incase.

/*
    Multi element boxes
*/

    string Multi_line_h_Top = string(42, '-');
    string Multi_line_h = string(56, '-');
    string Multi_white_space = string(12,' ');
    string Multi_line_v = "|" + Multi_white_space+ "|" + Multi_white_space + " |"+Multi_white_space+" |"+Multi_white_space+ " |";

    string Multi_box = Multi_line_h_Top +"\n" + Multi_line_v + "\n" + Multi_line_v + "\n" + Multi_line_v + "\n" + Multi_line_h ;
    string Multi_box_noTop = "\n" + Multi_line_v + "\n" + Multi_line_v + "\n" + Multi_line_v + "\n" + Multi_line_h;


   // cout<<"Welcome to Text adventure!!!\n"; Incase I want text abox the map later for some reason.
    //Creates a 4x4 grid.
    cout<< box_Map<<box_Entrance<<Multi_box<<Multi_box_noTop
    <<Multi_box_noTop
    <<Multi_box_noTop;


}
void Level::Level1_controller(){


    string start_location = "Dummy Cave";
    string start_weapon = "Dummy sword";
    int first_action=0;
    int player_damage=0;
    int num_bats=10;
    int num_bats_left = 10;


    cout<<"Let's start the adventure\n";
    cout<<"You Find yourself in a "<<start_location;//ToDo add a dictionary to this
    cout<<" with a "<<start_weapon;
    this->bats_fight();


}

int Level::bats_fight(){


    string start_location = "Dummy Cave";
    string start_weapon = "Dummy sword";
    int first_action=0;
    int player_damage=0;
    int num_bats=10;
    int num_bats_left = 10;
    srand(time(NULL)); //seeding variable

    cout<<"\nThere are bats everywhere!!!  What do you do?";
    cout<<"\nOptions:\n"
        <<"(1)run deeper into the cave "
        <<endl<<"(2) fight the bats"
        <<endl<<"(3)Pee your pants and then fight the bats"
        <<endl<<"(4)Run towards the mouth of the cave \n";
     cout<<"choice: ";
     cin>>first_action;
     switch(first_action){
        case 1:
            cout<<"You chose run deeper into the cave!!\n";
            this->Level1_Map();
            return 1;
            break;
        case 2:
                while((player_damage<15) && (num_bats > 0)){
                    player_damage =abs((rand() % 10)) + player_damage;
                    num_bats = num_bats - (abs((rand() % 10))+3);

                    cout<<"You take "<<player_damage<<" damage\n";
                    if(player_damage<15){
                        num_bats_left = num_bats_left - num_bats;
                        if(num_bats_left <0) num_bats_left = 0;
                        if(num_bats > 0){
                            cout<<"You killed "<< num_bats<<" there are "
                        <<num_bats_left<<" left\n";
                        }
                        else{
                            cout<<"You killed all the bats!!!";
                            this->Level1_bats_killed();
                        }
                    }
                    else{
                        cout<<"Game over, you died, sorry";
                        exit(1);
                    }
                }
                break;
        default:
            cout<<"not a valid choice\n Please choose again:";
            this->bats_fight();
            break;
     }
}
void Level::Level1_bats_killed(){

    current_weapon = "batSword";
    current_health = "20";
    int first_action=0;

    //level up!!
    cout<<"You got batSword\n";
    cout<<"Your health restored and increased to 20!!!\n";
    this->at_cave_entrance();

}
void Level::at_cave_entrance(){
  //Doin' stuff!
    cout<<"What would you like to do now?";
    cout<<"Options:";
    cout<<"\n(1) Walk to the front of the cave";
    cout<<"\n(2) Walk deeper into the cave";
    cout<<"choice: ";
    cin>>first_action;
    switch(first_action){

        case 1:
            this->Level1_Map();
            //this->traversing_Map();
            break;
        case 2:
            cout<<"Thanks for playing!!!";
            //ToDo Take this to the menu screen?
            break;
        default:
            cout<<"Invalid choice, please choose again\n";
            this->at_cave_entrance();



    }
}
//testing class fuctions
int main(){


    Level test;

    test.Level1_controller();
    cout<<"something is very strange";
return 0;
}

