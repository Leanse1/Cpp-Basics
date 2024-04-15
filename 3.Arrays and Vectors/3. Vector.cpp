//unlike array, can dynamically resize as needed to accomodate more elements
// no need to initialise memory capacity

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
 vector<int> someVec; //size not initialised
 vector <string> anotherVec(3);
 
 // adds an element to the end of a vector.
 someVec.push_back(1);
 someVec.push_back(2);
 someVec.push_back(3);
 
 cout<< "someVec size " << someVec.size() <<endl;
 
 anotherVec[0] = "John";
 anotherVec[1] = "Joiihn";
 anotherVec[2] = "Jdhiohn";
 
 anotherVec.push_back("ghiop");
 
 for (int val : someVec)
 {
     cout << val <<endl;
 }
 
 for (string name : anotherVec)
 {
     cout << name <<endl;
 }
 
 cout<<anotherVec.front()<<endl;
 cout<<anotherVec.back()<<endl;
 anotherVec.pop_back(); //remove last
 
 anotherVec.insert(anotherVec.begin() + 2,"don");  //insert
 cout<<anotherVec.front()<<endl;
 cout<<anotherVec.back()<<endl;
 
    return 0;
}
