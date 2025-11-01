#include<iostream>
using namespace std;
int main() {
    int arr[20]= {85 , 90, 78, 92, 88}; // decleration of an array
    int n = 5;
    int element = 60; //value to be insert
    int position = 2;

    // shifting elements to right
    for(int i=n; i>position; i--){
        arr[i] = arr[i-1];
    }
    arr[position] = element;
    n++;

    cout<<"Array after insertion is:";
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}