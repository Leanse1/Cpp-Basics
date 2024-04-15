#include <iostream>
#include <string>
using namespace std;

int main()
{
    const int Array = 5;
    int myArray[Array] = {2, 3, 4, 5, 6};
    string names[Array] = {"asd", "jg", "jbed", "jgmj", "bjb"};
    
    for (int i = 0; i < Array; i++)
    {
        cout << myArray[i] << endl;
    }
    for (int number : myArray)// for number in myArray;in python
    {
        cout << number <<endl;
    }
    for (string name:names) // for name in names; in python
    {
        cout<<name<<endl;
    }

    return 0;
}
