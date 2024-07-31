Static vs Non-Static Variables and Methods
1. Static Variables
Static variables can be classified into two categories: 
static member variables (in classes) and static local variables (inside functions). 
They both have specific behaviors and uses.

a. Static Member Variables

Definition: Declared with the static keyword inside a class.
Scope: They belong to the class rather than any particular instance. 
       They are shared by all instances of the class.
Lifetime: They are initialized only once and retain their value throughout the lifetime of the program.
Access: They can be accessed directly via the class name without creating an object. (important)

#include <iostream>
using namespace std;

class Counter {
public:
    static int count;  // Static member variable

    //construtor
    Counter() {
        ++count;
    }

    static void displayCount() {  // Static member function
        cout << "Count: " << count << std::endl;
    }
};

// Definition and initialization of the static member variable
int Counter::count = 0;

int main() {
    Counter c1;
    Counter c2;
    Counter::displayCount();  // Output: Count: 2
    return 0;
}



b. Static Local Variables

Definition: Declared with the static keyword inside a function.
Scope: Local to the function but retains its value between function calls.
Lifetime: Initialized only once and maintains its value across multiple invocations of the function.

#include <iostream>
using namespace std;

void counterFunction() {
    static int counter = 0;  // Static local variable
    ++counter;
    cout << "Counter: " << counter << std::endl;
}

int main() {
    counterFunction();  // Output: Counter: 1
    counterFunction();  // Output: Counter: 2
    counterFunction();  // Output: Counter: 3
    return 0;
}

2. Non-Static Variables
Non-static variables can be classified into two categories: instance variables (in classes) 
and automatic local variables (inside functions).

a. Instance Variables

Definition: Declared without the static keyword inside a class.
Scope: Each instance of the class has its own copy of the instance variables.
Lifetime: Exists as long as the instance of the class exists. They are created when the object is instantiated and destroyed when the object is destroyed.
Access: Must be accessed through an object of the class.

#include <iostream>

class Box {
public:
    int length;  // Instance variable
};

int main() {
    Box box1;
    Box box2;
    
    box1.length = 5;
    box2.length = 10;
    
    std::cout << "box1 length: " << box1.length << std::endl;  // Output: box1 length: 5
    std::cout << "box2 length: " << box2.length << std::endl;  // Output: box2 length: 10
    
    return 0;
}
b. Automatic Local Variables

Definition: Declared inside a function without the static keyword.
Scope: Local to the function in which they are declared.
Lifetime: Created when the function is called and destroyed when the function exits.
Example:

cpp
Copy code
#include <iostream>

void localFunction() {
    int localVar = 10;  // Automatic local variable
    std::cout << "Local variable: " << localVar << std::endl;
}

int main() {
    localFunction();  // Output: Local variable: 10
    return 0;
}

Summary
Static Member Variables: Shared across all instances of a class, initialized once, and exist for the lifetime of the program.
Static Local Variables: Retain their value between function calls, initialized once, and local to the function.
Non-Static Instance Variables: Unique to each instance of a class, initialized with each object, and exist for the lifetime of the object.
Automatic Local Variables: Exist only during the function call and are destroyed when the function exits.







