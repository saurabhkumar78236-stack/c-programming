// Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    if((n%5==0 || n%3==0) && n%15!=0){
        cout<<"divisible by 5 or 3 but not 15"<<endl;
    }
    else{
        cout<<"not divisible by 5 or 3 but not 15"<<endl;
    }
}