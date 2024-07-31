#include <iostream>
using namespace std;

//Changes made to num inside the function do not affect the original integer outside the function.
void changeValue(int num) {
    num = 10;
}

//overwrites main function value
void changeValueByReference(int& num) {
    num = 10;
}

//only read cant overwrite existing
void onlyRead(const int& num) {
    num;
}

int main() {
    int x = 5;
    
    // Pass by value
    changeValue(x);
    cout << "After changeValue, x = " << x << endl; // Output: 5

    // Pass by reference 
    changeValueByReference(x);
    cout << "After changeValueByReference, x = " << x << endl; // Output: 10

    //only read
    onlyRead(x);
    cout << "After onlyRead, x = " << x << endl; // Output: 10


    return 0;
}
