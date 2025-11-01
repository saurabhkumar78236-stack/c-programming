// Take 3 positive integer inputs and print the greatest of them.

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1 positive numbers";
    cin>>a;
    cout<<"enter 2 positive numbers";
    cin>>b;
    cout<<"enter 3 positive numbers";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is the greatest"<<endl;
    }
    else if(b>a && b>c){
        cout<<b<<" is the greatest"<<endl;
    }
    else{
        cout<<c<<" is the greatest"<<endl;
    }
}