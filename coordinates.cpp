


   // #include "navigation.h"
    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    #include <cmath>

    using namespace std;




//important learning:  You can call classes in other classes.
//This means 90% of my work is done.

class Point

{
public:
    char Letter;

    int x;

    int y;

};

class nav{

public:
    Point generate_map(Point coor[],int map_size);

};

Point nav::generate_map(Point coor[],int map_size){

    int x;
    srand( time(NULL) );
    int iter;
    for(iter=0;iter<map_size;iter++){
            x = rand()%4;
            //E = enemy
            //N = none
            //T = treasure

            switch(x){

                case 0:
                    coor[iter].Letter = 'E';
                    break;
                case 1:
                    coor[iter].Letter = 'N';
                    break;
                case 2:
                    coor[iter].Letter = 'T';
                    break;
                case 3:
                    coor[iter].Letter = 'N';
                    break;
                default:
                    cout<<"internal error";
                    break;
            }

    }

}


int main(){

    nav navi;
    int map_size =16;
    Point coordinate[map_size];

    navi.generate_map(coordinate,map_size);

    int k;
    for(k=0;k<map_size;k++){
            cout<<coordinate[k].Letter<<endl;
    }


    return 0;

}
