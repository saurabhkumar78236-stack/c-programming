#include<iostream>
#include<string>
using namespace std;

class student
{
    int rollno;
    string name; // safer than char*
public:
// initializer list constructor
    student(int r, const string &n) : rollno(r), name(n) {}

    void display()
    {
        cout << "Roll No: " << rollno << ", Name: " << name << endl;
    }
};

int main()
{
    student s1(100, "ankit");
    s1.display();
    return 0;
}