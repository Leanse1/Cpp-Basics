//allocated at runtime instead of set at compile time
#include <iostream>
using namespace std;

int main() {
    // Dynamic allocation of a single integer
    int *ptr1 = new int;  // Allocate memory for a single integer
    *ptr1 = 10;            // Assign a value to the dynamically allocated integer

    cout << "Dynamically allocated integer: " << *ptr1 << endl;

    // Dynamic allocation of an array of integers
    int size = 5;
    int *ptr2 = new int[size];  // Allocate memory for an array of integers

    for (int i = 0; i < size; ++i) {
        ptr2[i] = i * 2;  // Assign values to the elements of the array
    }

    cout << "Dynamically allocated array: ";
    for (int i = 0; i < size; ++i) {
        cout << ptr2[i] << " ";
    }
    cout << endl;

    // Deallocate dynamically allocated memory
    delete ptr1;  // Release memory allocated for a single integer
    delete[] ptr2;  // Release memory allocated for an array

    return 0;
}
