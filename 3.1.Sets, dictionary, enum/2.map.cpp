#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    // Declaration and Initialization
    map<string, int> myMap;
    myMap["Alice"] = 30;
    myMap["Bob"] = 25;
    myMap.insert(make_pair("Charlie", 35));
    myMap.emplace("David", 40);

    // Accessing Elements
    cout << "Alice's age: " << myMap["Alice"] << endl;
    cout << "Bob's age: " << myMap.at("Bob") << endl<< endl;

    cout << "All elements in the map:" << endl <<endl;
    //auto: to automatically deduce the type of the variable from its initializer. 
    //&- Instead of making a copy of a large object, you can use a reference to avoid extra work and save memory.
    for (auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Finding an Element
    auto it = myMap.find("Charlie");
    if (it != myMap.end()) {
        cout << "Found: " << it->first << " -> " << it->second << endl<<endl;
    } else {
        cout << "Not found" << endl<<endl;
    }

    // Deletion
    myMap.erase("Alice");
    cout << "After removing Alice:" << endl;
    for (const auto& pair : myMap) {
        cout << pair.first << ": " << pair.second << endl<< endl;
    }

    // Replacing the value associated with the key "banana"
    string key = "banana";
    if (myMap.find(key) != myMap.end()) {
        myMap[key] = 20;
    }

    // Size and Capacity
    cout << "Size: " << myMap.size() << endl;
    if (myMap.empty()) {
        cout << "Map is empty" << endl;
    } else {
        cout << "Map is not empty" << endl;
    }

    return 0;
}




