#ifndef VECTOR_H_
#define VECTOR_H_

class Vector
{
    double x;
    double y;
    
    public:
    
    Vector(double i, double j)
    {
        x = i;
        y = j;
    }

    Vector()
    {
        x = 0;
        y = 0;
    }
    
    void setCoord(double i, double j);
    
    double getX();
    double getY();
    
    Vector add(Vector v);
    Vector sub(Vector v);
    
    double Mod();
    double Dot(Vector v);
    Vector Cross(Vector v);
    
    void Multi(int);
    void Divi(int);
    
    void normalize();
};

#endif
