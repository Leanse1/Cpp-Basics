//vector already covered in chap 3

#include <iostream>
#include <vector>
#include <utility> // for std::pair

using namespace std;

int main() {
    // Create a pair of vectors
    pair<vector<int>, vector<string>> pairOfVectors;
    
    // different from previous
    // vector<pair<int, int>> vec;
    // vec.push_back({1,2});
    // vec.emplace_back(3,4);

    // Add elements to the first vector (vector of integers)
    pairOfVectors.first.push_back(1);
    pairOfVectors.first.push_back(2);
    pairOfVectors.first.emplace_back(3);

    // Add elements to the second vector (vector of strings)
    pairOfVectors.second.push_back("Alice");
    pairOfVectors.second.emplace_back("Bob");
    pairOfVectors.second.push_back("Charlie");

    
    // Print the elements of the first vector
    cout << "Elements of the first vector (integers): ";
    for (int val : pairOfVectors.first) {
        cout << val << " ";
    }
    cout << endl;

    // Print the elements of the second vector
    cout << "Elements of the second vector (strings): ";
    for (const string& name : pairOfVectors.second) {
        cout << name << " ";
    }
    cout << endl;

    // Using emplace_back to add elements to the vectors
    pairOfVectors.first.emplace_back(4);
    pairOfVectors.second.emplace_back("David");

    // Print the elements of the first vector after emplace_back
    cout << "Elements of the first vector after emplace_back: ";
    for (int val : pairOfVectors.first) {
        cout << val << " ";
    }
    cout << endl;

    // Print the elements of the second vector after emplace_back
    cout << "Elements of the second vector after emplace_back: ";
    for (const string& name : pairOfVectors.second) {
        cout << name << " ";
    }
    cout << endl;

    // Inserting and erasing elements
    pairOfVectors.first.insert(pairOfVectors.first.begin() + 1, 10); // Insert 10 at index 1
    pairOfVectors.second.insert(pairOfVectors.second.begin() + 1, "Eve"); // Insert "Eve" at index 1

    pairOfVectors.first.erase(pairOfVectors.first.begin() + 2); // Erase element at index 2
    pairOfVectors.second.erase(pairOfVectors.second.begin() + 2); // Erase element at index 2

    // Print the elements of the vectors after insert and erase
    cout << "Elements of the first vector after insert and erase: ";
    for (int val : pairOfVectors.first) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Elements of the second vector after insert and erase: ";
    for (const string& name : pairOfVectors.second) {
        cout << name << " ";
    }
    cout << endl;

    return 0;
}
