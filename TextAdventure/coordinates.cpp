
/*
Generates the coordinate system
*/

    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    #include <cmath>
    #include "coordinates.h"
    using namespace std;






Point nav::generate_coor(Point coor[],int map_size){

    int x;
    srand( time(NULL) );
    int iter;
    for(iter=0;iter<map_size;iter++){
            x = rand()%4;
            //E = enemy
            //N = none
            //T = treasure

        coor[iter].x = iter;
        coor[iter].y = iter;

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



