#include <iostream>
#include <string>
using namespace std;
class student
{
int rollno;
string name;
int marks;
public:
void input()
{
cout << "Enter Roll No, Name, Marks: ";
cin >> rollno >> name >> marks;
}
// Binary + operator overloading
student operator+(const student &obj)
{
student obj1;
obj1.marks = marks + obj.marks;
return obj1;
}
// Prefix increment
void operator++()
{
marks++;
}
// Postfix increment
void operator++(int)
{
marks++;
}
// Prefix decrement
void operator--()
{
marks--;
}

// Postfix decrement
void operator--(int)
{
marks--;
}
void output()
{
cout << "Marks: " << marks << endl;
}
void output1()
{
cout << "Roll No: " << rollno << ", Name: " << name << ", Marks: " << marks << endl;
}
};
int main()
{
student s1, s2, s3;
s1.input();
s2.input();
s3 = s1 + s2; // binary +
s3.output();
student s4;
s4.input();
s4++; // postfix increment
s4.output1();
student s5;
s5.input();
s5--; // postfix decrement
s5.output1();
return 0;
}