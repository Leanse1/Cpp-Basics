// short snippets of code that cannot be reused and are not worth naming. 
// It makes the code cleaner, easier to read, and lambdas are also fast to execute. 
// syntax [](){}    [capture](parameter){logic}

//through parameters
#include <iostream>
using namespace std;

int main() {
    auto add = [](int a, int b) -> int {
        return a + b;
    };

    int result = add(3, 4);
    cout << "Result: " << result << endl; // Output: Result: 7
    return 0;
}

//through capturing
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 20;

    auto add = [x, y]() -> int {
        return x + y;
    };

    int result = add();
    cout << "Result: " << result << endl; // Output: Result: 30
    return 0;
}

//by reference
#include <iostream>
using namespace std;

int main() {
    int x = 10;

    auto increment = [&x]() {
        x++;
    };

    increment();
    cout << "x: " << x << endl; // Output: x: 11

    return 0;
}

//for_each
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    //for each function applies lambda function in each element [](){}
    for_each(numbers.begin(), numbers.end(), [](int &n) {
        n *= 2;
    });

    for (int n : numbers) {
        cout << n << " "; // Output: 2 4 6 8 10
    }
    cout << endl;

    return 0;
}


