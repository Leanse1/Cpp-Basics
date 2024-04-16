#include <iostream>
using namespace std;

void changeValue(int num) {
    num = 10;
}

//overwrites main function value
void changeValueByReference(int& num) {
    num = 10;
}

int main() {
    int x = 5;
    
    // Pass by value
    changeValue(x);
    cout << "After changeValue, x = " << x << endl; // Output: 5

    // Pass by reference
    changeValueByReference(x);
    cout << "After changeValueByReference, x = " << x << endl; // Output: 10

    return 0;
}
