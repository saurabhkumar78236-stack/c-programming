// Wap to print the sum of given number and its reverse.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int sum =0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    cout<<sum;
}