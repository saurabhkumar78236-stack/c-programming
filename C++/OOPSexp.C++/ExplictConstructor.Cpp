#include<iostream>
#include<cstring>
using namespace std; 
class student
{
    int rollno;
    char name[20];
    public:
    //Default Constructor
    student()
    {
        rollno = 100;
        strcpy(name,"Shivjot");
    }
    //Parameterized Constructor
    student(int r, const char n[20])
    {
        rollno = r;
        strcpy(name,n);
    }
    void output()
    {
        cout<<"Roll No:"<<rollno<<",Name:"<<name<<endl;
    }
};
int main()
{
    student s1;
    student s2;
    cout<<"The details of s1 are:\n";
    s1.output();
    s2 = student(101,"Pihu");
    cout<<"The details of s2 are:\n";
    s2.output();
    return 0;
}