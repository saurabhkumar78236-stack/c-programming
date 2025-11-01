#include <iostream>
using namespace std;
int main(){
    int cp;
    cout<<"enter cost price : ";
    cin>>cp;
    int sp;
    cout<<"enter selling price : ";
    cin>>sp;
    if(sp>cp){
    cout<<"profit is "<<sp-cp<<endl;
    }
    else if(sp<cp){
    cout<<"loss is "<<cp-sp<<endl;
    }
    else {
    cout<<"no profit no loss"<<endl;
    }
}