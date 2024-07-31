To divide single process into multiple threads

ex: browser with multiple tabs

ex: int main() is default thread
default thread which is main(), on side we create other threads
creating multiple threads at same time doesnt guarantee which one will start first

ways to create threads in c++

1. function pointers
2. lambda functions
3. functors
4. Member functions
5. Static member functions

//Basic threading
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

// Function to be executed by the first thread
void threadFunction1() {
    for (int i = 0; i < 5; ++i) {
        cout << "Thread 1 - Count: " << i << endl;
    }
}

// Function to be executed by the second thread
void threadFunction2() {
    for (int i = 0; i < 5; ++i) {
        cout << "Thread 2 - Count: " << i << endl;
    }
}

int main() {
    // Create threads for functions where both run simultaneously
    thread t1(threadFunction1);
    thread t2(threadFunction2);

    // to join thread back to our main function (kind of waiting for threads to finish)
    t1.join();
    t2.join();

    cout << "Threads have finished executing" << endl;
    return 0;
}

