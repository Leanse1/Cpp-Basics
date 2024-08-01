//LIFO - Last in first out -> push,pop,top
// complexity - O(1)

#include <iostream>
#include <stack>

using namespace std;

int main() {
    // Create a stack of integers
    stack<int> myStack;

    // Adding elements to the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);

    // Print the top element of the stack
    cout << "Top element: " << myStack.top() << endl;

    // Remove the top element from the stack
    myStack.pop();

    // Print the new top element after pop
    cout << "New top element after pop: " << myStack.top() << endl;

    // Print all elements of the stack
    cout << "All elements in the stack (from top to bottom):" << endl;
    while (!myStack.empty()) {
        cout << myStack.top() << " ";
        myStack.pop(); // Remove the top element
    }
    cout << endl;

    return 0;
}
