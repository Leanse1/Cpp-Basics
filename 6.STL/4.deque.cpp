//exactly similar to list and vector

#include <iostream>
#include <deque>

using namespace std;

int main() {
    // Create a deque of integers
    deque<int> myDeque = {10, 20, 30, 40, 50};

    // Print the initial deque
    cout << "Initial deque: ";
    for (int val : myDeque) {
        cout << val << " ";
    }
    cout << endl;

    // Adding elements to the front and back
    myDeque.push_front(5);     // Add 5 to the front
    myDeque.push_back(55);     // Add 55 to the back

    // Print the deque after adding elements
    cout << "Deque after push_front and push_back: ";
    for (int val : myDeque) {
        cout << val << " ";
    }
    cout << endl;

    // Removing elements from the front and back
    myDeque.pop_front();      // Remove the front element
    myDeque.pop_back();       // Remove the back element

    // Print the deque after removing elements
    cout << "Deque after pop_front and pop_back: ";
    for (int val : myDeque) {
        cout << val << " ";
    }
    cout << endl;

    // Inserting elements at a specific position
    deque<int>::iterator it = myDeque.begin();
    advance(it, 2);          // Move iterator to the third position
    myDeque.insert(it, 25); // Insert 25 before the third position

    // Print the deque after insertion
    cout << "Deque after insertion: ";
    for (int val : myDeque) {
        cout << val << " ";
    }
    cout << endl;

    // Erasing elements from a specific position
    it = myDeque.begin();
    advance(it, 1);          // Move iterator to the second position
    myDeque.erase(it);      // Erase the element at the second position

    // Print the deque after erasure
    cout << "Deque after erasure: ";
    for (int val : myDeque) {
        cout << val << " ";
    }
    cout << endl;

    // Using reverse iterator
    cout << "Deque in reverse order: ";
    for (deque<int>::reverse_iterator rit = myDeque.rbegin(); rit != myDeque.rend(); ++rit) {
        cout << *rit << " ";
    }
    cout << endl;

    return 0;
}
