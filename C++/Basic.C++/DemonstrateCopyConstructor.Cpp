#include<iostream>
using namespace std;
class Number{
int n;
public:
    Number(int x) {n = x;}
    Number(Number &num) {n = num.n;}
    void show() {cout<<"Number:"<<n<<endl;}
};
int main(){
    Number a(10);
    Number b(a);
    b.show();
    return 0;
}