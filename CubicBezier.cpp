//
//  CubicBezier.cpp
//  Labor_7_1
//
//  Created by Felix Ohlsen on 14.12.16.
//  Copyright © 2016 Felix Ohlsen. All rights reserved.
//

/**TODO NOT DONE YET*/

#include "CubicBezier.hpp"
#include "iostream"

CubicBezier::CubicBezier(){
}

void CubicBezier::Subdivide(float t, CubicBezier *segment1, CubicBezier *segment2) {
    *segment1->setPoint(1,this->getPoint(1)); // erster punkt check
    *segment2->setPoint(1,this->getPoint(4));
    Point pTmp;
    //Berechnung der 1. Generation
    for (int i = 0; i < 3; i++){
        Point p1 = this->getPoint(i+1);
        p1.setX(p1.getX()*(1-t));
        p1.setY(p1.getY()*(1-t));
        Point p2 = this->getPoint(i+2);
        p2.setX(p2.getX()*t);
        p2.setY(p2.getY()*t);
        if(i==0){
            *segment1->setPoint(2,p1+p2); // zweiter punkt check
        }
        else if (i==2){
            *segment2->setPoint(2,p1+p2);
        }
        else {
            pTmp = new Point(p1 + p2);
        }
    }
    Point pTmp2 = pTmp;
    //Berechnung der 2. generation
    Point p1 = *segment1->getPoint(2);
    p1.setX(p1.getX()*(1-t));
    p1.setY(p1.getY()*(1-t));
    pTmp.setX(pTmp.getX()*t);
    pTmp.setY(pTmp.getY()*t);
    *segment1->setPoint(3,p1+pTmp);
    pTmp2.setX(pTmp2.getX()*(1-t));
    pTmp2.setY(pTmp2.getY()*(1-t));
    p1 = *segment2->getPoint(2);
    p1.setX(p1.getX()*t);
    p1.setY(p1.getY()*t);
    *segment2->setPoint(3,p1+pTmp2);
    p1 = *segment1->getPoint(3);
    Point p2 = *segment2->getPoint(3);
    p1.setX(p1.getX()*(1-t));
    p1.setY(p1.getY()*(1-t));
    p2.setX(p2.getX()*t);
    p2.setY(p2.getY()*t);
    *segment1->setPoint(4,p1+p2);
    *segment2->setPoint(4,p1+p2);
}

void CubicBezier::setPoint(int i, Point a) {
    m_points[i-1] = a;
}


