//  Wap to find the highest factor of a number 'n' (other than n it self)

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int f = 1;
    for(int i=n/2;i>=1;i--){
        if(n%i==0) {
          cout<<i<<endl;
            //break;
        }
    }
}