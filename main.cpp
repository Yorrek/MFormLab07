#include <iostream>
#include "CubicBezier.hpp"
#include "Point.hpp"

using namespace std;

int main() {

    CubicBezier bezier;
    bezier.setPoint(0, Point(0, 0));
    bezier.setPoint(1, Point(1, 2));
    bezier.setPoint(2, Point(4, 2));
    bezier.setPoint(3, Point(6, 0));

    CubicBezier segment1;
    CubicBezier segment2;

    bezier.Subdivide((float)0.5, &segment1, &segment2);

    cout << endl << "Segment 1" << endl << endl;

    for (int i = 0; i < 4; i++) {
        cout << "Punkt" << i << ": " << segment1.points[i].m_x << "  " << segment1.points[i].m_y << endl;
    }

    cout << endl << "Segment 2" << endl << endl;

    for (int i = 0; i < 4; i++) {
        cout << "Punkt" << i << ": " << segment2.points[i].m_x << "  " << segment2.points[i].m_y << endl;
    }

    return 0;
}


