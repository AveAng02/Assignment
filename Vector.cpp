#include <cmath>
#include Vector.h 

void Vector::setCoord(double i, double j)
{
    this->x = i;
    this->y = j;
}
    
double getX()
{
    return this->x;
}    
    
double getY()
{
    return this->y;
}    
    
Vector add(Vector v)
{
    double i = this->x + v.x;
    double j = this->y + v.y;
    return Vector(i, j);
}
    
Vector sub(Vector v)
{
    double i = this->x - v.x;
    double j = this->y - v.y;
    return Vector(i, j);
}
    
double Mod()
{
    return sqrt(pow(this->x, 2) + pow(this->y, 2));
}
    
double Dot(Vector v)
{
    return (this->x * v.x) + (this->y * v.y);
}
    
Vector Cross(Vector v)
{
    Vector a = ((this->x * v.y) - (this->y * v.x))*normalize();
    return a;
}
    
void Multi(int n)
{
    this->x = this->x * n;
    this->y = this->y * n;
}

void Divi(int n)
{
    this->x = this->x / n;
    this->y = this->y / n;
}
    
void normalize()
{
    Divi(Mod());
}
    
    
    
    
    
    
    