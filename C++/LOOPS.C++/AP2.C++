// Display this AP - 4,7,10,13,16,.....upto `n` terms.

// mathod 1:- direct formula

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    // 4 7 10 13 16 .....
    for(int i=0; i<n; i++){
        cout<<(4 + i*3)<<endl;
    }
}

//  method 2:-using variable & keeping 'i' only for the rounds.

// #include<iostream>
// using namespace std;
// int majn(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;
//     // 4 7 10 13.....
//     int a = 4;
//     for(int i=1; i<=n; i++){
//         cout<<a<<" ";
//         a = a + 3;
//     }
// }