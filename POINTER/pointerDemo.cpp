#include<iostream>
using namespace std;
int main(){
    int *ptr;//only declair the pointer

    //cout<<ptr<<endl;
    int marks = 90;

    ptr = &marks;

    cout<<"Address stored in ptr : "<<ptr<<endl;;
    //Accessing data through a pointer 
    //fot this we use dereference operator
    cout<<"Value stored in ptr : "<<*ptr<<endl;
    //-----------------

    marks=100;
    //the bucket marks updated the value from 90 -> 100
    //but ptr is still pointing to same bucket
    //now if we dereference ptr,we get 100
    cout<<"New updeted value of marks "<<marks<<endl;
    cout<<"ptr  still pointing to same memory which has 100 instead of 90 - "<<*ptr<<endl;

    //updating marks with pointer
    *ptr = 50;
    cout<<"New value of marks is : "<<marks<<endl;
    cout<<"New value pointed by ptr "<<*ptr<<endl;
    int value=*ptr;
    cout<<value<<endl;
    return 0;
}