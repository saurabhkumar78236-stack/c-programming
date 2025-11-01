#include <iostream>
using namespace std;
class student
{
int rollno; // data member (variable) to store roll number
char name[20]; // data member (character array) to store name
public:
// member functions defined inside the class
void input()
{
cin >> rollno >> name; // taking input from user

}
void output()
{
cout << rollno << " " << name; // displaying values
}
}s1; // global object of class student
// main function
int main()
{
student s2;
// another object created locally inside main
s1.input(); // calling input() for object s1
cout << "\nthe details are\n";
s1.output(); // displaying details of s1
s2.input(); // calling input() for object s2
cout << "\nthe details are\n";
s2.output(); // displaying details of s2
return 0; // program ends successfully
}