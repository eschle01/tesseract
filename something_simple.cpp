#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void Game_Mode();//ToDo
void instructions(); //ToDo
void cheat_Code(); //ToDo
void controller(int Input_Value);
int Game_menu();

int main(){

    //used to create graphics
    string line_h = string(26, '-');
    string line_v = "|                         |";
    string box = line_h +"\n" + line_v + "\n" + line_v + "\n" + line_v + "\n" + line_h;
    string box_noTop = "\n" + line_v + "\n" + line_v + "\n" + line_v + "\n" + line_h;
    //box with text prototype, change the word text below to the desired text.
    string box_with_text = line_h +"\n" + line_v + "\n" + "|" +"\t   " +"text"+"\t\t  "+"|" +"\n" + line_v + "\n" + line_h;
    string box_Hi = line_h +"\n" + line_v + "\n" + "|" +"\t   " +"Hello"+"\t  "+"|" +"\n" + line_v + "\n" + line_h;
    string box_And =  "\n" + line_v + "\n" + "|" +"\t   " +"And"+"\t\t  "+"|" +"\n" + line_v + "\n" + line_h;
    string box_Welcome ="\n" + line_v + "\n" + "|" +"\t   " +"Welcome"+"\t  "+"|" +"\n" + line_v + "\n" + line_h;

    int Game_Mode;

    cout<<"Welcome to Text adventure!!!\n";
    cout<< box_Hi<<box_And<<box_Welcome;
    Game_Mode = Game_menu();
    controller(Game_Mode);






    return 0;
}

 void Game_Mode(){

    cout<<"Game_Mode works!";



}

 void instructions(){
    cout<<"Instructions works!";

}

 void cheat_Code(){
    cout<<"Cheat code works!";

}
 void controller(int Input_Value){

 switch(Input_Value){

            case 1:
                Game_Mode();
                break;
            case 2:
                instructions();
                break;
            case 3:
                cheat_Code();
                break;
            case 4:
                exit(1);
                break;
            default:
                    cout<<"I'm sorry, your selection was not valid\n";
                    Game_menu();
                    break;

        }
}
 int Game_menu(){

        string line_h = string(26, '-');
        string line_v = "|                         |";
        string box = line_h +"\n" + line_v + "\n" + line_v + "\n" + line_v + "\n" + line_h;
        int Input_Value = 1;

        string box_with_text = line_h +"\n" + line_v + "\n" + "|" +"\t   " +"menu"+"\t\t  "+"|" +"\n" + line_v + "\n" + line_h;

        cout<<box_with_text;
        cout<<"\n What would you like to do?";
        cout<<"\n Options: \n"<<"1. Play Game\n"<<"2. Read the instructions\n"<<"3. Input a Cheat Code\n"<<"4. Exit\n\n";
        cout<<"Please choose a value from 1 to 4: ";
        cin>>Input_Value;

        return Input_Value;


}
