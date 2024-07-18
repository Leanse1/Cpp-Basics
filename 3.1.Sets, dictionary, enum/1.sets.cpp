#include <iostream>
#include <set>

using namespace std;

int main() {
    // Create a set of integers
    set<int> mySet;

    // Insert elements into the set
    // gets automatically sorted
    mySet.insert(5);
    mySet.insert(3);
    mySet.insert(8);
    mySet.insert(1);
    mySet.insert(3); // Duplicate elements are ignored

    // Display the elements of the set
    cout << "Elements in the set: ";
    for (int elem : mySet) {
        cout << elem << " ";
    }
    cout << endl;

    // Check if an element exists
    int searchValue = 2;
    //mySet.end - represents the position just after the last element in the set.
    //mySet.find(searchValue) searches for 2 in the set and returns an iterator pointing to 2 if found, or mySet.end() if not found.
    if (mySet.find(searchValue) != mySet.end()) {
        cout << searchValue << " found in the set." << endl;
    } else {
        cout << searchValue << " not found in the set." << endl;
    }

    // Remove an element
    mySet.erase(3);
    cout << "After removing 3, elements in the set: ";
    for (int elem : mySet) {
        cout << elem << " ";
    }
    cout << endl;

    // Display the size of the set
    cout << "Size of the set: " << mySet.size() << endl;

    return 0;
}
