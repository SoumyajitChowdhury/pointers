/*Write a program to print the kth element of an array using pointers.
The first line of the input contains the size of the array and the value of k.*/
#include<iostream>
using namespace  std;
int main(){
    int n,k;
    cout<<"Enter size of array : "<<endl;
    cin>>n;
    cout<<"Enter kth position : "<<endl;
    cin>>k;

    int arr[n];
    for(int i  = 0;i<n;i++){
        cin>>arr[i];
    }

    int *kth_ele = (arr + k - 1);
    cout<<"kth element is : "<<*kth_ele<<endl;
    return 0;
}