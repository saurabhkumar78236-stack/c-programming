//  print the table of `n`.here `n` is a integer which user will input.

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter an integer: ";
    cin >> n;

    cout << "Table of " << n << " is:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}