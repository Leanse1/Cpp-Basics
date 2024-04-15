/* AND p&&q >>> OR p||q >>> not !p  */
#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << boolalpha;
    int a = 2;
    int b = 4;
    bool areequal = a == b;
    bool istrue = true;
    bool isfalse = false;
    
    cout << (a<b) << endl;
    cout << (a>b) << endl;
    cout << (a>=b) << endl;
    cout << (a<=b) << endl;
    cout << (a!=b) << endl;
    cout << areequal<<endl;
    cout << (istrue && isfalse) <<endl;
    cout << (istrue || isfalse) <<endl;
    cout << (!istrue) <<endl;
    
    
    return 0;
}
