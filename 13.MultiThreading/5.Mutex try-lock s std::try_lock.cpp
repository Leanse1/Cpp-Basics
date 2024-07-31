//to check the lock status and decide whether to perform other tasks or try locking again later.
//Doesnot always complete the function perfectly

#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;

mutex mtx;
int sharedCounter = 0;

void tryIncrementCounter(int threadID) {
    for (int i = 0; i < 1000; ++i) {
        if (mtx.try_lock()) {
            // If the mutex is successfully locked, increment the counter
            ++sharedCounter;
            cout << "Thread " << threadID << " incremented counter to " << sharedCounter << endl;
            // Unlock the mutex
            mtx.unlock();
        } else {
            // If the mutex is already locked, perform some other task or wait
            cout << "Thread " << threadID << " could not lock the mutex, doing other work..." << endl;
            this_thread::sleep_for(chrono::milliseconds(1)); // Simulate doing other work
        }
    }
}

int main() {
    // Create and run multiple threads
    thread t1(tryIncrementCounter, 1);
    thread t2(tryIncrementCounter, 2);

    // Wait for the threads to finish
    t1.join();
    t2.join();

    // Output the final counter value
    cout << "Final counter value: " << sharedCounter << endl;

    return 0;
}


// std::try_lock  tries to lock all lockable objects passed in one by one in given order

#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>

using namespace std;

mutex mtx1, mtx2;
int sharedCounter1 = 0, sharedCounter2 = 0;

void tryLockMultipleMutexes(int threadID) {
    for (int i = 0; i < 1000; ++i) {
        unique_lock<mutex> lock1(mtx1, defer_lock);
        unique_lock<mutex> lock2(mtx2, defer_lock);
        
        // Attempt to lock both mutexes
        if (try_lock(lock1, lock2) == -1) {  // -1 means all locks were successful
            ++sharedCounter1;
            ++sharedCounter2;
            cout << "Thread " << threadID << " incremented counters to "
                 << sharedCounter1 << " and " << sharedCounter2 << endl;
        } else {
            cout << "Thread " << threadID << " could not lock both mutexes, doing other work..." << endl;
            this_thread::sleep_for(chrono::milliseconds(1)); // Simulate doing other work
        }
    }
}

int main() {
    // Create and run multiple threads
    thread t1(tryLockMultipleMutexes, 1);
    thread t2(tryLockMultipleMutexes, 2);

    // Wait for the threads to finish
    t1.join();
    t2.join();

    // Output the final counter values
    cout << "Final counter1 value: " << sharedCounter1 << endl;
    cout << "Final counter2 value: " << sharedCounter2 << endl;

    return 0;
}
