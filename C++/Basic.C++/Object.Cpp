#include<iostream>
using namespace std;

class student {
    public:
    string name;
        int roll;
        void display(){
            cout<<"Name:"<<name<<",Roll:"<<roll<<endl;
        }
    };
int main(){
    student s;
    s.name = "saurabh";
    s.roll = 1;
    s.display();
    return 0;
}