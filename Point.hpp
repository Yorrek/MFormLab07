#ifndef Point_hpp
#define Point_hpp


class Point
{
    private:
        float m_x, m_y;

    public:
        Point(float x, float y);
        Point(Point p);
        Point();

        friend Point operator+( Point p, Point q);
        friend Point operator-( Point p, Point q);
        friend Point operator*( Point p, Point q);
        friend Point operator/( Point p, Point q);

        void setX(float x){ m_x = x; }
        void setY(float y){ m_y = y; }

        float getX(){ return m_x; }
        float getY(){ return m_x; }
};

#endif
