###########################1. FUNCTION POINTER ##############################################

#include <iostream>
#include <thread>
using namespace std;

// Function to be executed by the first thread
void add(int a, int b) {
    cout << "Addition Result: " << a + b << std::endl;
}

// Function to be executed by the second thread
void multiply(int a, int b) {
    cout << "Multiplication Result: " << a * b << std::endl;
}

// Thread function that takes a function pointer and arguments
void threadFunction(void (*fp)(int, int), int a, int b) {
    fp(a, b);
}

int main() {
    // Create function pointers
    void (*fpAdd)(int, int) = add;
    void (*fpMultiply)(int, int) = multiply;

    // Create threads
    thread t1(threadFunction, fpAdd, 5, 3);
    thread t2(threadFunction, fpMultiply, 5, 3);

    // Wait for threads to finish
    t1.join();
    t2.join();

    cout << "Threads have finished executing" << std::endl;
    return 0;
}


################################## LAMBDA FUNCTIONS ###########################################pragma endregion

#include <iostream>
#include <thread>
using namespace std;

int main() {
    auto print_sum = [](int a, int b) {
        std::cout << "Sum: " << (a + b) << std::endl;
    };

    // Create a thread that executes the lambda function
    thread t1(print_sum, 5, 10);

    // Join the thread to the main thread (wait for t1 to finish)
    t1.join();

    return 0;
}


##################################### Functor (Function Object) ###############################pragma endregion

#include <iostream>
#include <thread>
using namespace std;

class SumFunctor {
public:
    void operator()(int a, int b) const {
        cout << "Sum: " << (a + b) << std::endl;
    }
};

int main() {
    // Create an instance of the functor
    SumFunctor sumFunctor;

    // Create a thread that executes the functor
    thread t1(sumFunctor, 5, 10);

    // Join the thread to the main thread (wait for t1 to finish)
    t1.join();

    return 0;
}

################################### NON-STATIC Member Functions #############################################pragma endregion

#include <iostream>
#include <thread>
#include <vector>

using namespace std;

class Counter {

private:
    int count;  // Counter variable
    
public:
    //construction
    //Initializes member variables directly and efficiently before the constructor body executes.
    Counter() : count(0) {
        //similar to count = 0;
    }

    // Method to increment the count
    void increment(int incrementBy) {
        for (int i = 0; i < incrementBy; ++i) {
            ++count;
            cout << "Thread " << this_thread::get_id() << " incremented count to " << count << endl;
        }
    }

    // Method to print the final count
    void printFinalCount() const {
        cout << "Final count is " << count << endl;
    }

    // Method to start multiple threads for incrementing
    void startIncrementing(int numThreads, int incrementBy) {
        vector<thread> threads;

        // Create and start threads using push_back
        for (int i = 0; i < numThreads; ++i) {
            threads.push_back(thread([this, incrementBy]() { increment(incrementBy); }));
        }

        // Join threads to wait for them to finish
        for (auto& thread : threads) {
            thread.join();
        }

        // Print the final count after all threads have finished
        printFinalCount();
    }


};

int main() {
    Counter counter;

    int numThreads = 4;  // Number of threads to run
    int incrementBy = 5; // Number of times each thread will increment

    cout << "Starting threads to increment counter..." << endl;
    counter.startIncrementing(numThreads, incrementBy);

    return 0;
}


######################################## Static member function ###############################




