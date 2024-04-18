//without constructor
// need to initialise type inside class fuction
#include <iostream>
using namespace std;

class MyClassWithoutConstructor {
private:
    int value;

public:
    // Member function to set value
    void setValue(int val) {
        value = val;
    }

    // Member function to print value
    void printValue() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    // Creating object
    MyClassWithoutConstructor obj;

    // Setting value
    obj.setValue(100);

    // Printing value
    obj.printValue();     // Output: Value: 100

    return 0;
}

//with constructor
#include <iostream>
using namespace std;

class MyClassWithConstructor {
private:
    int value;

public:
    // Constructor with parameter to initialize value
    MyClassWithConstructor(int val) {
        value = val;
    }

    // Member function to print value
    void printValue() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    // Creating object using constructor
    MyClassWithConstructor obj(100);

    // Printing value
    obj.printValue();     // Output: Value: 100

    return 0;
}

