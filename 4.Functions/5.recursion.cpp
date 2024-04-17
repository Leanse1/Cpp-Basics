// to solve problems that can be broken down into smaller, similar subproblems
#include <iostream>
using namespace std;

void countDownFrom(int num);
int sumValues(int num);

int main() {
    countDownFrom(10);
    int totalSum = sumValues(10);
    cout << "The sum is: " << totalSum << endl;
    return 0;
}

void countDownFrom(int num) {
    if (num >= 1) { // Change the condition to stop at 1
        cout << num << endl;
        countDownFrom(num - 1);
    }
}

int sumValues(int num) {
    if (num >= 1) {
        return num + sumValues(num - 1);
    }
    return 0; // Base case: return 0 when num is less than 1
}
