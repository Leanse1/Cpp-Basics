#include <iostream>
#include <vector>
#include <algorithm>  // For std::sort

using namespace std;

int main() {
    // Create a vector of integers
    vector<int> myVector = {64, 34, 25, 12, 22, 11, 90};

    // Print the original vector
    cout << "Original vector: ";
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    // Sort the vector in ascending order
    sort(myVector.begin(), myVector.end());

    // Print the sorted vector
    cout << "Sorted vector: ";
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


// Descending order

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> myVector = {64, 34, 25, 12, 22, 11, 90};

    // Print the original vector
    cout << "Original vector: ";
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    // Sort the vector in descending order using a lambda expression
    sort(myVector.begin(), myVector.end(), [](int a, int b) {
        return a > b;
    });

    // Print the sorted vector
    cout << "Sorted vector (descending): ";
    for (int num : myVector) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// sort a part of array
sort(a+2,a+4)

// sort in descending order
sort(a, a+n, greater<int>)
