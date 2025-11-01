#include <iostream>
#include <cstring>
using namespace std;
class student
{
int rollno;
string name; // safer than char*
public:
// initializer list constructor
student(int r, const string &n) : rollno(r), name(n) {}
void output()
{
cout << "Roll No: " << rollno << ", Name: " << name << endl;
}
};
int main()
{
student s1(100, "ankit");
s1.output();
return 0;
}