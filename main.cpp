#include <iostream>
#include "CubicBezier.hpp"
#include "Point.hpp"

int main(){
    Point a = new Point(0,0);
    Point b = new Point(1,1);
    Point c = new Point(2,1);
    Point d = new Point(2,0);
    CubicBezier bezier = new CubicBezier();
    bezier.setPoint(1,new Point(0,0));
    bezier.setPoint(2,new Point(1,1));
    bezier.setPoint(3,new Point(2,1));
    bezier.setPoint(4,new Point(2,0));



    return 0;
}