#include<iostream>
#include<cstring>
using namespace std;

class student{
    int rollno;
    char name[20];
    public:
    //Default constructor
    student(){
        rollno=100;
        strcpy(name,"Saurabh");
    }
    //Parameterized constructor
    student(int r,const char n[20]){
        rollno=r;
        strcpy(name,n);
    }

    void output(){
        cout<<"Rollno:"<<rollno<<endl;
    }
}s1; //global object

int main(){
    student s2;
    cout<<"\nThe details are:\n";
    s1.output();
    //create a new object with parameterized constructor
    student s3(101,"Kiran");
    cout<<"The details are:\n";
    s3.output();
    return 0;
}