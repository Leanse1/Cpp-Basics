#include <iostream>
#include "Circle.h"
using namespace std;

void printCircleData(const Circle& c);

int main()
{
    Circle circ1;
    Circle circ2(5);

    printCircleData(circ1);
    printCircleData(circ2);

    return 0;
}

void printCircleData(const Circle& c) //Circle = circle
{
    cout << "Circumference with radius " << c.getRadius()
        << "Circumference " << c.circumference() << " Area : " << c.area()
        << endl;

};


