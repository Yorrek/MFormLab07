//
//  CubicBezier.hpp
//  Labor_7_1
//
//  Created by Felix Ohlsen on 14.12.16.
//  Copyright © 2016 Felix Ohlsen. All rights reserved.
//

/**TODO NOT DONE YET*/

#ifndef CubicBezier_hpp
#define CubicBezier_hpp

#include <stdio.h>
#include "Point.hpp"

using namespace std;

class CubicBezier
{
private:
    Point m_points[4];

public:
    CubicBezier();

    void Subdivide( float t, CubicBezier *segment1, CubicBezier *segment2 );

    Point getPoint(int i) { return m_points[i - 1]; }
    Point[] getPoints() { return m_points; }
    void setPoint(int i, Point a);
};

#endif /* CubicBezier_hpp */




