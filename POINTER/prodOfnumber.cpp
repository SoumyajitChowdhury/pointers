// Write a program to find the product of 2 numbers using pointers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    int prod;
    cin>>num1>>num2;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int *ptr_prod = &prod;

    *ptr_prod = *ptr1 * *ptr2;

    cout<<prod<<endl;
}
