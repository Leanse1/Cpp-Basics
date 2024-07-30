#############################################   FUNCTION POINTERS     ################################################################

// pointers that point to the address of a function. They can be used to call functions dynamically

#include <iostream>
using namespace std;

// Functions to be pointed to
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

// Function that takes a function pointer as an argument
void performOperation(int (*operation)(int, int), int x, int y) {
    cout << "Result: " << operation(x, y) << endl;
}

int main() {
    // Declare a function pointer
    int (*funcPtr)(int, int);

    //// Assign the 'add' function to the function pointer
    // funcPtr = add;
    // cout << "Adding: " << funcPtr(10, 5) << endl; // Output: 15

    // // Assign the 'subtract' function to the function pointer
    // funcPtr = subtract;
    // cout << "Subtracting: " << funcPtr(10, 5) << endl; // Output: 5

    // Use function pointers with a function that takes a function pointer as an argument
    funcPtr = add;
    performOperation(add, 20, 10);   // Output: 30
    funcPtr = subtract;
    performOperation(subtract, 20, 10);   // Output: 10

    return 0;
}

############################################  SMART POINTERS ############################################################

smart pointers:  help to prevent memory leaks and dangling pointers by ensuring that objects are properly deleted when they are no longer needed.

Types:
unique_ptr: It is a smart pointer that owns and manages another object through a pointer and disposes of that object when the unique_ptr goes out of scope. 
            No two unique_ptrs can own the same object.
            can be moved but not copied.

#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:
    MyClass() { cout << "MyClass Constructor\n"; }
    ~MyClass() { cout << "MyClass Destructor\n"; }
    void display() { cout << "Hello from MyClass\n"; }
};

int main() {
    unique_ptr<MyClass> ptr1(new MyClass()); // Creating a unique_ptr
    ptr1->display(); // Using the object

    unique_ptr<MyClass> ptr2 = move(ptr1); // Transferring ownership to ptr2
    if (!ptr1) {
        cout << "ptr1 is null\n"; // ptr1 is now null
    }
    ptr2->display(); // Using the object via ptr2

    return 0; // MyClass instance is automatically deleted when ptr2 goes out of scope
}

Output:
MyClass Constructor
Hello from MyClass
ptr1 is null
Hello from MyClass
MyClass Destructor

--------------------------------------------------------------------------------------------------------
    
Shared pointer: 
Shared Ownership: Multiple shared_ptrs can own the same object.
Reference Counting: The object is deleted when the reference count drops to zero.

#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:
    MyClass() { cout << "MyClass Constructor\n"; }
    ~MyClass() { cout << "MyClass Destructor\n"; }
    void display() { cout << "Hello from MyClass\n"; }
};

int main() {
    shared_ptr<MyClass> ptr1(new MyClass()); // Creating a shared_ptr
    {
        shared_ptr<MyClass> ptr2 = ptr1; // Shared ownership
        ptr2->display(); // Using the object

        cout << "ptr1 use_count: " << ptr1.use_count() << '\n'; // Reference count
        cout << "ptr2 use_count: " << ptr2.use_count() << '\n';
    } // ptr2 goes out of scope, reference count decreases

    cout << "ptr1 use_count: " << ptr1.use_count() << '\n'; // Reference count

    return 0; // MyClass instance is automatically deleted when the last shared_ptr goes out of scope
}

Output
MyClass Constructor
Hello from MyClass
ptr1 use_count: 2
ptr2 use_count: 2
ptr1 use_count: 1
MyClass Destructor

-----------------------------------------------------------------------------------------------
weak_ptr
weak_ptr is a smart pointer that holds a non-owning ("weak") reference to an object that is managed by shared_ptr.
It is used to break circular references that can prevent memory from being freed.

Key Characteristics:
Does not affect the reference count of std::shared_ptr.
Used to break circular dependencies between shared_ptrs.

#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:
    MyClass() { cout << "MyClass Constructor\n"; }
    ~MyClass() { cout << "MyClass Destructor\n"; }
    void display() { cout << "Hello from MyClass\n"; }
};

int main() {
    shared_ptr<MyClass> ptr1(new MyClass()); // Creating a shared_ptr
    weak_ptr<MyClass> weakPtr = ptr1; // Creating a weak_ptr from shared_ptr

    if (auto sharedPtr = weakPtr.lock()) { // Lock the weak_ptr to get a shared_ptr
        sharedPtr->display(); // Using the object
        cout << "sharedPtr use_count: " << sharedPtr.use_count() << '\n';
    } else {
        cout << "The object has been deleted.\n";
    }

    ptr1.reset(); // Reset the shared_ptr, object is deleted

    if (auto sharedPtr = weakPtr.lock()) { // Try to lock the weak_ptr again
        sharedPtr->display();
    } else {
        cout << "The object has been deleted.\n";
    }

    return 0;
}


-----------------------------------------------------------------------------------------------------------------------------


#include <iostream>
using namespace std;

void noConst();
void cp2ncd();
void ncp2cd();
void cp2cd();

int main() {
    noConst();
    cout << endl;
    
    cp2ncd();
    cout << endl;
    
    ncp2cd();
    cout << endl;
    
    cp2cd();
    cout << endl;
    return 0;
}

//neither pointer nor data is a constant (both can be changed)
void noConst()
{
    cout<<"original"<< endl;
    int* intPtr = new int(50);
    cout<<"\t noConst: " << *intPtr <<endl;
    *intPtr = 100;
    cout<<"\t changed value: " << *intPtr <<endl;
    delete intPtr;
    intPtr = new int(125);
    cout<<"\t new value: " << *intPtr <<endl;
    delete intPtr;
}

//pointer is constant(cannot be changed)
//data is not constant(can be changed)
void cp2ncd()
{
    cout << "original"<< endl;
    int* const intPtr = new int(100);
    cout << "\t cp2ncd: " <<*intPtr <<endl;
    *intPtr = 250;
    cout<<"\t new integer value : " << *intPtr <<endl;
    delete intPtr;
    //intPtr = new int(234) ERRoR!! ptr is constant
}

//pointer is not constant
//data is constant
void ncp2cd()
{
    cout << "`ncp2cd value"<<endl;
    const int* intPtr = new int(500);
    cout << "\t orig value: " << *intPtr << endl;
    delete intPtr;
    intPtr = new int(100);
    //*intPtr = 1500; Error!! data is constant
}

//pointer is constant
//data is constant
void cp2cd()
{
    const int* const intPtr = new int(1500);
    cout<<"inside cp2cd" << endl;
    cout << "\t orig value" << *intPtr << endl;
    
    //intPtr = 1212; error data is constant
    //intPtr = new int(1212); error pointer is contant
    
}
