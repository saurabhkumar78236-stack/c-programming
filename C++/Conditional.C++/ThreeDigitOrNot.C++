#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    if(n>99 && n<1000){
        cout<<"3 digit number"<<endl;
    }
    else{
        cout<<"not a 3 digit number"<<endl;
    }
}