// Algorithms, containers, functions, iterators

#include<bits/stdc++.h>
using namespace std;
#include <iostream>


using namespace std;

int main() {
    // Creating a pair
    pair<int, string> myPair = {1,"Hello"};

    // Printing values
    cout << "First: " << myPair.first << endl;
    cout << "Second: " << myPair.second << endl;

    // Initializing a pair using make_pair
    pair<int, pair<int, string>> anotherPair = {1,{3, "HI"}};

    // Printing values
    cout << "First: " << anotherPair.first << endl;
    cout << "Second: " << anotherPair.second.first << endl;
    cout << "Second: " << anotherPair.second.second << endl;

    pair<int, int> arr[] = {{1,2},{3,4},{5,6},{7,8}};

    cout << arr[1].second << endl;

    return 0;
}
