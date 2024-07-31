Timemuted: Allows a thread to attempt to lock a mutex and specify a time limit for how long
 it should wait for the lock to be acquired.

If the mutex is not available within the specified time, the thread will return with a failure status.
Useful when you want to avoid blocking indefinitely


#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;

timed_mutex tmutex;
int sharedCounter1 = 0;

void timedLockFunction(int threadID) {
    for (int i = 0; i < 5; ++i) {
        if (tmutex.try_lock_for(chrono::milliseconds(100))) {
            // Lock acquired
            cout << "Thread " << threadID << " acquired the lock." << endl;
            this_thread::sleep_for(chrono::milliseconds(200)); // Simulate work
            ++sharedCounter1;
            cout << "Thread " << threadID << " incremented counters to "
                 << sharedCounter1 << endl;
            tmutex.unlock();
        } else {
            // Lock not acquired
            cout << "Thread " << threadID << " could not acquire the lock, doing other work..." << endl;
            this_thread::sleep_for(chrono::milliseconds(50)); // Simulate doing other work
        }
    }
}

int main() {
    thread t1(timedLockFunction, 1);
    thread t2(timedLockFunction, 2);

    t1.join();
    t2.join();

    return 0;
}

//Recursive Mutex:  Allows a thread to acquire the same mutex multiple times without causing a deadlock. 

#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

recursive_mutex rmutex;

void recursiveFunction(int count) {
    if (count <= 0) return;

    unique_lock<recursive_mutex> lock(rmutex);
    cout << "Lock acquired, count: " << count << endl;

    this_thread::sleep_for(chrono::milliseconds(100)); // Simulate work

    recursiveFunction(count - 1); // Recursive call

    // Lock will be released automatically when unique_lock goes out of scope
}

int main() {
    thread t1(recursiveFunction, 5);
    thread t2(recursiveFunction, 5);

    t1.join();
    t2.join();

    return 0;
}
