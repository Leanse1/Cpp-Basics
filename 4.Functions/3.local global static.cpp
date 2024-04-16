#include <iostream>
using namespace std;

// Global variable declaration
int globalVar = 0;


void localDemo() {
    int localVar = 0; // Local variable
    static int staticVar = 0; // Static variable

    localVar++; // local variable will initialise every time to 0
    staticVar++;// static variable store new value every time
    globalVar++;// global variable store new value every time

    cout << "Local variable: " << localVar << endl;
    cout << "Static variable: " << staticVar << endl;
    cout << "global variable: " << globalVar << endl;
}

int main() {
    for (int i = 0; i < 3; ++i) {
        localDemo();
    }
    return 0;
}