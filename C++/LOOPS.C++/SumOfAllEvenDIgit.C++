// Wap to print sum of all even digits of a given number.

#include <iostream>
using namespace std;
int main() {
    int num, sum = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        digit = num % 10; // Extract the last digit
        if (digit % 2 == 0) { // Check if the digit is even
            sum += digit; // Add the even digit to sum
        }
        num /= 10; // Remove the last digit
    }

    cout << "Sum of all even digits: " << sum << endl;

    return 0;
}