#include<iostream>
using namespace std;
int main(){
    int arr[]={18,25,30,45,55};
    int n = 5;
    int key = 45;
    int found = -1;
    for (int i=0; i<n; i++) {
        if(arr[i] == key) {
            found = i;
            break;
        }
    }
    if(found !=-1)
    {
        cout<<"Element "<<key<<" found at index "<<found;
    } 
    else 
    {
        cout<<"Element "<<key<<" not found in the array";
    }
}