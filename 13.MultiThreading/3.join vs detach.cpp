join	
Synchronizes with the thread's completion
Blocks the calling thread until the thread completes
When you need to wait for the thread to finish
The thread object owns the thread until it completes

detach
No synchronization; thread runs independently
Does not block the calling thread
When the thread should run in the background
The thread object loses ownership immediately


#include <iostream>
#include <thread>

void threadFunction() {
    for (int i = 0; i < 5; ++i) {
        std::cout << "Thread function executing\n";
    }
}

int main() {
    std::thread t(threadFunction);

    // Wait for the thread to finish
    t.join();

    std::cout << "Main thread continues after thread has finished\n";
    return 0;
}


#include <iostream>
#include <thread>

void threadFunction() {
    for (int i = 0; i < 5; ++i) {
        std::cout << "Thread function executing\n";
    }
}

int main() {
    std::thread t(threadFunction);

    // Detach the thread to let it run independently
    t.detach();

    std::cout << "Main thread continues without waiting for the thread\n";
    return 0;
}
