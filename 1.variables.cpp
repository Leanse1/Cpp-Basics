#include <iostream>
#include <string>
using namespace std;

int main() {
    // Write C++ code here
    int myint = 15;
    // float provides around 6-7 decimal digits of precision
    float myfloat = 12.6776;
    //double typically provides 15-16 decimal digits of precision
    double mydouble = 3.2423344;
    // char gives only one chracter
    char mychar = 'a';
    // string provides multiple character
    string mystring = "hi guys";
    // boolean false = 0; true =1
    bool istrue = true;
    
    cout << mychar <<' '<<mystring <<' '<< "hello" <<endl;
    cout << myint + myfloat - mydouble <<endl;
    cout << istrue <<endl;
    cout << boolalpha << istrue <<endl; 

    return 0;
}