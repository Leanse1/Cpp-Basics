#include <iostream>
#include <array>
using namespace std;


int main()
{
    array<int, 10> myIntArray{1,2};
    
    // fill remaining with 0
    for (int number : myIntArray)  //same as for number in myIntArray in python
    {
        cout << number <<endl;
    }
  
    return 0;
}

int main()
{
    array<int, 10> myIntArray;
    
    for (int i = 0; i < myIntArray.size(); i++)
        if (i%2==0)
        {
            cout << i <<endl;
        }
  
    return 0;
}