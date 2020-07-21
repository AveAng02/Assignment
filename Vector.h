#ifndef VECTOR_H_
#define VECTOR_H_

#include <string>

class Vector
{
    double x;
    double y;
    int foo;
    
    public:
    
    Vector(double i, double j)
    {
        x = i;
        y = j;
    }
    
    void setCoord(double i, double j);
    
    double getX();
    double getY();
    
    Vector add(Vector v);
    Vector sub(Vector v);
    
    double Mag();
    double Dot(Vector v);
    Vector Cross(Vector v);
    
    void Multi(int);
    void Divi(int);
    
    void normalize();
};

#endif
