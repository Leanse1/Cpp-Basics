#include <iostream>
#include <string>
using namespace std;

int main(){
    int age;
 cout<<"please enter age";
 cin>>age;
 cin.get();
 
 if (age>=16)
 {
     cout<<"you can drive"<<endl;
 }
 else if((age >=12) && (age < 16) )
 {
     cout<<"you can sit"<<endl;
 }
 else
 {
 cout<<"Leave"<<endl;
 }
    return 0;
}
