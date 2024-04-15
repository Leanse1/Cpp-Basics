//when there is no complex logic
#include <iostream>
#include <string>
using namespace std;

int main(){
 int grade;
 cout<<"please enter number";
 cin>>grade;
 cin.get();
 
 while(grade<10)
 {
  cout<<grade<<endl;
  grade++;
 }

//do-while
//goes inside and have a output
 cout<<"please enter number";
 cin>>grade;
 cin.get();
 
 do
 {
  cout<<grade<<endl;
  grade++;
 }while(grade<10);

  
    return 0;
}
