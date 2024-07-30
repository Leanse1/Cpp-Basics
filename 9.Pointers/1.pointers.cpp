//Pointer stores the memory address of variable rather than variable. 

// &x gives the memory addres of x rather than value of x.

// to create a pointer that stores memory address of n
int n = 5;
int* ptr = &n;  // pointer datatype should be same as of variable datatype
cout << ptr; //gives memory address of n

// to access value stored in memory address of pointer
cout << *ptr;  //dereferencing

//To reassign value stored in memory adress (which also changes value of n)
*ptr = 10;
cout << *ptr ;

//also
int v;
int* ptr2 = &v;
*ptr2 = 7;




#include <iostream>
using namespace std;

int main() {
   
   int myLovelyInt = 150;
   int* somePtr = &myLovelyInt; 
   double myDouble = 3.14;
   double* doublePtr = &myDouble;
   
   cout << "myLovelyInt is originally "<< myLovelyInt << endl;  //150
   cout << "pointer holds value: " << somePtr << endl;  //meemory value
   cout << "pointer dereferenced: "<<*somePtr << endl;  //150
   
   // Assign a new value through the pointer to myLovelyInt
   *somePtr = 200;
   
   cout << "myLovelyInt is now: " << myLovelyInt << endl;  // 200
   
   cout<< doublePtr << endl;  // memory pointer
   cout<< *doublePtr << endl;  //3.14

   return 0;
}


**********************************  VOID POINTER *********************************************8

A void* pointer is a special type of pointer in C and C++ that can hold the address of any data type.
However, because it doesnot know what type of data it points to, you cannot directly dereference a void* pointer. You need to cast it to the appropriate type first.


#include <iostream>
using namespace std;

void printValue(void* ptr, char type) {
    switch (type) {
        case 'i':  // Integer
            cout << "Integer value: " << *((int*)ptr) << endl;   //dereference(typecasting ptr to int)
            break;
        case 'f':  // Float
            cout << "Float value: " << *((float*)ptr) << endl;
            break;
        case 'c':  // Character
            cout << "Character value: " << *((char*)ptr) << endl;
            break;
        default:
            cout << "Unknown type!" << endl;
    }
}

int main() {
    int intValue = 42;
    float floatValue = 3.14;
    char charValue = 'A';

    // Pointing to an integer 
    printValue(&intValue, 'i');

    // Pointing to a float
    printValue(&floatValue, 'f');

    // Pointing to a char
    printValue(&charValue, 'c');

    return 0;
}


############################################ Array and Pointer ########################################

memory allocated to first index of array is same as the memory of array and pointer address

#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int* ptr = arr; // Pointer to the first element of the array

    cout << "Array Address: " << arr << endl;  //0xde113ff9f0
    cout << "First Element address: " << &arr[0] << endl; //0xde113ff9f0
    cout << "Pointer Address: " << ptr << endl;  //0xde113ff9f0
    cout << "First Element: " << *ptr << endl;  //10
    cout << "Second Element: " << *(ptr + 1) << endl; //20
    cout << "First Element: " << *arr << endl;  //10
    cout << "Third Element: " << *(arr + 2) << endl; //20

    return 0;
}


#include <iostream>
using namespace std;

void findMinMax(int* arr, int size, int* min, int* max) {
    *min = *arr; // dereference & Initialize min with the first element of the array
    *max = *arr; // Initialize max with the first element

    for (int i = 1; i < size; i++) {
        if (*(arr + i) < *min) {
            *min = *(arr + i);
        }
        if (*(arr + i) > *max) {
            *max = *(arr + i);
        }
    }
}

int main() {
    int arr[] = {15, 3, 27, 6, 45, 10, 2};
    int size = sizeof(arr) / sizeof(arr[0]); // 28/4
    int min, max;

    findMinMax(arr, size, &min, &max);  // 2 memory addresses

    cout << "Minimum value: " << min << endl;
    cout << "Maximum value: " << max << endl;

    return 0;
}


