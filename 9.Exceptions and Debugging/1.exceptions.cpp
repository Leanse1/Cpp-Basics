// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
using namespace std;

int main() {
    // Write C++ code here
    vector<string> names(5);

    names.at(0) = "John";
    names.at(1) = "Johnie";
    names.at(2) = "Jon";
    names.at(3) = "Jhnoah";
    names.at(4) = "Johnyie";
    
    for (string name : names)
    {
        cout << name <<endl;
    }
    
    try
    {
    //exception
    names.at(5) = "Tyler";  
    }
    catch(const out_of_range& err)
    {
       cout<< err.what() <<endl;
    }

    return 0;
}