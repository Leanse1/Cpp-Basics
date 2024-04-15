#include <iostream>
#include <string>
using namespace std;

int main(){
    int age;
 cout<<"please enter age";
 cin>>age;
 cin.get();
 
    for (int i =1; i <= age; i++)
    {
        cout<<"happy birthday" <<i<<endl;
    }
    
        return 0;
    }