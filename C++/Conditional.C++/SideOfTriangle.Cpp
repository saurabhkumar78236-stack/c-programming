// Take 3 numbers input and tell if they can be the sides of a triangle.

#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter 1 side";
    cin>>a;
    cout<<"enter 2 side";
    cin>>b;
    cout<<"enter 3 side";
    cin>>c;
    if(a+b>c && b+c>a && c+a>b){
        cout<<"valid triangle"<<endl;
    }
    else{
        cout<<"invalid triangle"<<endl;
    }
}