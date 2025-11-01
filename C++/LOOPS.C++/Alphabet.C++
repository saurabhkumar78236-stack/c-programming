// Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.

#include <iostream>
using namespace std;
int main(){
      for (char c = 'A'; c <= 'Z'; c++) {
        std::cout << c << " ";
    }
    std::cout << std::endl;
}