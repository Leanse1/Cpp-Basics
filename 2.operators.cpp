#include <iostream>
#include <cmath> // Include cmath for fmod
using namespace std;

int main() {
    int a = 3;
    int a1 = 3;
    float b = 2;
    int sum = a + b;
    int sub = a - b;
    int multi = a * b;
    float div = a / b;
    int remainder = a/a1;
    // modulus work only with int, so use fmod
    float remain = fmod(a, b); 
    int result = 14;
    result += 10;
    
    cout << sum << endl << sub << endl << multi << endl;
    cout << div << endl << remainder << endl << remain << endl;
    cout << result << endl;
    cout << a << endl;
    a++; //a += 1
    cout << a << endl;
    a--; // a -=1
    cout << a << endl;
    
    return 0;
}
