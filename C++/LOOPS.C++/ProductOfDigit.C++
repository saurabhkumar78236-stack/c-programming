// Wap  to print of digits of a goven number.

#include <iostream>
using namespace std;
int main() {
    int num, product = 1, digit;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        digit = num % 10; // Extract the last digit
        product *= digit; // Multiply the digit to product
        num /= 10;       // Remove the last digit
    }

    cout << "Product of digits: " << product << endl;

    return 0;
}