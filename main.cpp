#include <iostream>
#include "CubicBezier.hpp"
#include "Point.hpp"

using namespace std;

int main(){
    CubicBezier bezier = new CubicBezier();
    bezier.setPoint(1,new Point(0,0));
    bezier.setPoint(2,new Point(1,1));
    bezier.setPoint(3,new Point(2,1));
    bezier.setPoint(4,new Point(2,0));

    CubicBezier *segment1 = new CubicBezier();
    CubicBezier *segment2 = new CubicBezier();
    bezier.Subdivide(.5, *segment1, *segment2);



    return 0;
}