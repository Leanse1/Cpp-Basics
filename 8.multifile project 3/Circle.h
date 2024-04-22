#ifndef CIRCLE_H
#define CIRCLE_H
using namespace std;

class Circle
{
public:
    Circle();
    Circle(double radius);
    double getRadius() const; //from 1st constructor
    void setRadius (double radius); //from 2nd constructor
    double circumference() const;
    double area() const;
 

private:
    double radius;
};

#endif
