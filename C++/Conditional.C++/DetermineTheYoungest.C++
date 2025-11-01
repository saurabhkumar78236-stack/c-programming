// If the ages of ram, shyam and ajay are input through the keyword, write a program to determine the youngerst of the three.

#include <iostream>
using namespace std;
int main(){
    int ramAge, shyamAge, ajayAge;
    cout<<"Enter age of Ram: ";
    cin>>ramAge;
    cout<<"Enter age of Shyam: ";
    cin>>shyamAge;
    cout<<"Enter age of Ajay: ";
    cin>>ajayAge;

    if(ramAge < shyamAge){ // Shyam cannot be the youngest
        if(ramAge < ajayAge){
            cout<<"Ram is the youngest."<<endl;
        }
        else{ // Ajay < Ram < Shyam
            cout<<"Ajay is the youngest."<<endl;
        }
    }
    else{ // Shyam < Ram
        if(shyamAge < ajayAge){
            cout<<"Shyam is the youngest."<<endl;
        }
        else{ // Ajay < Shyam < Ram
            cout<<"Ajay is the youngest."<<endl;
        }
    }
}