#include "Point.hpp"

Point::Point( float x, float y){
    m_x = x;
    m_y = y;
}

friend float operator+( Point p, Point q){
    return Point(p.m_x + q.m_x, p.m_y + q.m_y);
}

friend float operator-( Point p, Point q){
    return Point(p.m_x - q.m_x, p.m_y - q.m_y);
}

friend float operator*( Point p, Point q){
    return Point(p.m_x * q.m_x, p.m_y * q.m_y);
}

friend float operator/( Point p, Point q){
    return Point(p.m_x / q.m_x, p.m_y / q.m_y);
}
