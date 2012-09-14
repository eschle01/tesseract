#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int IterPlus(int Iter);
//Use this to exit the menu and start the game.
void Game_Mode();//ToDo
void instructions(); //ToDo
void cheat_Code(); //ToDo -- In progress
void controller(int Input_Value);
int Game_menu(int Iter);
void load_level_2();//ToDo

int main(){

    char str;
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

    int menuIter=0;
    int Choose_Mode;

    cout<<"Welcome to Text adventure!!!\n";
    cout<< box_Hi<<box_And<<box_Welcome;
    cout<<"\nPlease hit return to continue";
    cin.get(str);
    do{
        Choose_Mode = Game_menu(menuIter);
        controller(Choose_Mode);
    }while(menuIter == 0);





    return 0;
}

 void Game_Mode(){

    cout<<"Game_Mode works!";



}

 void instructions(){
    cout<<"Instructions works!";

}

 void cheat_Code(){
    int Iter=0;
    string code;
    string Yes_No;
    cout<<"Please enter a cheat code: ";
    cin>>code;
    if(code == "armor"){
            load_level_2();
        }
     else  {
        cout<<"Incorrect cheat code\n";
        cout<<"Enter return to return to menu\n";
        cout<<"Enter anything else to enter another cheat code\n";
        cin>>Yes_No;
        if(Yes_No == "return")
                    Game_menu(Iter);
        else{

                }
     }

}
 void controller(int Input_Value){

    int Iter=0;
 switch(Input_Value){


            case 1:
                IterPlus(Iter);
                Game_Mode();
                break;
            case 2:
                IterPlus(Iter);
                instructions();
                break;
            case 3:
                IterPlus(Iter);
                cheat_Code();
                break;
            case 4:
                exit(1);
                break;
            default:
                    cout<<"I'm sorry, your selection was not valid\n";
                    Game_menu(Iter);
                    break;

        }
}

 int Game_menu(int Iter){

        string line_h = string(26, '-');
        string line_v = "|                         |";
        string box = line_h +"\n" + line_v + "\n" + line_v + "\n" + line_v + "\n" + line_h;
        int Input_Value = 1;

        string box_with_text = line_h +"\n" + line_v + "\n" + "|" +"\t   " +"menu"+"\t\t  "+"|" +"\n" + line_v + "\n" + line_h;

        cout<<box_with_text;
        do{
            cout<<"\n What would you like to do?";
            cout<<"\n Options: \n"<<"1. Play Game\n"<<"2. Read the instructions\n"<<"3. Input a Cheat Code\n"<<"4. Exit\n\n";
            cout<<"Please choose a value from 1 to 4: ";
            cin>>Input_Value;
        }while(!(Input_Value<5 || Input_Value>0));


        return Input_Value;


}
int IterPlus(int Iter){
    Iter++;
    return Iter;
}

void load_level_2(){

    cout<<"Level 2 works";
}
