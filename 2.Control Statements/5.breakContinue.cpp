//when there is no complex logic
#include <iostream>
#include <string>
using namespace std;

int main(){
 int grade;
 cout<<"please enter number";
 cin>>grade;
 cin.get();
 
//  passes the condition
 while(grade<10)
 {
  if(grade==5){
      grade++;
      continue;
  }
  cout<<grade<<endl;
  grade++;
 }
 
//  breaks the loop
 cout<<"please enter number";
 cin>>grade;
 cin.get();
     while(grade<10)
     {
      if(grade==5){
          grade++;
          break;
      }
  cout<<grade<<endl;
  grade++;
 }

  
    return 0;
}
