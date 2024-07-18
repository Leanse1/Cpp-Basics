//when there is no complex logic
#include <iostream>
#include <string>
using namespace std;

int main(){
 char grade;
 cout<<"please enter Grade";
 cin>>grade;
 cin.get();
// grade = tolower(grade);   to remove two case for each
 
 switch(grade)
 {
    case 'A':
    case 'a':
        cout<<"great!!"<<endl;
        break;
    case 'B':
    case 'b':
        cout<<"ok great!!"<<endl;
        break;
    case 'C':
    case 'c':
        cout<<"not so great!!"<<endl;
        break;
    case 'D':
    case 'd':
        cout<<"study!!"<<endl;
        break;
    case 'E':
    case 'e':
        cout<<"retake!!"<<endl;
        break;
    default:
        cout<<"type properly"<<endl;
 }
 
    return 0;
}
