#include <iostream>
using namespace std;
class student {
static int count; // static data variable
int rollno;
char name[20];
public:
void input();
void output() const;
static void showcount() { // static data function
cout << endl << "count=" << count;
}
} s1;
// function definitions
void student::input() {
count++;
cin >> rollno >> name;
}
void student::output() const {
cout << rollno << " " << name << endl;
}
// static variable definition
int student::count = 0;
// main function
int main() {
student s2;
cout << "Enter details for student 1 (rollno name): ";
s1.input();
cout << "\nThe details are\n";
s1.output();

cout << "Enter details for student 2 (rollno name): ";
s2.input();
cout << "The details are\n";
s2.output();
student::showcount();
return 0;
}