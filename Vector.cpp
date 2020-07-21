#include <cmath>
#include "Vector.h" 

void Vector::setCoord(double i, double j)
{
    this->x = i;
    this->y = j;
}
    
double Vector::getX()
{
    return this->x;
}    
    
double Vector::getY()
{
    return this->y;
}    
    
Vector Vector::add(Vector v)
{
    double i = this->x + v.x;
    double j = this->y + v.y;
    return Vector(i, j);
}
    
Vector Vector::sub(Vector v)
{
    double i = this->x - v.x;
    double j = this->y - v.y;
    return Vector(i, j);
}
    
double Vector::Mod()
{
    return sqrt(pow(this->x, 2) + pow(this->y, 2));
}
    
double Vector::Dot(Vector v)
{
    return (this->x * v.x) + (this->y * v.y);
}
    
Vector Vector::Cross(Vector v)
{
    Vector a;
    a.setCoord((this->x * v.y), (-1 * this->y * v.x));

    return a;
}
    
void Vector::Multi(int n)
{
    this->x = this->x * n;
    this->y = this->y * n;
}

void Vector::Divi(int n)
{
    this->x = this->x / n;
    this->y = this->y / n;
}
    
void Vector::normalize()
{
    Divi(Mod());
}
    
    
    
    
    
    
    