#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50,60};
    int n = 6;

    int key = 40;
    int low = 0, high = n - 1;
    int found = -1;
    while(low <=high){
        int mid = (low + high)/2;

        if(arr[mid] == key){
            found = mid;
            break;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
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