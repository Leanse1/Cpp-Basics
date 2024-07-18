/* AND p&&q >>> OR p||q >>> not !p  */
#include <iostream>
#include <string>
using namespace std;

int main(){
    // const double PI = 3.14159; // cant change later in code
    // const string name = "hii";
    // cout << name <<endl;
    // return 0;
    
    int age;
    string fullname;
    
    cout << "enter your name" <<endl;
    //cin>>fullname;
    getline(cin, fullname); //used with string. stops reading when it encounters a newline character (\n)
    cout << "enter your age" <<endl;
    // cin >> Reads input until it encounters whitespace.  Reads a single word
    // cin.get() Reads a single or multiple character, including whitespace.
    cin>>age;
    cin.get() // as a good practice to stop value getting flow outside
    cout << fullname <<endl;
    cout<<"you will die at "<< age+60;
    return 0;
}


#include <iostream>
#include <string>
#include <cctype> // Include this header for tolower function

using namespace std;

int main() {
    char grade;
    cout << "Please enter grade: ";
    cin >> grade;

    // Convert grade to lowercase
    grade = tolower(grade);

    // Print the grade
    cout << grade << endl;

    return 0;
}
