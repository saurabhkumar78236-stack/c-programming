#include <iostream>
using namespace std;

void printFibonacciInRange(int lower, int upper) {
    int a = 0, b = 1;
    
    cout << "Fibonacci numbers between " << lower << " and " << upper << " are:\n";
    
    while (a <= upper) {
        if (a >= lower) {
            cout << a << " ";
        }
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int lowerLimit, upperLimit;

    cout << "Enter the lower limit: ";
    cin >> lowerLimit;

    cout << "Enter the upper limit: ";
    cin >> upperLimit;

    if (lowerLimit > upperLimit) {
        cout << "Error: Lower limit should not be greater than upper limit." << endl;
    } else {
        printFibonacciInRange(lowerLimit, upperLimit);
    }

    return 0;
}
