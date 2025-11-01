// Take 3 positive integer inputs and print the greatest of them. without using multiple conditions in a single if statement.

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1 positive numbers : ";
    cin>>a;
    cout<<"enter 2 positive numbers : ";
    cin>>b;
    cout<<"enter 3 positive numbers : ";
    cin>>c;
    // a>b and b>c -> a is greatest
    if(a>b){  // b can never be the greatest
        if(a>c){
            cout<<a<<" is the greatest"<<endl;
        }
        else{ //c>a ,a>b
            cout<<c<<" is the greatest"<<endl;
        }
    }
    else{ // b>a
        if(b>c){
            cout<<b<<" is the greatest"<<endl;
        }
        else{ // c>b , b>a
            cout<<c<<" is the greatest"<<endl;
        }
    }
}