#include <iostream>
#include <cstring>
using namespace std;
class Student {
int rollno;
char *name; // pointer for dynamic memory allocation
public:
// Dynamic Constructor
Student(int r, const char *n) {
rollno = r;
name = new char[strlen(n) + 1]; // allocate memory dynamically
strcpy(name, n);
}
void display() {
cout << "Roll No: " << rollno << ", Name: " << name << endl;
}
// Destructor to free memory
~Student() {
delete[] name;
}
};
int main() {
Student s1(101, "Riya"); // dynamic constructor invoked
Student s2(102, "Preeti");
cout << "Student Details:" << endl;
s1.display();
s2.display();
return 0;
}