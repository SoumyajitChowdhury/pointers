#include<iostream>
using namespace std;
int main(){
    int x=10;
    float y = 9.7;

    //create a pointer that can store address of x
    //As x is an integer variable , so we need a pointer
    //that can store address of integer type
    int *ptr = &x;
    cout<<ptr<<endl;

    //create a pointer that can store address of y
    //As y is an floating point variable , so we need a pointer
    //that can store address of float type
    float *ptrf=&y;
    cout<<ptrf<<endl;
}