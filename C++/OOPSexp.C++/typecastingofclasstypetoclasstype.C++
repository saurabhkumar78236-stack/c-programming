// Write a program to demonstrate the typecasting of class type to class type.

#include<iostream>
using namespace std;
class source;
class avi
{
    float a;
public:
    avi(source x);
    void show()
    {
        cout<<"Half value:"<<a<<endl;
    }
};
class source
{
    float p;
public:
    source(float x)
    {
        p=x;
    }
    float get()
    {
        return p;
    }
};
avi::avi(source x)
{
    a=x.get()/2;
}
int main()
{
    cout<<"please enter a number:";
    float b;
    cin>>b;

    source s1(b);
    avi a1 = s1;
    a1.show();
    return 0;
}