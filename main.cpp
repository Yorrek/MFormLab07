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

    bezier.Subdivide((float).5, &segment1, &segment2);

    cout << endl << "Segment 1" << endl << endl;

    for (int i = 0; i < 4; i++) {
        cout << "Punkt" << i << ": " << segment1.points[i].getX() << "  " << segment1.points[i].getY() << endl;
    }

    cout << endl << "Segment 2" << endl << endl;

    for (int i = 0; i < 4; i++) {
        cout << "Punkt" << i << ": " << segment2.points[i].getX() << "  " << segment2.points[i].getY() << endl;
    }

    return 0;
}


