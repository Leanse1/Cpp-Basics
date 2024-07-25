#include <iostream>
using namespace std;

// to ensure that the array arr doesn't grow beyond its allocated memory. 
const int MAX_SIZE = 100;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    // Display current array
    cout << "Current Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Modify element at index 2
    int modifyIndex = 2;
    int modifyValue = 10;
    if (modifyIndex >= 0 && modifyIndex < size) {
        arr[modifyIndex] = modifyValue;
    }
  
    // Display modified array
    cout << "Modified Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insert element at index 2
    int insertIndex = 2;
    int insertValue = 7;
    if (insertIndex >= 0 && insertIndex <= size) {
        // Shift elements to the right
        for (int i = size; i > insertIndex; i--) {
             arr[i] = arr[i - 1]; //6 = 5, 5=4
        }
        arr[insertIndex] = insertValue;
        ++size;
        cout << "Element " << insertValue << " inserted at index " << insertIndex << endl;
    } else {
        cout << "Invalid index. Insert operation failed." << endl;
    }

    // Display array after insertion
    cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insert element at the end
    int insertLastValue = 8;
    if (size >= MAX_SIZE) {
        cout << "Array is full. Insert operation failed." << endl;
    } else {
        arr[size] = insertLastValue;
        ++size;
        cout << "Element " << insertLastValue << " inserted at the end" << endl;
    }

    // Display array after inserting at the end
    cout << "Array after inserting at the end: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Delete element at index 3
    int deleteIndex = 3;
    if (deleteIndex >= 0 && deleteIndex < size) {
        // Shift elements to the left
        for (int i = deleteIndex; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        --size;
        cout << "Element at index " << deleteIndex << " deleted successfully." << endl;
    } else {
        cout << "Invalid index. Delete operation failed." << endl;
    }

    // Display array after deletion
    cout << "Array after deletion: ";
    for (int i = 0; i < size;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
