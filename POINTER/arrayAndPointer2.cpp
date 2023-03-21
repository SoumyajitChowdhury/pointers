#include<iostream>
using namespace  std;
void process(int *arr,int n){
    //inside this func we have the access of thr same array in the main
    for(int i = 0;i<n;i++){
        cout<<*(arr + i)<<" ";
    }
    *(arr+1)=33;
}
int main(){
    int arr[3]={1,3,5};
    process(arr,3);
    cout<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}