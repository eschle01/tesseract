
//This will be the .cpp file
#include <string>
#include <iostream>
#include "gameMode.h"

using namespace std;


class Level1{

    public:
        string start_location[2];
        string start_weapon[2];
        int first_action;
        void Level1_Map();

};
*/


void Level::Level1_Map(){
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

   // cout<<"Welcome to Text adventure!!!\n"; Incase I want text abox the map later for some reason.
    cout<< box_Map<<box_Entrance<<box_noTop<<box_noTop<<box_noTop;

}


//testing class fuctions
/*int main(){


    Level1 test;

    test.Level1_Map();

return 0;
}
*/
