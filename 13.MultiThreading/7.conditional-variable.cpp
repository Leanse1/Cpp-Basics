Condition variables in C++ are used for synchronizing threads and coordinating their execution.
They allow threads to wait for certain conditions to be met before proceeding. This is particularly useful for implementing producer-consumer scenarios, task coordination, and other 
scenarios where threads need to wait for a condition to be true before continuing.

Key Components
Condition Variable: Manages the waiting and notifying of threads.
Mutex: Protects shared data that threads need to access.
Unique Lock: Manages the locking and unlocking of the mutex.

Key Methods
wait(): Blocks the thread until notified. It releases the mutex while waiting and reacquires it once notified.
notify_one(): Unblocks one of the waiting threads.
notify_all(): Unblocks all waiting threads.


#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <chrono>

using namespace std;

mutex mtx;                // Mutex to protect shared resources
condition_variable cv;   // Condition variable for thread synchronization
queue<int> q;             // Shared queue for producer-consumer
const int maxQueueSize = 5; // Maximum size of the queue

// Producer function
void producer() {
    int value = 0; // Initial value to be produced
    while (true) {
        unique_lock<mutex> lock(mtx); // Lock the mutex
        cv.wait(lock, [] { return q.size() < maxQueueSize; }); // Wait until the queue has space

        // Produce an item
        q.push(value++);
        cout << "Produced: " << value - 1 << endl;

        lock.unlock(); // Unlock the mutex
        cv.notify_all(); // Notify all waiting threads
        this_thread::sleep_for(chrono::milliseconds(100)); // Simulate work
    }
}

// Consumer function
void consumer() {
    while (true) {
        unique_lock<mutex> lock(mtx); // Lock the mutex
        cv.wait(lock, [] { return !q.empty(); }); // Wait until the queue is not empty

        // Consume an item
        int value = q.front();
        q.pop();
        cout << "Consumed: " << value << endl;

        lock.unlock(); // Unlock the mutex
        cv.notify_all(); // Notify all waiting threads
        this_thread::sleep_for(chrono::milliseconds(150)); // Simulate work
    }
}

int main() {
    thread producerThread(producer); // Create producer thread
    thread consumerThread(consumer); // Create consumer thread

    producerThread.join(); // Wait for the producer thread to finish
    consumerThread.join(); // Wait for the consumer thread to finish

    return 0;
}


// Deadlock in multithreading

Deadlock is a situation in concurrent programming where two or more threads are blocked forever, waiting for each other to release resources they need. 
Deadlock occurs when a set of processes are each waiting for an event that can only be caused by another process in the set, resulting in a cycle of dependencies.

Conditions for Deadlock
For deadlock to occur, the following four conditions must hold simultaneously (known as the Coffman conditions):

Mutual Exclusion: At least one resource must be held in a non-shareable mode. Only one thread can use the resource at any given time.
Hold and Wait: A thread holding resources can request additional resources without releasing its currently held resources.
No Preemption: Resources cannot be forcibly taken from threads holding them; they must be voluntarily released.
Circular Wait: There must be a circular chain of threads, each waiting for a resource held by the next thread in the chain.