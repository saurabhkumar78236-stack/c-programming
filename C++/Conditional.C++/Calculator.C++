// Write a program to create a calculator that performs basic arithmetic operations(addition, subtraction, multiplication, division) using switch case. the calculator should input two numbers and an operator from user.

#include <iostream>
using namespace std;
int main() {
    int n1;
    cin>>n1;
    char op;
    cin>>op;
    int n2;
    cin>>n2;
    if(op=='+') cout<<n1+n2;
    if(op=='-') cout<<n1-n2;
    if(op=='*') cout<<n1*n2;
    if(op=='/') cout<<n1/n2;
}