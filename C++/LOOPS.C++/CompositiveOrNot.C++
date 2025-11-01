// Wap to check if a number is composite or not

#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter a number :";
    cin>>n;
    bool flag = true; // true means is prime
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag = false; // false is composite
            break; //to get out of the loop 
        }
    }
    if(n==1) cout<<"neither prime nor composite";
    else
    if(flag==true) cout<<"prime";
    else cout<<"composite";
}
