//
//  BezierControlPoints.cpp
//  Labor_7_1
//
//  Created by Felix Ohlsen on 14.12.16.
//  Copyright © 2016 Felix's Muddi. Free access.
//

#include "BezierControlPoints.hpp"

BezierControlPoints::BezierControlPoints(Point a, Point b, Point c, Point d){
        m_points[0] = a;
        m_points[1] = b;
        m_points[2] = c;
        m_points[3] = d;
}

BezierControlPoints::setPoint(int i, Point a){
    m_points[i] = a;
}
