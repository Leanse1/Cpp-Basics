Mutex (Mutual exclusion): to protect shared data from being simultaneously accessed by multiple threads.

Using mutex in C++ ensures that shared resources are safely accessed by multiple threads,
preventing data races and ensuring data consistency. 
lock_guard and unique_lock provide safe and flexible mechanisms for managing mutexes, 
making multithreaded programming more robust and easier to manage.

lock_guard
Simplifies the locking and unlocking of mutexes.
Automatically locks the mutex when created and unlocks it when destroyed.
Limited. It only supports basic lock/unlock operations.
Locks the mutex immediately upon creation.

unique_lock
Provides more flexibility than lock_guard.
Can defer locking, manually lock/unlock, and supports timed locking.
Flexibility: High. It can be used for more complex locking scenarios.
Can be created without locking the mutex (defer_lock), 
and the mutex can be locked/unlocked manually.


#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

int sharedCounter1 = 0;
int sharedCounter2 = 0;
mutex mtx1, mtx2;

void incrementCounters() {
    for (int i = 0; i < 1000; ++i) {
        {
            // Lock the first mutex using lock_guard
            //whichever thread comes in first locks it
            lock_guard<mutex> lock(mtx1);
            ++sharedCounter1;
            // The mutex is automatically unlocked when lock_guard goes out of scope
        }

        {
            // Lock the second mutex using unique_lock
            unique_lock<mutex> lock(mtx2);
            ++sharedCounter2;
            cout<<"in1" << sharedCounter2 << endl;
            // The mutex is automatically unlocked when unique_lock goes out of scope
        }
    }
}

void decrementCounters() {
    for (int i = 0; i < 1000; ++i) {
        {
            // Lock the first mutex using lock_guard
            lock_guard<mutex> lock(mtx1);
            --sharedCounter1;
            // The mutex is automatically unlocked when lock_guard goes out of scope
        }

        {
            // Lock the second mutex using unique_lock with deferred locking
            unique_lock<mutex> lock(mtx2, defer_lock);

            // Perform some operation
            lock.lock(); // Manually lock the mutex
            --sharedCounter2;
            lock.unlock(); // Manually unlock the mutex

            // Do other work outside the locked section
            // The mutex can be manually locked and unlocked as needed
        }
    }
}

int main() {
    // Create and run multiple threads
    thread t1(incrementCounters);
    thread t2(decrementCounters);

    // Wait for the threads to finish
    t1.join();
    t2.join();

    // Output the final counter values
    cout << "Final counter1 value: " << sharedCounter1 << endl;
    cout << "Final counter2 value: " << sharedCounter2 << endl;

    return 0;
}
