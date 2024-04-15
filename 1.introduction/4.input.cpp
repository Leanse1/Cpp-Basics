/* AND p&&q >>> OR p||q >>> not !p  */
#include <iostream>
#include <string>
using namespace std;

int main(){
    // const double PI = 3.14159; // cant change later in code
    // const string name = "hii";
    // cout << name <<endl;
    // return 0;
    
    int age;
    string fullname;
    
    cout << "enter your name" <<endl;
    //cin>>fullname;
    getline(cin, fullname); // to include name after space
    cout << "enter your age" <<endl;
    cin>>age;
    cin.get() // as a good practice to stop value getting flow outside
    cout << fullname <<endl;
    cout<<"you will die at "<< age+60;
    return 0;
}
