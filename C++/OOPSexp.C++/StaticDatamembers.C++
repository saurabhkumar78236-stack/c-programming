#include <iostream>
using namespace std;
class student {
static int count; // static data variable
int rollno;
char name[20];
public:
// member functions declaration
void input();
void output();
static void showcount() { // static data function access static data members only
cout << endl << "count = " << count;
}
} s1; // object created outside
// Function definitions
void student::input() {
count++;
cin >> rollno >> name;
}
void student::output() {
cout << rollno << " " << name << endl;
}
// static variable definition
int student::count = 0;
// main function
int main() {
student s2; // another object
cout << "Enter details for student 1 (rollno name): ";
s1.input();
cout << "The details are: ";
s1.output();

cout << "Enter details for student 2 (rollno name): ";
s2.input();
cout << "The details are: ";
s2.output();
student::showcount(); // display total students
return 0;
}