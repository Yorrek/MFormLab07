//
//  BezierControlPoints.hpp
//  Labor_7_1
//
//  Created by Felix Ohlsen on 14.12.16.
//  Copyright © 2016 Felix Ohlsen. All rights reserved.
//

#ifndef BezierControlPoints_hpp
#define BezierControlPoints_hpp

#include <stdio.h>
#include "Point_hpp"

using namespace std;

class BezierControlPoints
{
    private:
        Point m_points[4];

    public:
        BezierControlPoints(Point a, Point b, Point c, Point d);

        Point getPoint(int i){ return m_points[i-1] };
        Point[] getPoints(){ return m_points };

        void setPoint(int i, Point a);

};

#endif /* BezierControlPoints_hpp */


