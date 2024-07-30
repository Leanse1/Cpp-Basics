// multidimensional dynamic array

Creating and using multidimensional dynamic arrays in C++ requires the use of pointers to pointers and dynamic memory allocation functions like new and delete

  Link: https://www.youtube.com/watch?v=mGl9LO-je3o

#include <iostream>
using namespace std;

int main() {
    int rows = 3;
    int cols = 4;

    // Step 1: Declare a pointer to a pointer
    // multi dimensional array creation starts from 3d to 2d to 1d
    int** array;

    // Step 2: Allocate memory for rows (which is memory of both array and first element of the array)
    array = new int* [rows];

    // Step 3: Allocate memory for columns for each row
    for (int i = 0; i < rows; ++i) {
        array[i] = new int[cols];
    }

    // Step 4: Initialize and use the 2D array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            array[i][j] = i * cols + j; // Example initialization
        }
    }

    // Display the 2D array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Step 5: Free the allocated memory
    //Free memory goes from 1d to 2d to 3d
    for (int i = 0; i < rows; ++i) {
        delete[] array[i]; // Free memory allocated for columns
    }
    delete[] array; // Free memory allocated for rows

    return 0;
}
