//This will be the .h file
#ifndef COORDINATES_H
#define COORDINATES_H

    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    #include <cmath>

    using namespace std;

class Point
{
public:
    char Letter;

    int x;

    int y;

};

class nav{

public:
    Point generate_coor(Point coor[],int map_size);
    Point current_position;


};
#endif
