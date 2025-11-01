#include<iostream>
using namespace std;
class print {
    public:
    void show(int i){
        cout<<"integer:"<<i<<endl;
    }
    void show(double d){
        cout<<"double:"<<d<<endl;
    }
    void show(string s){
        cout<<"string:"<<s<<endl;
    }
};
int main(){
    print p;
    p.show(10);
    p.show(3.14);
    p.show("function overloading");
    return 0;

}