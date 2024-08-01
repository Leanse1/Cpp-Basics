// sorted order & unique elements

#include <iostream>
#include <set>

using namespace std;

int main() {
    // Create a set of integers
    set<int> mySet;

    // Adding elements to the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(40);
    mySet.insert(50);

    // Print the elements of the set
    cout << "Elements in the set: ";
    for (int val : mySet) {
        cout << val << " ";
    }
    cout << endl;

    // Check if an element is in the set using find
    int searchValue = 30;
    auto it = mySet.find(searchValue);
    if (it != mySet.end()) {
        cout << searchValue << " is in the set." << endl;
    } else {
        cout << searchValue << " is not in the set." << endl;
    }

    // Check if an element is in the set using count
    int countValue = 30;
    if (mySet.count(countValue) > 0) {
        cout << countValue << " is in the set." << endl;
    } else {
        cout << countValue << " is not in the set." << endl;
    }

    // Find lower_bound and upper_bound
    //lowerbound: Returns an iterator to the first element that is greater than or equal to the value
    //upperbound: Returns an iterator to the first element that is greater than the given value.
    int lbValue = 25;
    int ubValue = 35;

    auto lb = mySet.lower_bound(lbValue);
    auto ub = mySet.upper_bound(ubValue);

    cout << "Lower bound of " << lbValue << ": ";
    if (lb != mySet.end()) {
        cout << *lb << endl;
    } else {
        cout << "No lower bound found." << endl;
    }

    cout << "Upper bound of " << ubValue << ": ";
    if (ub != mySet.end()) {
        cout << *ub << endl;
    } else {
        cout << "No upper bound found." << endl;
    }

    // Erase an element
    mySet.erase(30);

    // Print the elements after erasure
    cout << "Elements after erasing 30: ";
    for (int val : mySet) {
        cout << val << " ";
    }
    cout << endl;

    // Check the size of the set
    cout << "Size of the set: " << mySet.size() << endl;

    // Clear the set
    mySet.clear();
    cout << "Size of the set after clearing: " << mySet.size() << endl;

    return 0;
}


//multiset: sorted but not unique

#include <iostream>
#include <set>

using namespace std;

int main() {
    // Create a multiset of integers
    multiset<int> myMultiset;

    // Adding elements to the multiset
    myMultiset.insert(10);
    myMultiset.insert(20);
    myMultiset.insert(10);
    myMultiset.insert(30);
    myMultiset.insert(20);
    myMultiset.insert(40);

    // Print the elements of the multiset
    cout << "Elements in the multiset: ";
    for (int val : myMultiset) {
        cout << val << " ";
    }
    cout << endl;

    // Count occurrences of an element
    int value = 20;
    cout << "Count of " << value << ": " << myMultiset.count(value) << endl;

    //  Finds the range of elements in the multiset that are equal to value.
    // equal_range(value): returns A pair of iterators
    //range.first: An iterator pointing to the first occurrence of 20 in the multiset.
    //range.second: An iterator pointing to the position just past the last occurrence of 20.
    auto range = myMultiset.equal_range(value);
    cout << "Occurrences of " << value << ": ";
    for (auto it = range.first; it != range.second; ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Erase an element
    myMultiset.erase(20);

    // Print the elements after erasure
    cout << "Elements after erasing 20: ";
    for (int val : myMultiset) {
        cout << val << " ";
    }
    cout << endl;

    // Erase all occurrences of an element
    myMultiset.erase(myMultiset.find(10), myMultiset.end());

    // Print the elements after erasing all occurrences of 10
    cout << "Elements after erasing all occurrences of 10: ";
    for (int val : myMultiset) {
        cout << val << " ";
    }
    cout << endl;

    // Check the size of the multiset
    cout << "Size of the multiset: " << myMultiset.size() << endl;

    // Clear the multiset
    myMultiset.clear();
    cout << "Size of the multiset after clearing: " << myMultiset.size() << endl;

    return 0;
}

//unordered set: randomised and unique elements
