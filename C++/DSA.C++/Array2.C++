#include <iostream>

using namespace std;

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
 
    cout<< "elements array : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    cout<<arr[2];
    arr[2] = 60;
    cout<<"updated array is :";
    cout<<arr[n] <<" ";
    return 0;
}