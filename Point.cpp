#include "Point.hpp"

Point::Point( float x, float y){
    this->setX(x);
    this->setY(y);
}

Point::~Point() {}

Point::Point(Point p) {
    this->setX(p.getX());
    this->setY(p.getY());
}

friend Point operator+( Point p, Point q){
    return Point(p.m_x + q.m_x, p.m_y + q.m_y);
}

friend Point operator-( Point p, Point q){
    return Point(p.m_x - q.m_x, p.m_y - q.m_y);
}

friend Point operator*( Point p, Point q){
    return Point(p.m_x * q.m_x, p.m_y * q.m_y);
}

friend Point operator/( Point p, Point q){
    return Point(p.m_x / q.m_x, p.m_y / q.m_y);
}
