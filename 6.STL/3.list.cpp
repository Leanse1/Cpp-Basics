//unlike vector, list can push front as well
//has less time complexity

#include <iostream>
#include <list>

using namespace std;

int main() {
    // Create a list of integers
    list<int> myList = {10, 20, 30, 40, 50};

    // Print the initial list
    cout << "Initial list: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Adding elements to the front and back
    myList.push_front(5);     // Add 5 to the front
    myList.push_back(55);     // Add 55 to the back

    // Print the list after adding elements
    cout << "List after push_front and push_back: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Removing elements from the front and back
    myList.pop_front();      // Remove the front element
    myList.pop_back();       // Remove the back element

    // Print the list after removing elements
    cout << "List after pop_front and pop_back: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Inserting elements at a specific position
    list<int>::iterator it = myList.begin();
    advance(it, 2);          // Move iterator to the third position
    myList.insert(it, 25);  // Insert 25 before the third position

    // Print the list after insertion
    cout << "List after insertion: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Erasing elements from a specific position
    it = myList.begin();
    advance(it, 1);          // Move iterator to the second position
    myList.erase(it);       // Erase the element at the second position

    // Print the list after erasure
    cout << "List after erasure: ";
    for (int val : myList) {
        cout << val << " ";
    }
    cout << endl;

    // Using reverse iterator
    cout << "List in reverse order: ";
    for (list<int>::reverse_iterator rit = myList.rbegin(); rit != myList.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;

    return 0;
}
