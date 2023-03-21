#include<iostream>
using namespace  std;//how to point a hole array using single pointer

int main(){
    int a[3] = {11,12,13};
    int (*p)[3] = &a;
    cout<<p<<" "<<*p<<" "<<*a<<endl;
}