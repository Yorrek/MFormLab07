//
//  main.cpp
//  Labor_7_1
//
//  Created by Felix Ohlsen on 14.12.16.
//  Copyright © 2016 Felix Ohlsen. All rights reserved.
//

#include "main.hpp"
#include <iostream>
#include <math.h>

using namespace std;

class Point{
    public:
    float x, y;
    Point( float a, float b);
    friend Point operator+( Point p, Point q);
    friend Point operator-( Point p, Point q);
    friend Point operator*( Point p, Point q);
    friend Point operator/( Point p, Point q);
};

Point::Point( float a, float b){
    x = a;
    y = b;
}

friend float operator+( Point p, Point q){
    return Point(p.x + q.x, p.y + q.y);
}

friend float operator-( Point p, Point q){
    return Point(p.x - q.x, p.y - q.y);
}

friend float operator*( Point p, Point q){
    return Point(p.x * q.x, p.y * q.y);
}

friend float operator/( Point p, Point q){
    return Point(p.x / q.x, p.y / q.y);
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
