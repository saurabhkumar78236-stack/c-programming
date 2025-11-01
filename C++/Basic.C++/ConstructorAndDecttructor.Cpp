#include<iostream>
using namespace std;

class Demo {
    public:
        Demo() {
            cout<<"Constructor caled\n";
        }
        ~Demo() {
            cout<<"Destructor called\n";
        }
};

int main() {
    Demo d;
    return 0;
}