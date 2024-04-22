#include "Circle.h"
#include <cmath>
using namespace std;

const double MY_PI = 3.14159;

Circle::Circle()  // similar to python import book.book
{
    radius = 1; //call from Pizza.h = string Name

}

Circle::Circle(double radius)  // similar to python import book.book
{
    this->radius = radius; //call from Pizza.h = string Name

}

double Circle::getRadius() const
{
    return radius;
}

void Circle::setRadius(double radius) 
{
    this->radius = radius;
}

double Circle::circumference() const
{
    return 2 * MY_PI * radius;
}

double Circle::area() const
{
    return MY_PI * pow(radius,2);
}
