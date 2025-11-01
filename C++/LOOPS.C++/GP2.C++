//  Display this GP - 3,12,48,192,.....upto `n` terms.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    // 3 12 48 192 .....
    int a = 3;
    for(int i=1; i<=n; i++){
        cout<<a<<" ";
        a = a * 4;
    }
}