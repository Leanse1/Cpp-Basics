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
 
for (int val : someVec) {
    cout << val << " ";
}
cout << endl;  

 anotherVec[0] = "John";
 anotherVec[1] = "Joiihn";
 anotherVec[2] = "Jdhiohn";
 
 anotherVec.push_back("ghiop"); //add last
 
 for (string name : anotherVec)
 {
     cout << name <<" ";
 }
 cout << endl;
 
 cout<<anotherVec.front()<<endl;
 cout<<anotherVec.back()<<endl;
 anotherVec.pop_back(); //remove last
 
 anotherVec.insert(anotherVec.begin() + 2,"don");  //insert
 cout<<anotherVec.front()<<endl;
 cout<<anotherVec.back()<<endl;
 
  for (string name : anotherVec)
 {
     cout << name <<" ";
 }
 cout << endl;
 
    return 0;
}
