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
#include "BezierControlPoints.hpp"

using namespace std;

class CubicBezier
{
private:
    BezierControlPoints m_points;

public:
    CubicBezier( BezierControlPoints points );

    void Subdivide( float t, CubicBezier *segment1, CubicBezier *segment2 );

};

#endif /* CubicBezier_hpp */




