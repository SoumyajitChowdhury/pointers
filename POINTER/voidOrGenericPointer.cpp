/*void pointer are special type of pointer that can point to any data type  value*/
#include<iostream>
using namespace  std;
int main(){
    float f = 10.2;
    int x = 10;
    void *ptr = &f;
    ptr = &x;
   // cout<<*ptr<<endl;--->void point can't be dereferenced
    int *intPointer = (int*)ptr;
    cout<<*intPointer<<endl;
    return 0;

}