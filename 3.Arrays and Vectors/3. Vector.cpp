#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> someVec; // size not initialized
    vector<string> anotherVec(3);
    vector<int> v(5,100); //[100.100,100,100,100]
    vector<int> v1(5); //[0,0,0,0,0]
    vector<int> v2(v1); //copy v1


    // adds elements to the end of a vector using push_back and emplace_back
    someVec.push_back(1);
    someVec.push_back(2);
    someVec.push_back(3);
    someVec.emplace_back(4);

    cout << "someVec size: " << someVec.size() << endl;

    for (int val : someVec) {
        cout << val << " ";
    }
    cout << endl;

    anotherVec[0] = "John";
    anotherVec[1] = "Joiihn";
    anotherVec[2] = "Jdhiohn";

    anotherVec.push_back("ghiop"); // add last with push_back
    anotherVec.emplace_back("Emily"); // add last with emplace_back

    for (const string& name : anotherVec) {
        cout << name << " ";
    }
    cout << endl;

    cout << "Front element: " << anotherVec.front() << endl;
    cout << "Back element: " << anotherVec.back() << endl;

    anotherVec.pop_back(); // remove last

    anotherVec.insert(anotherVec.begin() + 2, "don");  // insert
    anotherVec.erase(anotherVec.begin() + 2);          // erase element at index 2
    anotherVec.emplace(anotherVec.begin() + 2, "Jane"); // insert using emplace

    cout << "Front element after modifications: " << anotherVec.front() << endl;
    cout << "Back element after modifications: " << anotherVec.back() << endl;

    for (const string& name : anotherVec) {
        cout << name << " ";
    }
    cout << endl;

    return 0;
}

// Iteration in vector

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Create a vector of integers
    vector<int> myVector = {10, 20, 30, 40, 50};

    // Using iterators to access elements
    cout << "Using iterators to access elements:" << endl;
    for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Using const iterators to access elements (read-only)
    cout << "Using const iterators to access elements (read-only):" << endl;
    for (vector<int>::const_iterator it = myVector.cbegin(); it != myVector.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Using reverse iterators to access elements in reverse order
    cout << "Using reverse iterators to access elements in reverse order:" << endl;
    for (vector<int>::reverse_iterator rit = myVector.rbegin(); rit != myVector.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;

    // Modifying elements using iterators
    cout << "Modifying elements using iterators:" << endl;
    for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
        *it += 10;
    }

    // Display modified elements
    cout << "Modified elements:" << endl;
    for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Inserting elements using iterators
    cout << "Inserting elements using iterators:" << endl;
    vector<int>::iterator it = myVector.begin();
    myVector.insert(it + 2, 25); // Insert 25 at index 2

    // Display elements after insertion
    for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Erasing elements using iterators
    cout << "Erasing elements using iterators:" << endl;
    it = myVector.begin();
    myVector.erase(it + 3); // Erase element at index 3

    // Display elements after erasure
    for (vector<int>::iterator it = myVector.begin(); it != myVector.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}

