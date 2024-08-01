// store unique key in sorted order

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


// Multimap: duplicate key in sorted order

#include <iostream>
#include <map>

using namespace std;

int main() {
    // Create a multimap with integer keys and string values
    multimap<int, string> myMultimap;

    // Adding elements to the multimap
    myMultimap.insert({1, "apple"});
    myMultimap.insert({2, "banana"});
    myMultimap.insert({1, "apricot"});
    myMultimap.insert({3, "cherry"});
    myMultimap.insert({2, "blueberry"});
    myMultimap.insert({4, "date"});

    // Print the elements of the multimap
    cout << "Elements in the multimap: " << endl;
    for (const auto& pair : myMultimap) {
        cout << pair.first << " => " << pair.second << endl;
    }
    cout << endl;

    // Find and print all values associated with a specific key
    int key = 2;
    auto range = myMultimap.equal_range(key);

    cout << "Values associated with key " << key << ": ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->second << " ";
    }
    cout << endl;

    // Erase all elements with a specific key
    myMultimap.erase(key);

    // Print the elements after erasure
    cout << "Elements after erasing key " << key << ": " << endl;
    for (const auto& pair : myMultimap) {
        cout << pair.first << " => " << pair.second << endl;
    }
    cout << endl;

    // Check the size of the multimap
    cout << "Size of the multimap: " << myMultimap.size() << endl;

    // Clear the multimap
    myMultimap.clear();
    cout << "Size of the multimap after clearing: " << myMultimap.size() << endl;

    return 0;
}

//unordered map: not sorted unique keys