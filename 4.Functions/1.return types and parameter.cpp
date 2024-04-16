// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printhello();
void printNumber(int a);
int giveMe10();
int addThese(int num1, int num2);

int main() {
    int num1 = 120;
    int num2 = 580;
    
    printhello();
    printNumber(100);
    
    int someData = giveMe10();
    cout << someData << endl;
    
    int totalValue = addThese(num1,num2);
    cout <<totalValue <<endl;
    return 0;
}

// doesnot have return function
void printhello()
{
   cout << "Hello There" << endl; 
}

void printNumber(int a)
{
    cout << "The number is " << a << endl;
}

int giveMe10()
{
    return 10;
}



//sqaure function
#include <iostream>
using namespace std;

int square(int num);

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int a = square(num);
    cout << "Square of " << num << " is: " << a << endl;
    return 0;
}

int square(int num1) {
    return num1 * num1;
}


int addThese(int num1, int num2)
{
    return num1 + num2;
}