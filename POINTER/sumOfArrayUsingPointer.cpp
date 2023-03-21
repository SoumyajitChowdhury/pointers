//Write a program to find the sum of all the elements of an array. Use pointers to traverse
//the array.
#include<iostream>
using namespace  std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int *ptr = a;
    for(int i = 0;i<n;i++){
        cin>>*ptr;
        ptr++;
    }
    ptr = a;
    int sum=0;
    for(int i = 0;i<n;i++){
        sum+=*ptr;
        ptr++;
    }
    cout<<sum<<endl;
    return 0;
}