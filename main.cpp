#include <iostream>
#include "CubicBezier.hpp"
#include "Point.hpp"

using namespace std;

int main() {

    CubicBezier bezier;
    bezier.setPoint(1, Point(0, 0));
    bezier.setPoint(2, Point(1, 1));
    bezier.setPoint(3, Point(2, 1));
    bezier.setPoint(4, Point(2, 0));

    CubicBezier segment1;
    CubicBezier segment2;
    bezier.Subdivide(.5, &segment1, &segment2);
    system("PAUSE");
    return 0;

}