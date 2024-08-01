//element with the highest priority (or the largest element based on the default comparator) is always accessible.
//push, pop - O(logn)
//top - O(1)

#include <iostream>
#include <queue>
#include <vector>
#include <functional> // For std::greater

using namespace std;

int main() {
    // Create a max-priority queue of integers (default behavior)
    priority_queue<int> maxPQ;

    // Adding elements to the priority queue
    maxPQ.push(10);
    maxPQ.push(20);
    maxPQ.push(30);
    maxPQ.push(40);
    maxPQ.push(50);

    // Print the top element of the max-priority queue
    cout << "Top element (max-priority queue): " << maxPQ.top() << endl;

    // Remove the top element from the priority queue
    maxPQ.pop();

    // Print the new top element after pop
    cout << "New top element after pop: " << maxPQ.top() << endl;

    // Print all elements of the max-priority queue
    cout << "All elements in the max-priority queue (from highest to lowest):" << endl;
    while (!maxPQ.empty()) {
        cout << maxPQ.top() << " ";
        maxPQ.pop(); // Remove the top element
    }
    cout << endl;

    // Create a min-priority queue of integers
    priority_queue<int, vector<int>, greater<int>> minPQ;

    // Adding elements to the min-priority queue
    minPQ.push(10);
    minPQ.push(20);
    minPQ.push(30);
    minPQ.push(40);
    minPQ.push(50);

    // Print the top element of the min-priority queue
    cout << "Top element (min-priority queue): " << minPQ.top() << endl;

    // Remove the top element from the min-priority queue
    minPQ.pop();

    // Print the new top element after pop
    cout << "New top element after pop: " << minPQ.top() << endl;

    // Print all elements of the min-priority queue
    cout << "All elements in the min-priority queue (from lowest to highest):" << endl;
    while (!minPQ.empty()) {
        cout << minPQ.top() << " ";
        minPQ.pop(); // Remove the top element
    }
    cout << endl;

    return 0;
}
