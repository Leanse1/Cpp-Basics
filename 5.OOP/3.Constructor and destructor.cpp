//constructor
//same name as the class and doesn't have a return type, not even void.
// ensure that objects are initialized correctly and provide a clean interface for objects in C++ program
//destructor
//Destructors are used to release resources acquired by an object, such as memory,

#include <iostream>
using namespace std;

class Triangle {
private:
    float side1, side2, side3;

public:
    // Constructor
    Triangle(float s1, float s2, float s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
        cout << "Triangle object created." << endl;
    }

    // Destructor
    ~Triangle() {
        cout << "Triangle object destroyed." << endl;
    }

    void printType() {
        if (side1 == side2 && side2 == side3) {
            cout << "It's an equilateral triangle." << endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            cout << "It's an isosceles triangle." << endl;
        } else {
            cout << "It's a scalene triangle." << endl;
        }
    }
};

int main() {
    float s1, s2, s3;
    cout << "Enter the lengths of the sides of the triangle:" << endl;
    cout << "Side 1: ";
    cin >> s1;
    cout << "Side 2: ";
    cin >> s2;
    cout << "Side 3: ";
    cin >> s3;

    // Triangle object created here
    Triangle triangle(s1, s2, s3);
    triangle.printType();

    // Triangle object destroyed here
    return 0;
}
