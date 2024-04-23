//variable that stores the memory address of another variable
//declared using the * before the memory variable name. 
//To initialize a pointer, you assign it the address of another variable using the address-of operator (&).

//To access the value stored at the memory address pointed to by a pointer, you use the dereference operator (*) before the pointer variable.
#include <iostream>
using namespace std;

int main() {
   
   int myLovelyInt = 150;
   int* somePtr = &myLovelyInt; 
   double myDouble = 3.14;
   double* doublePtr = &myDouble;
   
   cout << "myLovelyInt is originally "<< myLovelyInt << endl;
   cout << "pointer holds value: " << somePtr << endl;
   cout << "pointer dereferenced: "<<*somePtr << endl;
   
   // Assign a new value through the pointer to myLovelyInt
   *somePtr = 200;
   
   cout << "myLovelyInt is now: " << myLovelyInt << endl;
   
   cout<< doublePtr << endl;
   cout<< *doublePtr << endl;

   return 0;
}