#include <iostream>
using namespace std;
class student
{
int rollno;
char name[20];
public:
// member functions declaration
void input();
void output();
}s1;
void student::input()
{
cin >> rollno >> name;
}
void student::output()

{
cout << rollno << " " << name;
}
// main function for the program
int main() {
cout << "Enter the details";
student s2;
s1.input();
cout << "\nthe details are\n";
s1.output();
s2.input();
cout << "the details are\n";
s2.output();
return 0;
}