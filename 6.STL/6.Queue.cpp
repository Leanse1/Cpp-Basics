//FIFO

#include <iostream>
#include <queue>

using namespace std;

int main() {
    // Create a queue of integers
    queue<int> myQueue;

    // Adding elements to the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    myQueue.push(40);
    myQueue.push(50);

    // Print the front element of the queue
    cout << "Front element: " << myQueue.front() << endl;

    // Remove the front element from the queue
    myQueue.pop();

    // Print the new front element after pop
    cout << "New front element after pop: " << myQueue.front() << endl;

    // Print all elements of the queue
    cout << "All elements in the queue (from front to back):" << endl;
    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop(); // Remove the front element
    }
    cout << endl;

    return 0;
}
